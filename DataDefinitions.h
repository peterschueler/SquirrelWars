//
//  DataDefinitions.h
//  SquirrelWars
//
//  Created by Peter Schueler on 3/27/15.
//  Copyright (c) 2015 Peter Schueler. All rights reserved.
//

#ifndef SquirrelWars_DataDefinitions_h
#define SquirrelWars_DataDefinitions_h

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

typedef enum {
  _DIALOGUE, _ACTION, _HIDDEN
} textObjectType;

/* different types of textObjects:
	1. DIALOGUE
	- intention (1-5)
	2. ACTION
	- active/passive
	3. HIDDEN
	- usally shortcuts
 */

// shortcut to get this game done
typedef struct SimpleObject {
  char shortText[50];
  char *displayText;
} SimpleObject;

typedef struct Player {
  char name[150];
  int hitpoints;			// max 10; > 3 confused
} Player;

typedef struct NPC {
  char name[150];
  int friendliness; 	// max 10; < 7 attack; > 3 ally
  int hitpoints; 		// max 10; > 3 confused
} NPC;

typedef struct WorldEvent {
  // four standard responses, two are reserved for hidden commands and shortcuts.
  int index;

  int primaryResponse; // 1-4
  int primaryTableLookupNumber; // used to query the global lookup table

  int secondaryResponse;
  int secondaryTableLookupNumber;

  int tertiaryResponse;
  int tertiaryTableLookupNumber;

  int responseCount;

  SimpleObject *responses;
  char *text;
} WorldEvent;

#endif
