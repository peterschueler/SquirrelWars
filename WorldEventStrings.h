//
//  WorldEventStrings.h
//  SquirrelWars
//
//  Created by Peter Schueler on 3/28/15.
//  Copyright (c) 2015 Peter Schueler. All rights reserved.
//

#ifndef SquirrelWars_WorldEventStrings_h
#define SquirrelWars_WorldEventStrings_h

#pragma mark - TODO: create array for objects with multiple values

static char* OPENING_BANNER             = "                                                                          \n                                                                            \n                                                                            \n  ╔————————————————————————————————————————————————————————————————————————╗\n  |........................................................................|\n  |........................................................................|\n  |........................................................................|\n  |........................................................................|\n  |........................................................................|\n  |.....---------------------------------------------------------------....|\n  |..... I N   S E A R C H   O F   T H E   S Q U I R R E L   W A R S ! ....|\n  |.....---------------------------------------------------------------....|\n  |........................................................................|\n  |...................-----------------------------------..................|\n  |................... b y   @ p e t e r s c h u e l e r ..................|\n  |...................-----------------------------------..................|\n  |........................................................................|\n  ╚————————————————————————————————————————————————————————————————————————╝\n                                                                            ";

#pragma mark - DIALOGUE
static char* DIALOGUE_YES_ONE           = "Yes.";
static char* DIALOGUE_YES_TWO           = "Absolutely, yes.";
static char* DIALOGUE_YES_TRHEE         = "Let's do it!";

static char* DIALOGUE_NO_ONE            = "No.";
static char* DIALOGUE_NO_TWO            = "Under no circumstance.";
static char* DIALOUGE_NO_THREE          = "I'm out.";

static char* DIALOGUE_THANKS_ONE        = "Thank you.";
static char* DIALOGUE_THANKS_TWO        = "Thanks a lot!";
static char* DIALOGUE_THANKS_THREE      = "Thanks, I guess.";
static char* DIALOUGE_THANKS_FOUR       = "Thanks";

static char* DIALOGUE_WELCOME_ONE       = "Welcome.";
static char* DIALOUGE_WELCOME_TWO       = "Hello there.";
static char* DIALOGUE_WELCOME_THREE     = "Hi.";
static char* DIALOGUE_WELCOME_FOUR      = "Hello.";

static char* DIALOGUE_INCREDULITY_ONE   = "What?!";
static char* DIALOGUE_INCREDULITY_TWO   = "I... I don't believe it!";
static char* DIALOGUE_INCREDULITY_THREE = "You are lying.";
static char* DIALOGUE_INCREDULITY_FOUR  = "Nonsense.";

static char* DIALOGUE_WHERE_PLURAL      = "Where are we?";
static char* DIALOGUE_WHERE_SINGULAR    = "Where am I.";

static char* DIALOGUE_HAPPENING_ONE     = "What's going on?";
static char* DIALOGUE_HAPPENING_TWO     = "What is happening?";
static char* DIALOGUE_HAPPENING_THREE   = "Explain yourself";

static char* DIALOGUE_NEEDHELP_ONE      = "I need your help.";
static char* DIALOGUE_NEEDHELP_TWO      = "Will you help me?";
static char* DIALOGUE_NEEDHELP_THREE    = "Help me.";
static char* DIALOGUE_NEEDHELP_FOUR     = "Help!";

static char* DIALOGUE_SARCASTIC_ONE     = "That's helpful.";
static char* DIALOGUE_SARCASTIC_TWO     = "You are *so* helpful";
static char* DIALOGUE_SARCASTIC_THREE   = "What a *great* idea.";

static char* DIALOGUE_GREATIDEA_ONE     = "That's a great idea.";
static char* DIALOGUE_GREATIDEA_TWO     = "Good idea!";

static char* DIALOGUE_CONFUSED_ONE      = "I'm confused now.";
static char* DIALOGUE_CONFUSED_TWO      = "What is going on right now?";

static char* DIALOGUE_WHERETO_SHORT     = "Where are we going?";
static char* DIALOGUE_TELLMEMORE_SHORT  = "Tell me more, please.";
static char* DIALOGUE_GETBACK_SHORT     = "You're right. I need to get Back to the Future!";

static char* DIALOGUE_DEAD_REACT_ONE    = "Dead? That's impossible.";
static char* DIALOGUE_DEAD_REACT_TWO    = "I don't feel very dead.";
static char* DIALOGUE_DEAD_REACT_THREE  = "What kind of prank is this?";

static char* DIALOGUE_AMNESIA_ONE       = "I don't remember.";
static char* DIALOGUE_AMNESIA_TWO       = "I'm not sure.";
static char* DIALOGUE_AMNESIA_THREE     = "I think there was a flash...";

static char* DIALOGUE_NAME_REACT_ONE    = "My name? I don't rememeber.";
static char* DIALOGUE_NAME_REACT_TWO    = "My name none of your business.";

static char* DIALOGUE_SQUIRRELWARS_ONE  = "Yes, I seem to recall something. The, the...Squirrel Wars!";
static char* DIALOGUE_SQURRELWARS_TWO   = "And, a name. The Elder Stereo. Some type of wizard or other.";

static char* DIALOGUE_ACKNOWLEDGE_ONE   = "Great.";
static char* DIALOGUE_ACKNOWLEDGE_TWO   = "Whatever.";
static char* DIALOGUE_ACKNOWLEDGE_THREE = "Seriously?";
static char* DIALOGUE_ACKNOWLEDGE_FOUR  = "I feel like this whole section is just filler.";
static char* DIALOGUE_ACKNOWLEDGE_FIVE  = "Okay, but let's get back to the task at hand. The Squirrel Wars won't start themselves. I think.";
static char* DIALOGUE_ACKNOWLEDGE_SIX   = "Now we're talking.";

#pragma mark - ACTION
static char* ACTION_KICK_SHORT          = "Kick %s";
static char* ACTION_RUNAWAY_SHORT       = "Run away.";
static char* ACTION_JUMP_SHORT          = "Jump over %s";
static char* ACTION_PUNCH_SHORT         = "Punch %s";
static char* ACTION_BRIBE_SHORT         = "Bribe %s";
static char* ACTION_CHARM_SHORT         = "Charm %s";
static char* ACTION_SCREAM_SHORT        = "Scream!"; // Scream 2, Scream 3, et al.
static char* ACTION_YELL_SHORT          = "Yell at %s";
static char* ACTION_DONOTHING_SHORT     = "Do nothing.";

static char* ACTION_LOOKAROUND          = "Look around.";

static char* ACTION_BUILD_ENTER         = "Enter the building.";
static char* ACTION_BUILD_EXIT          = "Exit the building.";

static char* ACTION_FORREST_ENTER       = "Enter the forrest.";
static char* ACTION_FORREST_EXIT        = "Flee from the forrest.";

static char* ACTION_DOOR_KNOCK          = "Knock on the door.";
static char* ACTION_DOOR_KICK           = "Kick the door in.";

#pragma mark - RESPONSE
static char* RESPONSE_KICK_ONE          = "You kicked %s. It does nothing.";
static char* RESPONSE_KICK_TWO          = "You kicked %s. %s is angry now.";

static char* RESPONSE_PUNCH_ONE         = "You punched %s. It does nothing.";
static char* RESPONSE_PUNCH_TWO         = "You punched %s. %s is angry now.";
// kicks and punches
static char* RESPONSE_TOATTACK_ONE      = "%s falls down. You have the upper hand.";
static char* RESPONSE_TOATTACK_TWO      = "%s runs away. Balls.";

static char* RESPONSE_TIME_ONE          = "What do mean? What year is this?";
static char* RESPONSE_TIME_TWO          = "My what?";

static char* RESPONSE_FUCKING_ONE       = "Do you want me to?";
static char* RESPONSE_FUCKING_TWO       = "I wouldn't know how to.";

#pragma mark - HIDDEN
static char* HIDDEN_ONE                 = "Skip Introduction";
static char* HIDDEN_TWO                 = "Bring me to your Squirrel Overlords";

#pragma mark - INTERFACE
static char* INTERFACE_WELCOME          = "Welcome to 'In Search of the Squirrel Wars'!\nHere are a few options to consider:\n";
static char* INTERFACE_RESTART          = "Restart Game";
static char* INTERFACE_NEWGAME          = "Start a New Game";
static char* INTERFACE_EXIT             = "Exit (you can always do that by hitting 7)";
static char* INTERFACE_SAVEGAME         = "Save Game";
static char* INTERFACE_LOADGAME         = "Bother me about implementing Save Games"; // "Load Game"

#pragma mark - EDITORS NOTES
static char* EDITOR_PLEASEDONTSUEME     = "(Please don't sue-sue-sue us. - Editor)";
static char* EDITOR_SEEALSO_ONE         = "(See also last issue. - Editor)";
static char* EDITOR_SEEALSO_TWO         = "(In the sequel. Coming soon! - Editor)";

#pragma mark - WORLD TEXT
static char* WORLDTEXT_DEAD             = "Hi. You are dead. What do you want to do next?";
static char* WORLDTEXT_DEAD_TWO         = "Dead. Revived, actually. But the difference is not that big. Pretty sure about that. My third cousin on my mothers side used to date a dentist. Summer of '89. Year of Batman.";
static char* WORLDTEXT_DEAD_THREE       = "It's not a prank. I just found you here.";
static char* WORLDTEXT_DEAD_FOUR        = "Yes, I can help you. Just tell me your name.";
static char* WORLDTEXT_DEAD_FIVE        = "A name. Oh, it's fine. We will make due with my name. Let me introduce myself: My name is Placeholder Name Four. I am the mayor around here. We don’t get a lot of dead people in our community. Unless you count the politicans living in that Haunted Mall. How did you find us?";
static char* WORLDTEXT_DEAD_SIX         = "Exactly. But not surprising, I guess. I mean with you being dead previously and all. It wouldn’t surprise me at all if you were a time traveller as well!";
static char* WORLDTEXT_DEAD_SEVEN        = "Okay. But do you remember anything? Anything at all?";
static char* WORLDTEXT_DEAD_EIGHT        = "The 'Squirrel Wars'? I have never heard of such a thing. But I am not very worldly.";
static char* WORLDTEXT_DEAD_NINE         = "Of course! I don't know about this war thing, though. I will help you find the Elder Stereo. I feel like you are my resposibilty now!";

#pragma mark - WORLD TEXT - DESCRIPTIONS
static char* WORLD_DESCRIPTION_ONE      = "You are walking on a narrow road. Trees are to the left and right of you. Placeholder Name Four is humming Sussudio by Phil Collins.";
static char* WORLD_DESCRIPTION_TWO      = "You have entered the city. People a bustling about. You also see a forrest on the far left. It looks dangerous. There is a sign: Don't enter under any circumstances! It's dangerous.";
static char* WORLD_DESCRIPTION_THREE    = "Yes, we really are in the city. Look around. There's a man over there. He's doing city type stuff. Going to and fro the office and whatnot. It's a gleaming beacon of hope, this one.";
static char* WORLD_DESCRIPTION_FOUR     = "Yes, and there's like this guy, who would...I'm sorry. The commute between where I found you and the temple is really quite boring. I thought I'd spruce it up a bit.";

static char* DESCRIPTION_BUILD_DISTANCE = "You see buildings in the far distance.";
static char* DESCRIPTION_BUILD_FRONT    = "You are standing in front of a building.";

static char* DESCRIPTION_FORREST        = "You see a forrest. It looks dangerous. There is a sign: Don't enter! It's dangerous.";

static char* DESCRIPTION_TEMPLE_DISTANCE= "You see the temple in the distance. The roof is glistening against the burning sun.";
static char* DESCRIPTION_TEMPLE_CLOSER  = "You are approaching the temple. It is even bigger than you thought.";
static char* DESCRIPTION_TEMPLE_FRONT   = "You start running, Placeholder can't keep up. Before you know it, you are standing in front of the temple. The door is surprisingly small. Like, tiny. Fortuantely, you are a small rodent of some sort. A mouse, maybe. Or a duck. Is that a rodent? Who knows these things? Use Wikipedia.";

static char* DESCRIPTION_CASTLE_DISTANCE= "You leave the temple. The castle is basically just outside the door and stuff. You don't have to walk far, is what I'm trying to say.";
static char* DESCRIPTION_CASTLE_DIST_1  = "You didn't see it before, because...Why, do I have to have an answer for everything? Besides, you could've shown more initiative!";
static char* DESCRIPTION_CASTLE_DIST_2  = "Ohhhh, now it's the narrators fault. You could've asked me about it!";
static char* DESCRIPTION_CASTLE_DIST_3  = "No option? NO. OPTION?! (checks) Oh, right. I marked it hidden. Sorry. My bad. Anywho. You are standing in front of the castle. It's really pretty. Do you want me to go on?";
static char* DESCRIPTION_CASTLE_CLOSER  = "Anywho. You are standing in front of the castle. It's really pretty. Do you want me to go on?";
static char* DESCRIPTION_CASTLE_CLOSER_Y= "Fine. The majestic castle... (prattles on for seventeen minutes. Suffice it to say, the castle looks pretty cool. He really loves the sound of his own voice, doesn't he?)";
static char* DESCRIPTION_CASTLE_CLOSER_N= "What? I don't believe it. This thing is seriously beautiful. I mean, look at the minarrettes and stuff. This is top notch craftsmanship. Why wouldn't you want to hear more?";
static char* DESCRIPTION_CASTLE_CLOSER_1= "You want to move on with the adventure? What about the sights?\
                                           I put a lot of effort into narrating this thing for you.";
static char* DESCRIPTION_CASTLE_CLOSER_2= "Now I don't to anymore. Just go in.";

static char* DESCRIPTION_CASTLE_THRONE  = "While the narrator keeps extolling the virtues of freedom, the large doors open up and you peek into the throne room. It has all kinds of throny throne things in it. The king is sitting at the far end of the room, waving you to come in. A overmotivated guard stops you, though.";
static char* DESCRIPTION_CASTLE_THRONE_1= "You walk past a bunch of hipsters lounging about in the throne room, keeping your eyes on the king. Placeholder shuffles uncomfortable next to you. The King is waiting for you.";


#pragma mark - WORLD TEXT - CHARACTERS
static char* CHAR_ELDER_STEREO_ONE      = "Hello, what a pleasent surprise for you to come by! Come in, come in! This is such great news.";
static char* CHAR_ELDER_STEREO_TWO      = "Yes, I am lonely. Very, very loney.";
static char* CHAR_ELDER_STEREO_THREE    = "Oh yes, the 'Squirrel Wars' Of course, of course. \nNever heard of those. But I do detest them. The squirrels, I mean. Buggers stole my lunch three days in a row. No respect. \nIn my day, people would never steal from an owl.  \nEspecially an Elder one.";
static char* CHAR_ELDER_STEREO_FOUR     = "The future, you say? I've been there once or twice, but I don't remember meeting you there. Is your friend also from the future?";
static char* CHAR_ELDER_STEREO_FIVE     = "Just met him? And you trust him?";
static char* CHAR_ELDER_STEREO_ALT_1    = "I wouldn't. He seems shifty. The whole ducking race seems shifty, if you ask me.";
static char* CHAR_ELDER_STEREO_ALT_2    = "Suit yourself. I have better things to do.";
static char* CHAR_ELDER_STEREO_ALT_3    = "Help? Why would I help you? What's in it for me?";

static char* CHAR_ELDER_STEREO_NUMBER   = "Okay, I will help you if you can guess the number I'm thinking about.";
static char* CHAR_ELDER_STEREO_NUMBER_Y = "Damn you to hell. You are correct.";
static char* CHAR_ELDER_STEREO_NUMBER_N = "Ha, you idiot. That's not it. But I take pity on you. I will let you guess again.";

static char* CHAR_ELDER_STEREO_SIX      = "Okay, I will let you in on a little secret: I overheard the king talking about plans for a war. This might be the very war you were talking about.";
static char* CHAR_ELDER_STEREO_SIX_1    = "The king! You don't know the king? What are you, a platypus?";
static char* CHAR_ELDER_STEREO_SEVEN    = "Up the hill, in his ridonculous castle. Here's the key. I don't like that guy, either. No respect. No one has respect anymore. I washed his gonads as a baby. Good luck convincing him that he should go to war. He's a wimp.";
static char* CHAR_CASTLE_GUARD_ONE      = "Hello, and welcome to the castle. Papers, please.";
static char* CHAR_CASTLE_GUARD_TWO      = "What do you mean, no papers?";
static char* CHAR_CASTLE_GUARD_TWO_1    = "Those seem pretty legit... Wait a minute. Those aren't papers. Those are nuts! Are you fucking with me?";
static char* CHAR_CASTLE_GUARD_THREE    = "Right, you're from the future. And I'm pure thought being-constructed by a human. (stares at camera) I can't let you in without papers.";
static char* CHAR_CASTLE_GUARD_FOUR     = "Important information? Regarding what?";
static char* CHAR_CASTLE_GUARD_FIVE     = "The 'Squirrel Wars'? How do you know...? I'll ring him up.";

static char* CASTLE_GUARD_RIDDLE_ONE    = "But maybe there is another way. I will let you in, if you can riddle me this:";
static char* CASTLE_GUARD_RIDDLE_Q      = "Once, in the realm of peguins, there lived a dragon slayer known as Frederick. Frederick only wanted one thing in life. What was that thing?";
static char* CASTLE_GUARD_RIDDLE_A_1    = "To slay a dragon?";
static char* CASTLE_GUARD_RIDDLE_A_2    = "To fall in a love with a beautiful penguin lady?";
static char* CASTLE_GUARD_RIDDLE_A_3    = "None of the above. This is a trick question and you won't let me pass anyway.";
static char* CASTLE_GUARD_RIDDLE_Q_1    = "Bullseye! You can pass.";
static char* CASTLE_GUARD_RIDDLE_Q_2    = "Not quite. Try again!";
static char* CASTLE_GUARD_RIDDLE_Q_3    = "You are a clever one. You figured it out. And now you need *two* passes.";
static char* CASTLE_GUARD_RIDDLE_A_4    = "You are not so clever. Two passes, a dragon: You are lonely! I will be your friend.";
static char* CASTLE_GUARD_RIDDLE_Q_4    = "You really will (sobs). Okay. Go in. But let's hug first";
static char* CASTLE_GUARD_RIDDLE_Q_5    = "You hug awkwardly.";

static char* CASTLE_GUARD_ENTER_1       = "You may enter the throne room now!";

static char* CASTLE_KING_ONE            = "THE KING: Ah, yes. The young heroine. I have been expecting you.";
static char* CASTLE_KING_TWO            = "Of course. This is not the first time you come to this place. And if it is: Welcome. I have been expecting you. ";
static char* CASTLE_KING_THREE          = "They tell me you know everything about the 'Squirrel Wars'. Tell me. ";
static char* CASTLE_KING_FOUR           = "That's all? At least we have that in common. I want this war. Bad. They need to pay for what they have done. Do you know what they have done? ";
static char* CASTLE_KING_FIVE           = "Do you want to know? Of course you do! ";
static char* CASTLE_KING_SIX            = "It all began senventy years ago... (TODO: come up with super boring expositiony type stuff. Like, super boring.) ";
static char* CASTLE_KING_SEVEN          = "...and that's why I don't brush my teeth anymore.";
static char* CASTLE_KING_EIGHT          = "You know what? I have changed my mind. I don't want this war anymore. It's a stupid idea. I hate the squirrel population, but I have other means of disposal. I send them our worst internet commentators. They will want to kill themselves after they hear about #GamerGate.";
static char* CASTLE_HEROINE_ONE         = "What's a gamer gate?";
static char* CASTLE_PLACEHOLDER_ONE     = "A bunch of prepubescent assholes tried to sell their hatred of women as concern over ethics in games journalism.";
static char* CASTLE_HEROINE_TWO         = "That sounds horrible!";
static char* CASTLE_PLACEHOLDER_TWO     = "It was. But you know what? Fuck 'em. Let's keep having fun.";
static char* CASTLE_KING_NINE           = "Exactly. And on that note: You are about to be executed for treason. Calling up war like that. Shame on you!";

static char* CASTLE_DESCRIPTION_RUN     = "You run for the door, which magically disappears in front of your eyes."; // you remember your key
static char* CASTLE_KEY                 = "yes, the key. You open the portal to the nth dimension and enter a strange new world. There is color here, there is sound. You have crossed over into the WARNING! THIS IS NOT SUPPOSED TO HAPPEN! RUN, RUN LIKE YOU ARE HUNTED BY THE DEVIL! GET AWAY FROM YOUR COMPUTER! IT'S ABOUT TO EXPLO";
static char* SPACE_ONE                  = "...\n....\n......\n.......\n";
static char* SPACE_FINALFRONTIER        = "Space. The Final Frontier. These are the adventures of Heroine and Placeholder Name Four. There five minute mission: Find new allies to fight the 'Squirrel Wars' Make sure no one stays alive. And to boldly go, where so many narratives have gone before. ";
static char* SPACE_FINALFRONTIER_ADD    = "I think they succeded. Blowing up the Earth is no mean feat. But is this end for our plucky heroes? Have we seen the last of them? Are the 'Squirrel Wars' even real? Find out next week. \n... ...\n";                                    
static char* SPACE_TWO                  = "WAIT! IT'S NOT OVER YET. They blew up the Earth, but the search is ongoing. Stay with our plucky team of almost-misfits. ";
static char* DESCRIPTION_SPACE_ONE      = "You are floating aimlessly in space. The debris from the explosion is not hitting you for some reason. You see Placeholder floating as well.";
static char* DESCRIPTION_SPACE_TWO      = "You feel dizzy. ";

// Time Shifts happen through secondary responses.

#pragma mark - TIME SHIFTS
static char* TIME_SHIFT_BACK             = "You feel dizzy. Time seems to run backward.";
static char* TIME_SHIFT_FORWARD          = "You feel woozy. Time seems to move forward.";
static char* TIME_SHIFT_ONE              = "Time. Changes.";


#endif
