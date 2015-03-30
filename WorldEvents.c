//
//  WorldEvents.c
//  SquirrelWars
//
//  Created by Peter Schueler on 3/28/15.
//  Copyright (c) 2015 Peter Schueler. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "WorldEvents.h"

#include "WorldEventStrings.h"
#include "DataDefinitions.h"

#pragma mark - ACT ONE - Death

WorldEvent* deadOne() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, ACTION_DONOTHING_SHORT, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, ACTION_SCREAM_SHORT, 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, INTERFACE_RESTART, 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, DIALOGUE_INCREDULITY_ONE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 1;
  newEvent->primaryResponse = 4;
  newEvent->primaryTableLookupNumber = 101;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  newEvent->text = malloc(sizeof (char)*1048);
  memccpy(newEvent->text, WORLDTEXT_DEAD, 0, sizeof(char[1048]));

  return newEvent;
};

WorldEvent* deadTwo() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_DEAD_REACT_ONE, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_DEAD_REACT_TWO, 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, DIALOGUE_DEAD_REACT_THREE, 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, DIALOGUE_INCREDULITY_ONE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 2;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 102;
  newEvent->secondaryResponse = 1;
  newEvent->secondaryTableLookupNumber = 100;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_TWO, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent* deadThree() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_DEAD_REACT_ONE, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_INCREDULITY_THREE, 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, DIALOGUE_NEEDHELP_THREE, 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, DIALOGUE_INCREDULITY_ONE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 3;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 103;

  newEvent->secondaryResponse = 1;
  newEvent->secondaryTableLookupNumber = 100;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_THREE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *deadFour() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, RESPONSE_TIME_TWO, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_NAME_REACT_ONE, 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, DIALOGUE_NAME_REACT_TWO, 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, DIALOGUE_NO_ONE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 4;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 104;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_FOUR, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *deadFive() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_AMNESIA_ONE, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "The Haunted Mall?!", 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, DIALOGUE_NO_ONE, 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, DIALOGUE_AMNESIA_THREE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 5;

  newEvent->primaryResponse = 4;
  newEvent->primaryTableLookupNumber = 105;

  newEvent->tertiaryResponse = 2;
  newEvent->tertiaryTableLookupNumber = 300;

  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_FIVE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *hauntedMallOne() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Why?", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 200;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 301;

  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, "Yes, the Haunted Mall. We don't talk about.", 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *hauntedMallTwo() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "You are the worst narrator.", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "I'm not sure you understand the meaning of those words. Hey, what are you doing with that shovel...?", 0, sizeof(char[160]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "I'm dead and I can't even play with the ghosts?!.", 0, sizeof(char[56]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 201;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 302;

  newEvent->secondaryResponse = 2;
  newEvent->secondaryTableLookupNumber = 100;

  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, "We just don't talk about. It's perpedicular to our plot.", 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *hauntedMallThree() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "...?", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, ":( #PoliticalMallHauntings", 0, sizeof(char[128]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 202;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 105;

  newEvent->tertiaryResponse = 1;
  newEvent->tertiaryTableLookupNumber = 120;

  memcpy(newEvent->responses, options, sizeof(SimpleObject[2]));
  memccpy(newEvent->text, "(Editor's note: We're being cagey, because Politics in the Haunted Mall sounds like a really good theme for the next game. And by we, I mean I. - Author)", 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *deadSix() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, RESPONSE_TIME_ONE, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, RESPONSE_TIME_TWO, 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, DIALOGUE_GETBACK_SHORT, 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, DIALOGUE_INCREDULITY_FOUR, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 201;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 106;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_SIX, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *deadSeven() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_NO_ONE, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_SQUIRRELWARS_ONE, 0, sizeof(char[128]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 7;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 107;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[2]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_SEVEN, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *deadEight() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_SQURRELWARS_TWO, 0, sizeof(char[128]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject));
  newEvent->responseCount = 1;
  newEvent->index = 8;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 108;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_EIGHT, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *deadNine() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_ACKNOWLEDGE_ONE, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_ACKNOWLEDGE_TWO, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*2);
  newEvent->responseCount = 2;
  newEvent->index = 9;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 120;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[2]));
  memccpy(newEvent->text, WORLDTEXT_DEAD_NINE, 0, sizeof(char[1048]));

  return newEvent;
}

#pragma mark - ACT ONE - Filler

WorldEvent *forrestOne() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_ACKNOWLEDGE_ONE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject));
  newEvent->responseCount = 1;
  newEvent->index = 10;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 121;
  memcpy(newEvent->responses, options, sizeof(SimpleObject));

  char *text = malloc(sizeof(char[2096]));
  strcpy(text, WORLD_DESCRIPTION_ONE);
  strcat(text, " ");
  strcat(text, EDITOR_PLEASEDONTSUEME);
  memccpy(newEvent->text, text, 0, sizeof(char[2096]));
  free(text);

  return newEvent;
}

WorldEvent *forrestTwo() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_ACKNOWLEDGE_THREE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 11;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 122;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, WORLD_DESCRIPTION_TWO, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *forrestThree() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_ACKNOWLEDGE_FOUR, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 12;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 123;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, WORLD_DESCRIPTION_THREE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *forrestFour() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_ACKNOWLEDGE_FIVE, 0, sizeof(char[128]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 13;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 140;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, WORLD_DESCRIPTION_FOUR, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderOne() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_ACKNOWLEDGE_SIX, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 14;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 141;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, DESCRIPTION_TEMPLE_DISTANCE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderTwo() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "That's it?", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "Are you sure about this?", 0, sizeof(char[48]))
          ;

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "ACTION: Kick the door.", 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, "ACTION: Knock on the door.", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 15;
  newEvent->primaryResponse = 4;
  newEvent->primaryTableLookupNumber = 142;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, DESCRIPTION_TEMPLE_FRONT, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderThree() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Oh noes!", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "Ahem, okay. I didn't ask about that.", 0, sizeof(char[48]))
  ;

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "I'm here about the Squirrel Wars.", 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);

  char* look = malloc(sizeof(char)*1024);
  strcpy(look, "ACTION: ");
  strcat(look, ACTION_LOOKAROUND);
  memccpy(responseFour.displayText, look, 0, sizeof(char[1024]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 16;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 143;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  char* text = malloc(sizeof(char)*1024);
  strcpy(text, CHAR_ELDER_STEREO_ONE);
  strcat(text, "\n...\n ...\n ...\n");
  strcat(text, CHAR_ELDER_STEREO_TWO);
  memccpy(newEvent->text, text, 0, sizeof(char[1024]));

  free(look);
  free(text);

  return newEvent;
}

WorldEvent *elderFour() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_GETBACK_SHORT, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, HIDDEN_TWO, 0, sizeof(char[48]))
  ;

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "That is...unfortuante.", 0, sizeof(char[48]));


  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 17;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 144;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, CHAR_ELDER_STEREO_THREE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderFive() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_YES_ONE, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_NO_ONE, 0, sizeof(char[48]))
  ;

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "I just met him.", 0, sizeof(char[24]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 18;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 145;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, CHAR_ELDER_STEREO_FOUR, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderSix() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "But we need your help!", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 19;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 146;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  char* text = malloc(sizeof(char[250]));
  strcpy(text, CHAR_ELDER_STEREO_FIVE);
  strcat(text, " ");
  strcat(text, CHAR_ELDER_STEREO_ALT_1);
  memccpy(newEvent->text, text, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderSeven() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Untold riches.", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "The knowledge that you helped to start the most important war in history?", 0, sizeof(char[128]))
  ;

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "Nothing.", 0, sizeof(char[48]));


  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 20;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 147;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, CHAR_ELDER_STEREO_ALT_3, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderEight() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "815", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "423", 0, sizeof(char[48]))
  ;

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "16", 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, "42", 0, sizeof(char[48]));


  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 21;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 148;

  newEvent->secondaryTableLookupNumber = 4;
  newEvent->secondaryTableLookupNumber = 147;

  newEvent->tertiaryResponse = 2;
  newEvent->tertiaryResponse = 144;

  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, CHAR_ELDER_STEREO_NUMBER, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderNine() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "815", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "423", 0, sizeof(char[48]))
  ;

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "16", 0, sizeof(char[48]));

  SimpleObject responseFour;
  responseFour.displayText = malloc(sizeof(char)*1024);
  memccpy(responseFour.displayText, "42", 0, sizeof(char[48]));


  SimpleObject options[] = { responseOne, responseTwo, responseThree, responseFour };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 4;
  newEvent->index = 22;

  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 149;

  newEvent->secondaryResponse = 2;
  newEvent->secondaryTableLookupNumber = 144;
  
  memcpy(newEvent->responses, options, sizeof(SimpleObject[4]));
  memccpy(newEvent->text, CHAR_ELDER_STEREO_NUMBER_N, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *elderTen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Joker?", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "The King?", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 23;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 150;

  newEvent->tertiaryResponse = 1;
  newEvent->tertiaryTableLookupNumber = 191;

  memcpy(newEvent->responses, options, sizeof(SimpleObject)*2);
  char* text = malloc(sizeof(char)*1024);
  strcpy(text, CHAR_ELDER_STEREO_NUMBER_Y);
  strcat(text, " ");
  strcat(text, CHAR_ELDER_STEREO_SIX);
  memccpy(newEvent->text, text, 0, sizeof(char[1048]));
  free(text);

  return newEvent;
}

WorldEvent *elderEleven() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Where do I find this king?", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 24;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 180;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, CHAR_ELDER_STEREO_SEVEN, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleOne() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Why didn't I see it before?", 0, sizeof(char[48]));


  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 25;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 205;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, DESCRIPTION_CASTLE_DISTANCE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleOneHalf() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "...", 0, sizeof(char[48]));


  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 70;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 181;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, DESCRIPTION_CASTLE_DIST_3, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleTwo() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "No, of course not.", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "You are the narrator.", 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "There was no option for it!", 0, sizeof(char[48]));


  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 26;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 182;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, DESCRIPTION_CASTLE_DIST_1, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleThree() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "There is no time.", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 27;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 183;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, DESCRIPTION_CASTLE_CLOSER_N, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleFour() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, DIALOGUE_YES_TWO, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_GETBACK_SHORT, 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "Whatever. Tell me about the castle.", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 28;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 184;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, DESCRIPTION_CASTLE_CLOSER_1, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleFive() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "ACTION: Walk towards king.", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 29;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 185;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  char* text = malloc(sizeof(char)*2096);
  strcpy(text, DESCRIPTION_CASTLE_CLOSER_Y);
  strcat(text, "\n\n");
  strcat(text, DESCRIPTION_CASTLE_THRONE);
  memccpy(newEvent->text, text, 0, sizeof(char[2096]));

  free(text);

  return newEvent;
}

WorldEvent *castleSix() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "I don't have any papers.", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, DIALOGUE_INCREDULITY_ONE, 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "I just need to talk to the king.", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 30;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 186;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, CHAR_CASTLE_GUARD_ONE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleSeven() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "It's about the Squirrel Wars.", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "ACTION: Hand him a couple of nuts.", 0, sizeof(char[48]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "I just need to talk to the king.", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 31;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 187;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, CHAR_CASTLE_GUARD_TWO, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleEight() {
  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseThree.displayText, "Listen. I'm from the future. Let me pass if you want to live.", 0, sizeof(char[56]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, RESPONSE_FUCKING_ONE,  0, sizeof(char[48]));

  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, RESPONSE_FUCKING_TWO,  0, sizeof(char[48]));

  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 32;
  newEvent->primaryResponse = 3;
  newEvent->primaryTableLookupNumber = 188;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  memccpy(newEvent->text, CHAR_CASTLE_GUARD_TWO_1, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleNine() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, CASTLE_GUARD_RIDDLE_A_1, 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, CASTLE_GUARD_RIDDLE_A_2,  0, sizeof(char[128]));

  SimpleObject responseThree;
  responseThree.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, CASTLE_GUARD_RIDDLE_A_3,  0, sizeof(char[48]));


  SimpleObject options[] = { responseOne, responseTwo, responseThree };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 3;
  newEvent->index = 33;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 189;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[3]));
  char* text = malloc(sizeof(char[1024]));
  strcpy(text, CASTLE_GUARD_RIDDLE_ONE);
  strcat(text, "\n");
  strcat(text, CASTLE_GUARD_RIDDLE_Q);
  memccpy(newEvent->text, text, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleTen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, CASTLE_GUARD_RIDDLE_A_4, 0, sizeof(char[128]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 34;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 190;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, CASTLE_GUARD_RIDDLE_Q_3, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleEleven() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "...", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 35;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 191;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  char *text = malloc(sizeof(char[1024]));
  strcpy(text, CASTLE_GUARD_RIDDLE_Q_4);
  strcat(text, "\n[");
  strcat(text, CASTLE_GUARD_RIDDLE_Q_5);
  strcat(text, "]\n");
  strcat(text, CASTLE_GUARD_ENTER_1);
  memccpy(newEvent->text, text, 0, sizeof(char[1024]));

  free(text);

  return newEvent;
}

WorldEvent *castleTwelve() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "You have?", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 36;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 192;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  char *text = malloc(sizeof(char[256]));
  strcpy(text, DESCRIPTION_CASTLE_THRONE_1);
  strcat(text, "\n");
  strcat(text, CASTLE_KING_ONE);
  memccpy(newEvent->text, text, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleThirteen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "All I know is that I need to start this thing somehow. I want to go home.", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "Let's be honest: I know nothing. This whole Squirrel War thing might be a McGuffin as far as I know.", 0, sizeof(char[1024]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 37;
  newEvent->primaryResponse = 2;
  newEvent->primaryTableLookupNumber = 193;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[2]));
  char *text = malloc(sizeof(char[256]));
  strcpy(text, CASTLE_KING_TWO);
  strcat(text, CASTLE_KING_THREE);
  memccpy(newEvent->text, text, 0, sizeof(char[1048]));

  free(text);

  return newEvent;
}

WorldEvent *castleFourteen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "That sounds great, but...", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "Don't mind me saying this, buy you seem seriously deranged, sir.", 0, sizeof(char[128]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 38;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 194;
  newEvent->secondaryResponse = 2;
  newEvent->secondaryTableLookupNumber = 100;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  char *text = malloc(sizeof(char[2096]));
  strcpy(text, CASTLE_KING_FOUR);
  strcat(text, CASTLE_KING_FIVE);
  strcat(text, CASTLE_KING_SIX);
  strcat(text, CASTLE_KING_SEVEN);
  memccpy(newEvent->text, text, 0, sizeof(char[2096]));

  free(text);

  return newEvent;
}

WorldEvent *castleFifteen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, CASTLE_HEROINE_ONE, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 39;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 195;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, CASTLE_KING_EIGHT, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleSixteen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, CASTLE_HEROINE_TWO, 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 40;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 196;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, CASTLE_PLACEHOLDER_ONE, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleSeventeen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "You're right. Life is too short to waste on dicks.", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 41;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 197;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  char *text = malloc(sizeof(char[1024]));
  strcpy(text, "Placeholder Number Four: ");
  strcat(text, CASTLE_PLACEHOLDER_TWO);
  strcat(text, "\n King: ");
  strcat(text, CASTLE_KING_NINE);
  memccpy(newEvent->text, text, 0, sizeof(char[1024]));

  free(text);

  return newEvent;
}

WorldEvent *castleEighteen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Use the Key!", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 42;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 198;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, CASTLE_DESCRIPTION_RUN, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleNineteen() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "...?", 0, sizeof(char[48]));

  SimpleObject options[] = { responseOne };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 1;
  newEvent->index = 42;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 199;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[1]));
  memccpy(newEvent->text, CASTLE_KEY, 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *castleTwenty() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "What happened?", 0, sizeof(char[48]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "Okay. then let's go on! Find new world, explore new heights! I am ready!", 0, sizeof(char[256]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 43;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 100;

  newEvent->secondaryResponse = 2;
  newEvent->secondaryTableLookupNumber = 330;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[2]));
  char *text = malloc(sizeof(char[4096]));
  strcpy(text, SPACE_ONE);
  strcat(text, SPACE_FINALFRONTIER);
  strcat(text, SPACE_FINALFRONTIER_ADD);
  strcat(text, SPACE_TWO);
  memccpy(newEvent->text, text, 0, sizeof(char[4096]));

  free(text);

  return newEvent;
}

WorldEvent *frontierOne() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Yes!", 0, sizeof(char[24]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "I wonder what Placeholder is up to over there...", 0, sizeof(char[24]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 300;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 331;

  newEvent->secondaryResponse = 2;
  newEvent->secondaryTableLookupNumber = 100;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[2]));
  memccpy(newEvent->text, "You are?", 0, sizeof(char[1048]));

  return newEvent;
}

WorldEvent *frontierTwo() {
  SimpleObject responseOne;
  responseOne.displayText = malloc(sizeof(char)*1024);
  memccpy(responseOne.displayText, "Yes! Let's go!", 0, sizeof(char[24]));

  SimpleObject responseTwo;
  responseTwo.displayText = malloc(sizeof(char)*1024);
  memccpy(responseTwo.displayText, "I wonder what Placeholder is up to over there...", 0, sizeof(char[56]));

  SimpleObject options[] = { responseOne, responseTwo };

  WorldEvent *newEvent = malloc(sizeof(WorldEvent));
  newEvent->text = malloc(sizeof(char)*1048);
  newEvent->responses = malloc(sizeof(SimpleObject)*6);
  newEvent->responseCount = 2;
  newEvent->index = 301;
  newEvent->primaryResponse = 1;
  newEvent->primaryTableLookupNumber = 333;

  newEvent->secondaryResponse = 2;
  newEvent->secondaryTableLookupNumber = 100;
  memcpy(newEvent->responses, options, sizeof(SimpleObject[2]));
  memccpy(newEvent->text, "You are?", 0, sizeof(char[1048]));

  return newEvent;
}




