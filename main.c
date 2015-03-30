//
//  main.c
//  SquirrelWars
//
//  Created by Peter Schueler on 3/27/15.
//  Copyright (c) 2015 Peter Schueler. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "DataDefinitions.h"
#include "WorldEventStrings.h"
#include "WorldEvents.h"

#define SHORT_TEXT_LENGTH 256
#define LONG_TEXT_LENGTH 500

WorldEvent *lookupTable;
WorldEvent *currentEvent;

void displayFormattedOptionsForEvent(WorldEvent *event) {
  printf(ANSI_COLOR_GREEN "...> %s\n", event->text);

	printf(ANSI_COLOR_RESET "\n\n");

  if (event->responses != NULL) {
      for (int i=0; i<event->responseCount; i++) {
         if (event->responses[i].displayText != NULL) {
           printf("%u. %s\n", i+1, event->responses[i].displayText);
         }
     }
   }
}

void opening() {
  printf("There was war. You lost. Well, not you as a player, but you as an inhabitant of Sol 3 (fancy way of saying Earth). You are in control of things. You are completely helpless. Press any key and then Enter to continue.\n");
  char input[256];
  if (fgets(input, sizeof(input), stdin)) {
    printf("Not that one. Try again.\n");
    if (fgets(input, sizeof(input), stdin)) {
      printf("Close. Try again.\n");
      if (fgets(input, sizeof(input), stdin)) {
        printf("Still not the one I was…Okay. I was just messing with you. Press the AnyKey and then Enter. Go on, find it.\n");
        if (fgets(input, sizeof(input), stdin)) {
          printf("Have you found it?\n1. Yes\n2. No\n=> ");
          if (fgets((input), sizeof(input), stdin)) {
            int number;
            if (sscanf(input, "%d", &number) == 1) {
              if (number == 1 || number == 2) {
                printf("Bravo! You are now part of the game. Let's begin our little tale.");
                getchar();
                printf("\n\n\n\n\n\n\n");
                printf("EARTH! (or an earth-like planet):\n");
                printf("<insert graphics here> (seriously, don't wait until the last minute.)");
                getchar();
                printf(ANSI_COLOR_BLUE "                                                                             \n                 ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■                  \n          ■■■■■■■■■■                                  ■■■■■■■■■■■              \n       ■■■■■■■■■■                          ■■■■■■■            ■■■■■■■          \n    ■■■■■■■■                          ■■■■■■■■■■■■■■■■■         ■■■■■■■■       \n   ■■■■■                            ■■■■■■■■■■■■■■■■■■■■■          ■■■■■■■     \n  ■                                 ■■■■■■■■■■■■■■■■■■■■■■■           ■■■■■■   \n■■   ■■■■■■■■■■■■      ■■■■        ■■■■■■■■■■■■■■■■■■■■■■■              ■■■■  \n ■■   ■■■■■■■■■■■■■■■■■■■■■         ■■■■■■■■■■■■■■■■■■■■■■■                ■ ■■\n ■■    ■■■■■■■■■■■■■■■■■■■■■         ■■■■■■■■■■■■■■■■■■■■                   ■■■\n  ■   ■■■■■■■■■■■■■■■■■■■■■■           ■■■■■■■■■■■■■■■■■■                    ■■\n  ■    ■■■■■■■■■■■■■■■■■■■■                ■■■■■■■■■■■■■■■■                  ■■\n  ■■   ■■■■■■■■■■■■■■■■■                  ■■■■■■■■■■■■■■■■■■■■               ■■\n  ■■■   ■■■■■■■■■■■■■■■■■■                     ■■■■■■■■■■■■■                  ■\n   ■■■   ■■■■■ ■■■■■■ ■                         ■■■■■■■■■■■■■               ■■■\n    ■■■      ■■■■■■                               ■■■■■■■■■■■■             ■■■ \n     ■■■        ■■■■■                                 ■■■■■■■■■■       ■■■■■■  \n      ■■■■      ■■■■                                     ■■■■■      ■■■■■■■■   \n       ■■■■   ■■■■■■■■■■■■■■■■                                   ■■■■■■■       \n         ■■     ■■■■■■■■■■■■■■■■■                              ■■■■■■■         \n           ■■       ■■■■■■■■■■■■■■                    ■■■■■■■■■■■■■            \n             ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■                        \n                                                                               ");
                getchar();
                printf(ANSI_COLOR_RESET "\n\n\n\n\n\n\n");
              }
            }
          }
        }
      }
    }
  }
}

void theEnd() {
  printf(ANSI_COLOR_RED " -------------------------------------------------- \n -------------------------------------------------- \n -------------------------------------------------- \n -------------------------------------------------- \n -------------------------------------------------- \n -------------#######-#-----#-#######-------------- \n ----------------#----#-----#-#-------------------- \n ----------------#----#-----#-#-------------------- \n ----------------#----#######-#####---------------- \n ----------------#----#-----#-#-------------------- \n ----------------#----#-----#-#-------------------- \n ----------------#----#-----#-#######-------------- \n -------------------------------------------------- \n -------------#######-#-----#-######--------------- \n -------------#-------##----#-#-----#-------------- \n -------------#-------#-#---#-#-----#-------------- \n -------------#####---#--#--#-#-----#-------------- \n -------------#-------#---#-#-#-----#-------------- \n -------------#-------#----##-#-----#-------------- \n -------------#######-#-----#-######--------------- \n -------------------------------------------------- \n -------------------------------------------------- \n -------------------------------------------------- \n -------------------------------------------------- \n -------------------------------------------------- \n");
  getchar();
  exit(1);
}

void goodbye() {
	printf("Good bye, Desctructor of Worlds. See you at the reboot crossover.\n");
}

WorldEvent* processInputForEvent(WorldEvent *event) {
  char input[256];
  if (fgets(input, sizeof(input), stdin)) {
    int number;
    if (sscanf(input, "%d", &number) == 1) {
	  if(number == 7) {
	    goodbye();
	    exit(0);
	  }
      if (event->primaryResponse == number) {
        if (event->primaryTableLookupNumber == 333) {
          theEnd();
        }
        return &lookupTable[event->primaryTableLookupNumber];
      }
      if (event->secondaryResponse == number) {
        printf(ANSI_COLOR_BLUE "\n\n%s\n\n", TIME_SHIFT_BACK);
        printf(ANSI_COLOR_RESET " ");
        getchar();
        return &lookupTable[event->secondaryTableLookupNumber];
      }
      if (event->tertiaryResponse == number) {
        printf(ANSI_COLOR_BLUE "\n\n%s\n\n", TIME_SHIFT_FORWARD);
        printf(ANSI_COLOR_RESET " ");
        getchar();
        return &lookupTable[event->tertiaryTableLookupNumber];
      }
      printf(ANSI_COLOR_BLUE "\n\nYou shake violently and shift almost imperceptibly back in time.\n\n" ANSI_COLOR_RESET);
      getchar();
      return &lookupTable[event->primaryTableLookupNumber-1];
    } else {
      return NULL;
    }
  }
  return NULL;
}

int gameloop(WorldEvent* nextEvent) {
  displayFormattedOptionsForEvent(nextEvent);

  // I think processInput should look up what event is next and then return, so we can call gameloop recursively.
  currentEvent = processInputForEvent(nextEvent);
  if (currentEvent == NULL) {
    printf("\n\n\nOh man, you shouldn't have hit that button. I haven't done the error handling yet. I will kick you back to the start. It's a super rare achievement, so no being sad about it. Of course, achievements are not implemented yet. Please confirm your conformance with enter: \n\n\n");
    getchar();
    currentEvent = &lookupTable[100];
  }
  gameloop(currentEvent);
  return 1;
}

void startGame() {
  // Introductury stuff.
  opening();
  // hand over to game loop
  while(gameloop(&lookupTable[100])) {
  }
  exit(1);
}

void initLookupTable() {
  lookupTable = malloc(sizeof(WorldEvent)*350);
  lookupTable->text = malloc(sizeof(char)*8192);
  lookupTable->responses = malloc(sizeof(SimpleObject)*6);
  for (int i=0; i<5;i++) {
  	lookupTable->responses[i].displayText = malloc(sizeof(char)*1024);
	}
  memcpy(&lookupTable[100], deadOne(), sizeof(WorldEvent));
  memcpy(&lookupTable[101], deadTwo(), sizeof(WorldEvent));
  memcpy(&lookupTable[102], deadThree(), sizeof(WorldEvent));
  memcpy(&lookupTable[103], deadFour(), sizeof(WorldEvent));
  memcpy(&lookupTable[104], deadFive(), sizeof(WorldEvent));
  memcpy(&lookupTable[105], deadSix(), sizeof(WorldEvent));
  memcpy(&lookupTable[106], deadSeven(), sizeof(WorldEvent));
  memcpy(&lookupTable[107], deadEight(), sizeof(WorldEvent));
  memcpy(&lookupTable[108], deadNine(), sizeof(WorldEvent));

  memcpy(&lookupTable[120], forrestOne(), sizeof(WorldEvent));
  memcpy(&lookupTable[121], forrestTwo(), sizeof(WorldEvent));
  memcpy(&lookupTable[122], forrestThree(), sizeof(WorldEvent));
  memcpy(&lookupTable[123], forrestFour(), sizeof(WorldEvent));

  memcpy(&lookupTable[140], elderOne(), sizeof(WorldEvent));
  memcpy(&lookupTable[141], elderTwo(), sizeof(WorldEvent));
  memcpy(&lookupTable[142], elderThree(), sizeof(WorldEvent));
  memcpy(&lookupTable[143], elderFour(), sizeof(WorldEvent));
  memcpy(&lookupTable[144], elderFive(), sizeof(WorldEvent));
  memcpy(&lookupTable[145], elderSix(), sizeof(WorldEvent));
  memcpy(&lookupTable[146], elderSeven(), sizeof(WorldEvent));
  memcpy(&lookupTable[147], elderEight(), sizeof(WorldEvent));
  memcpy(&lookupTable[148], elderNine(), sizeof(WorldEvent));
  memcpy(&lookupTable[149], elderTen(), sizeof(WorldEvent));
  memcpy(&lookupTable[150], elderEleven(), sizeof(WorldEvent));

  memcpy(&lookupTable[180], castleOne(), sizeof(WorldEvent));
  memcpy(&lookupTable[181], castleTwo(), sizeof(WorldEvent));
  memcpy(&lookupTable[182], castleThree(), sizeof(WorldEvent));
  memcpy(&lookupTable[183], castleFour(), sizeof(WorldEvent));
  memcpy(&lookupTable[184], castleFive(), sizeof(WorldEvent));
  memcpy(&lookupTable[185], castleSix(), sizeof(WorldEvent));
  memcpy(&lookupTable[186], castleSeven(), sizeof(WorldEvent));
  memcpy(&lookupTable[187], castleEight(), sizeof(WorldEvent));
  memcpy(&lookupTable[188], castleNine(), sizeof(WorldEvent));
  memcpy(&lookupTable[189], castleTen(), sizeof(WorldEvent));
  memcpy(&lookupTable[190], castleEleven(), sizeof(WorldEvent));
  memcpy(&lookupTable[191], castleTwelve(), sizeof(WorldEvent));
  memcpy(&lookupTable[192], castleThirteen(), sizeof(WorldEvent));
  memcpy(&lookupTable[193], castleFourteen(), sizeof(WorldEvent));
  memcpy(&lookupTable[194], castleFifteen(), sizeof(WorldEvent));
  memcpy(&lookupTable[195], castleSixteen(), sizeof(WorldEvent));
  memcpy(&lookupTable[196], castleSeventeen(), sizeof(WorldEvent));
  memcpy(&lookupTable[197], castleEighteen(), sizeof(WorldEvent));
  memcpy(&lookupTable[198], castleNineteen(), sizeof(WorldEvent));
  memcpy(&lookupTable[199], castleTwenty(), sizeof(WorldEvent));

  memcpy(&lookupTable[205], castleOneHalf(), sizeof(WorldEvent));

  memcpy(&lookupTable[300], hauntedMallOne(), sizeof(WorldEvent));
  memcpy(&lookupTable[301], hauntedMallTwo(), sizeof(WorldEvent));
  memcpy(&lookupTable[302], hauntedMallThree(), sizeof(WorldEvent));

  memcpy(&lookupTable[330], frontierOne(), sizeof(WorldEvent));
  memcpy(&lookupTable[331], frontierTwo(), sizeof(WorldEvent));
}

int main(int argc, const char * argv[]) {
  initLookupTable();
  printf(ANSI_COLOR_MAGENTA "%s\n",OPENING_BANNER);
  printf(ANSI_COLOR_RESET "\n");
  getchar();
start:
  printf(ANSI_COLOR_GREEN "%s", INTERFACE_WELCOME);
  printf(ANSI_COLOR_RESET "1. %s\n2. %s\n3. %s\n=> ", INTERFACE_NEWGAME, INTERFACE_LOADGAME, INTERFACE_EXIT);

  char initialInput[256];
  if (fgets(initialInput, sizeof(initialInput), stdin)) {
    int number;
    if (sscanf(initialInput, "%d", &number) == 1) {
      if (number == 1) {
        printf("Okay. Get ready for the adventure of a lifetime!\n");
        startGame();
      } else if (number == 2) {
        printf("Yes, I know. Stop bothering me. Just leave your computer running. The game is not *that* long.\n");
        printf("If that's not good enough: I'm @peterschueler on twitter.");
        getchar();
        printf("\n\n\n\n\n\n\n");
        goto start;
      } else if (number == 3 || number == 7) {
        goodbye();
        return 0;
      } else if (number == 4) {
        // TODO: REMOVE THIS HIDDEN CHEAT CODE FROM FINISHED GAME!
        gameloop(&lookupTable[100]);
      } else if (number == 5) {
        gameloop(&lookupTable[199]);
      }
    }
  }
  free(lookupTable);
  return 0;
}
