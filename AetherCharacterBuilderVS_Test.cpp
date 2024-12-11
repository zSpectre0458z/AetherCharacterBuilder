// AetherCharacterBuilderVS_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Program: Aether Character Builder
Programmer: Spectre
Last Updated: 10.09.24

Description: this program is used to take user input to create a character for the aether TTRPG system and output a character sheet which can be pasted
into discord, microsoft word, google docs, etc.

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main() {
    //array for storing races, factions, classes, etc.
    string playerRace[112];
    string playerFaction[17];
    string playerClass[15];
    string playerProfession[24];
    string playerClassFeatures[15];

    //all races in the array and what values they are at.
    //Initializes array so all values line up properly. it wastes a little space but it saves a lot later.
    playerRace[0] = "Null";

    //Humanoids
    playerRace[1] = "Dwarf"; playerRace[2] = "Halfling"; playerRace[3] = "Human";

    //elves
    playerRace[4] = "Aetherian Elf"; playerRace[5] = "Ash Elf";
    playerRace[6] = "Blood Elf"; playerRace[7] = "Dark Elf"; playerRace[8] = "Deep Elf";
    playerRace[9] = "High Elf"; playerRace[10] = "Snow Elf"; playerRace[11] = "Wood Elf";

    //Goblinoids
    playerRace[12] = "Goblin"; playerRace[13] = "Hobgoblin"; playerRace[14] = "Ogre";
    playerRace[15] = "Orc"; playerRace[16] = "Troll";

    //Beastfolk   
    playerRace[17] = "Apefolk"; playerRace[18] = "Atlantean";
    playerRace[19] = "Catfolk"; playerRace[20] = "Centaur"; playerRace[21] = "Frogfolk";
    playerRace[22] = "Harpy"; playerRace[23] = "Kitsune"; playerRace[24] = "Molefolk";
    playerRace[25] = "Ratfolk"; playerRace[26] = "Siren";

    //Insectoid
    playerRace[27] = "Aranea"; playerRace[28] = "Armadorn";
    playerRace[29] = "Blattoran"; playerRace[30] = "Dynastorn"; playerRace[31] = "Formicar";
    playerRace[32] = "Mantidorn"; playerRace[33] = "Miasmor"; playerRace[34] = "Phasmatid";
    playerRace[35] = "Scolopar"; playerRace[36] = "Vespidan";

    //Undead
    playerRace[37] = "Blighted"; playerRace[38] = "Draugr";
    playerRace[39] = "Mummy"; playerRace[40] = "Shadow"; playerRace[41] = "Skeleton";
    playerRace[42] = "Spirit"; playerRace[43] = "Vampire"; playerRace[44] = "Wight";
    playerRace[45] = "Zombie";

    //Elementals
    playerRace[46] = "Air Elemental"; playerRace[47] = "Earth Elemental";
    playerRace[48] = "Fire Elemental"; playerRace[49] = "Ice Spirit"; playerRace[50] = "Pheonix";
    playerRace[51] = "Storm Spirit"; playerRace[52] = "Water Elemental";

    //Constructs
    playerRace[53] = "Animated Toy"; playerRace[54] = "Crystal Golem";
    playerRace[55] = "Homunculus"; playerRace[56] = "Iron Golem"; playerRace[57] = "Robot";
    playerRace[58] = "Scarecrow"; playerRace[59] = "Stone Golem";

    //Lycanthropes
    playerRace[60] = "Werebat"; playerRace[61] = "Werebear";
    playerRace[62] = "Werecat"; playerRace[63] = "Werechicken"; playerRace[64] = "Werecrab";
    playerRace[65] = "Wererat"; playerRace[66] = "Wereraven"; playerRace[67] = "Weretuna";
    playerRace[68] = "Werewolf";

    //Oozes
    playerRace[69] = "Black Ooze"; playerRace[70] = "Blob";
    playerRace[71] = "Blue Slime"; playerRace[72] = "Gray Ooze"; playerRace[73] = "Green Slime";
    playerRace[74] = "Living Jelly";

    //Plantfolk
    playerRace[75] = "Cornfolk"; playerRace[76] = "Floralite";
    playerRace[77] = "Mycoptian"; playerRace[78] = "Treefolk";

    //Giants
    playerRace[79] = "Cyclops"; playerRace[80] = "Fire Giant";
    playerRace[81] = "Gnome"; playerRace[82] = "Hill Giant"; playerRace[83] = "Minotaur";
    playerRace[84] = "Mountain Giant"; playerRace[85] = "Oni";

    //Fae 
    playerRace[86] = "Faerie"; playerRace[87] = "Garden Gnome";
    playerRace[88] = "Hag"; playerRace[89] = "Humicorn"; playerRace[90] = "Leprechaun";
    playerRace[91] = "Nuahcerpel"; playerRace[92] = "Pixie"; playerRace[93] = "Unitaur";

    //Dragonoids
    playerRace[94] = "Adderkin"; playerRace[95] = "Dragonborn";
    playerRace[96] = "Dragonkin"; playerRace[97] = "Half-Dragon"; playerRace[98] = "Kobold";
    playerRace[99] = "Lizardman";

    //Eldritch
    playerRace[100] = "Astral Harbinger"; playerRace[101] = "Inkling";
    playerRace[102] = "Sanity Breaker"; playerRace[103] = "Starkin"; playerRace[104] = "Thought Stealer";
    playerRace[105] = "Witnesskin";

    //Demons and Angels
    playerRace[106] = "Agathion"; playerRace[107] = "Cambion";
    playerRace[108] = "Imp"; playerRace[109] = "Nephilim"; playerRace[110] = "Seraphim";
    playerRace[111] = "Succubi/Incubi";

    //All factions in the array and what values they are
    playerFaction[0] = "Null";
    playerFaction[1] = "Humanoid"; playerFaction[2] = "Elf"; playerFaction[3] = "Goblinoid";
    playerFaction[4] = "Beastkin"; playerFaction[5] = "Insectoid"; playerFaction[6] = "Undead";
    playerFaction[7] = "Elemental"; playerFaction[8] = "Construct"; playerFaction[9] = "Lycanthrope";
    playerFaction[10] = "Ooze"; playerFaction[11] = "Plantfolk"; playerFaction[12] = "Giant";
    playerFaction[13] = "Fae"; playerFaction[14] = "Dragonoid"; playerFaction[15] = "Eldritch";
    playerFaction[16] = "Demon and Angel";

    //All classes in the array and what values they are
    playerClass[0] = "Null"; playerClass[1] = "Arcanist"; playerClass[2] = "Archer"; playerClass[3] = "Artisan"; playerClass[4] = "Berserker"; playerClass[5] = "Diviner"; playerClass[6] = "Minstrel";
    playerClass[7] = "Occultist"; playerClass[8] = "Priest"; playerClass[9] = "Scribe"; playerClass[10] = "Shaman"; playerClass[11] = "Sorcerer"; playerClass[12] = "Templar"; playerClass[13] = "Thief";
    playerClass[14] = "Warrior";

    //All professions in the array and what values they are.
    playerProfession[0] = "Null"; playerProfession[1] = "Alchemist"; playerProfession[2] = "Apothecary"; playerProfession[3] = "Assassin"; playerProfession[4] = "Blacksmith"; playerProfession[5] = "Cartographer"; playerProfession[6] = "Clergyman";
    playerProfession[7] = "Cooper"; playerProfession[8] = "Courier"; playerProfession[9] = "Crier"; playerProfession[10] = "Elder"; playerProfession[11] = "Farmer"; playerProfession[12] = "Healer"; playerProfession[13] = "Hunter";
    playerProfession[14] = "Lumberjack"; playerProfession[15] = "Mercenary"; playerProfession[16] = "Merchant"; playerProfession[17] = "Nobility"; playerProfession[18] = "Performer"; playerProfession[19] = "Politician"; playerProfession[20] = "Soldier";
    playerProfession[21] = "Student"; playerProfession[22] = "Tavernkeeper"; playerProfession[23] = "Town Guard";

    //######################################## CLASS DATA ###########################################
    playerClassFeatures[0] = "Null";

    playerClassFeatures[1] = "Arcane Casting -\n           Starting at 1st level, you gain the ability to cast spells using the arcane spell casting system. See the 'Arcane' subsection in the Magic section for specifics.When you cast an arcane spell you gain a bonus equal to your accuracy roll or check to overcome a save DC equal to 2 + prof bonus + nuance, this bonus may be increased with magic items etc.\n\nSpell Points -\n           Starting at 1st level, You gain a number of spell points listed in the chart above.You regain all expended spell points at the start of a new day.When you cast an arcane spell it requires an amount of arcane points equal to the highest magical level component that spell contains.";
    
    playerClassFeatures[2] = "Eagle Eye -\n           Starting at 1st level, You do not gain disadvantage from attacking creatures with ranged weapons at or below max range. \n\nPinning Shot -\n           Starting at 1st level, You may shoot a creature in a way that prevents its movement by pinning it or a piece of whatever it's wearing to the nearest surface. You make a ranged attack roll against the creature, if you hit the creature deal damage as normal, additionally for 1 minute that creature has its speed reduced to 0 until it uses its turn to remove the arrow pinning it. You may use this feature a number of times per short rest equal to your dexterity.";

    playerClassFeatures[3] = "Materialist -\n           Starting at 1st level, You gain advantage on all rolls made to identify what an object is made of, what quality an object is, determining how much an object would sell for, and anything generally in the same scope.\n\nCraftsman Innovations -\n           Starting at 1st level, You may craft items using your Innovations, you have a number of innovations as listed in the table above.You may craft any mundane item over the course of one day, no materials required.Items crafted this way cannot be sold.You use innovations to craft items from your class feats, when you use an innovation to create an item that innovation slot is lost until the item made is destroyed(or used in the case of a consumable).When an innovation is destroyed it crumbles to dust leaving nothing behind.You may craft any number of innovations over the course of a long rest, provided you have the innovation slots.";

    playerClassFeatures[4] = "War Songs -\n           Starting at 1st level, You may bellow the songs of your people as you rush into battle, You gain Vocal Chords as listed in the above table.You may spend these vocal chords to use battle cries obtained from your class feats.Using a War Song requires 1 chain action.When you use a War Song, all friendly creatures of your choice within 2m also gain the effects of the War Song.you regain all expended Vocal Chords upon completion of a short or long rest.\n\nRage -\n           Starting at 1st level, your rage can give you strength sending you full of strength into battle, on your turn as a bonus action you may enter a state of rage for up to 1 minute.While in this state of rage you deal bonus damage equal to your level on all melee attacks but take additional damage equal to your level any time you are hit by an attack.While you are raging you gain a second movement action on each of your turns.Once your rage ends, you become exhausted for 1 hour.You cannot rage while exhausted.";

    playerClassFeatures[5] = "Foresight -\n           Starting at 1st level, at the start of each of your turns in combat, roll a d20.Your next d20 roll this turn uses that roll.You may use this feature a number of times per short or long rest equal to your insight outside of combat\n\nOmens -\n           Starting at 1st level, you gain a number of Omen uses as determined by the table above.You may use a super action, expend a use of your Omens, and target a creature you can see with one of your Omen features or feats.The effect caused by the Omen lasts until you dismiss it or until its end conditions are met.You regain all expended Omen uses upon completion of a long rest.";

    playerClassFeatures[6] = "Distract or Inspire -\n           Starting at 1st level, when a creature you can see other than yourself rolls a die, you may use your reaction to roll a d6 and add or subtract that result to the roll.You may use this feature a number of times per long rest equal to 1 + your talent + your nuance.A creature that has this added may not crit this turn, and a creature that has this subtracted may not crit fail this turn.\n\nRefresh -\n           Starting at 1st level, Once per long rest you may fully restore one creature's unique points, such as spell slots, mana, spell points, vocal chords, etc. Alternatively you may use this feature to replenish all uses of one of your unique features such as your “Distract or Inspire” feature";

    playerClassFeatures[7] = "Sustaining Invocation -\n           Starting at 1st level, occasionally you may imbue your rituals or spells with the power to complete themselves.Once per long rest, when you start a ritual you may as an action cause that ritual to continue casting even without you there to continue the ritual.Materials are still consumed and the ritual still requires any additional people the spell requires to cast, mana is still expended as normal, and the ritual still takes the same amount of time to complete; you simply do not need to be present for the ritual to finish casting.\n\nOccult Casting -\n           Starting at 1st level, you gain the ability to cast spells using the Occult spell casting system.See the “Occult” subsection in the Magic section for specifics.When you cast an Occult spell you gain a bonus to your accuracy roll or check to overcome a save DC equal to 2 + prof bonus + insight, this bonus may be increased with magic items etc.";

    playerClassFeatures[8] = "Divine Casting -\n           Starting at 1st level, you gain the ability to cast spells using the Divine spell casting system.See the “Divine” subsection in the Magic section for specifics.When you cast a Divine spell you gain a bonus to your accuracy roll or check to overcome a save DC equal to 2 + prof bonus + insight, this bonus may be increased with magic items etc.\n\nDestroy Evil -\n           Starting at 1st level, As a super action, you may let out a burst of energy from your deity that radiates in a 6m radius around you, instantly destroying all creatures of the Undead or Demon and Angel Factions with a level equal to or lower than one fourth of your level(do not round).You may use this feature once per long rest.";

    playerClassFeatures[9] = "Spell Thief -\n           Starting at 1st level, When you see a creature cast a spell, of any magic type, you may choose to remember that spell.You may cast any spell you have remembered as a super action, casting a spell this way immediately causes you to forget it.You can have a max number of spells remembered at once equal to half your Resourcefulness(rounded up).When casting a spell this way, you use the original casters spellcasting bonuses.\n\nBlank -\n           Starting at 1st level, as a bonus action you may choose to wipe a remembered spell from your memory.Wiping a spell this way prevents the original caster of the spell from using it until they complete a long rest.When you wipe a spell this way you forget it.";

    playerClassFeatures[10] = "Totem Call -\n           Starting at 1st level, this feature is how you cast your natural spells.You may use your bonus action to use a totem point and summon a totem to a point you can see within 6m, this totem acts as a medium sized object 1x1m, it has 1 health and is immune to damage caused by spells.When a totem is summoned you may use your action to imbue it with a natural spell you know.If the spell provides a benefit or negative to the totem it grants that benefit to all creatures indiscriminately within 3m of the totem.Spells that do not grant benefits or negatives(such as stat changes, status effects, etc) will have a secondary effect listed in their spell description for if they are used on a totem.You may have a max number of totems summoned at a time equal to your max number of totem points.Totems last until they are destroyed, or until you use a chain action to destroy one or more you created.If you would ever die, all totems you created are destroyed.You regain all expended totem points upon completion of a long rest.\n\nNatural Caster -\n           Starting at 1st level, you gain the ability to cast spells using the Natural spell casting system.See the “Natural” subsection in the Magic section for specifics.When you cast a Natural spell you gain a bonus to your accuracy roll or check to overcome a save DC equal to 2 + prof bonus + insight, this bonus may be increased with magic items etc.";

    playerClassFeatures[11] = "Innate Casting -\n           Starting at 1st level, you gain the ability to cast spells using the Innate spell casting system.See the “Innate” subsection in the Magic section for specifics.When you cast an Innate spell you gain a bonus to your accuracy roll or check to overcome a save DC equal to 2 + prof bonus + Nuance, this bonus may be increased with magic items etc.\n\nElemental Specialization -\n           Starting at 1st level, select one type of damage, all spells you cast that deal the chosen damage type deal additional damage equal to your Nuance.Additionally you may change the damage type of your spells to match the chosen damage type.";

    playerClassFeatures[12] = "Decree Casting -\n           Starting at 1st level, you gain the ability to cast spells using the Decree spell casting system.See the “Decree” subsection in the Magic section for specifics.When you cast a Decree spell you gain a bonus to your accuracy roll or check to overcome a save DC equal to 2 + prof bonus + half insight + half talent(rounded up), this bonus may be increased with magic items etc.\n\nResolution -\n           Starting at 1st level, you gain a pool of resolution equal to your 3 times your templar level + your talent + your insight.This pool of resolution is restored upon completion of a long rest.Whenever you land an attack on a creature, you may expend up to half of your Resolution points to cause that attack to deal additional damage of a type of your choice equal to the points you expended.For all feats and racial features these points are functionally the same as mana.";

    playerClassFeatures[13] = "Fleet Footed -\n           Starting at 1st level, on your turns, you may take the dash, hide, and escape actions as chain actions, you may take each only once per set of chain actions.\n\nStealth Attack - \nStarting at 1st level, When you are undetected by a creature, all of your attacks on them deal an additional number of d6s equal to your thief level.A creature that knows you are there but is unaware of your position does not take bonus damage from this feature.When you stealth attack a creature they become alert for the day, this causes all other stealth attacks against them to not gain the additional damage.";

    playerClassFeatures[14] = "Warriors Resilience -\n           Starting at 1st level, you gain resistance equal to half your endurance(round up) against Blunt, pierce, and slash damage.\n\nCritical Improvement -\n           Starting at 1st level, for melee attack rolls, rolling a 19 on the die is counted as a critical hit, as though it were a natural 20.";

    //###############################################################################################

    //All variables used in the creation of this program
    int factionChoice, raceChoice, classChoice, professionChoice, level, health, armor, insightDC, enduranceDC, dexterityDC, uniquePoints;

    string race, profession, faction, className, charName;

    //stat variables
    int T = 0, R = 0, A = 0, I = 0, N = 0, E = 0, D = 0, statPoints = 6, allocationChoice;

    //menu for faction selection
    cout << "Aether Character Builder" << endl
        << "------------------------" << endl
        << "1.  Humanoids" << endl
        << "2.  Elves" << endl
        << "3.  Goblinoids" << endl
        << "4.  Beastkin" << endl
        << "5.  Insectoids" << endl
        << "6.  Undead" << endl
        << "7.  Elementals" << endl
        << "8.  Constructs" << endl
        << "9.  Lycanthropes" << endl
        << "10. Oozes" << endl
        << "11. Plantfolk" << endl
        << "12. Giants" << endl
        << "13. Fae" << endl
        << "14. Dragonoids" << endl
        << "15. Eldritch" << endl
        << "16. Demons and Angels" << endl << endl
        << "Please Select Your Faction: ";
    cin >> factionChoice; cout << "" << endl << endl;

    system("cls");

    //switch statement to pick your race.
    switch (factionChoice) {
    case 1:
        cout << "You have Chosen Humanoids" << endl
            << "1. Dwarf" << endl
            << "2. Halfling" << endl
            << "3. Human" << endl;
        break;

    case 2:
        cout << "You have Chosen Elves" << endl
            << "4. Aetherian Elf" << endl
            << "5. Ash Elf" << endl
            << "6. Blood Elf" << endl
            << "7. Dark Elf" << endl
            << "8. Deep Elf" << endl
            << "9. High Elf" << endl
            << "10. Snow Elf" << endl
            << "11. Wood Elf" << endl;
        break;

    case 3:
        cout << "You have Chosen Goblinoids" << endl
            << "12. Goblin" << endl
            << "13. Hobgoblin" << endl
            << "14. Ogre" << endl
            << "15. Orc" << endl
            << "16. Troll" << endl;
        break;

    case 4:
        cout << "You have Chosen Beastkin" << endl
            << "17. Apefolk" << endl
            << "18. Atlantean" << endl
            << "19. Catfolk" << endl
            << "20. Centaur" << endl
            << "21. Frogfolk" << endl
            << "22. Harpy" << endl
            << "23. Kitsune" << endl
            << "24. Molefolk" << endl
            << "25. Ratfolk" << endl
            << "26. Siren" << endl;
        break;

    case 5:
        cout << "You have Chosen Insectoids" << endl
            << "27. Aranea" << endl
            << "28. Armadorn" << endl
            << "29. Blattoran" << endl
            << "30. Dynastorn" << endl
            << "31. Formicar" << endl
            << "32. Mantidorn" << endl
            << "33. Miasmor" << endl
            << "34. Phasmatid" << endl
            << "35. Scolopar" << endl
            << "36. Vespidan" << endl;
        break;

    case 6:
        cout << "You have Chosen Undead" << endl
            << "37. Blighted" << endl
            << "38. Draugr" << endl
            << "39. Mummy" << endl
            << "40. Shadow" << endl
            << "41. Skeleton" << endl
            << "42. Spirit" << endl
            << "43. Vampire" << endl
            << "44. Wight" << endl
            << "45. Zombie" << endl;
        break;

    case 7:
        cout << "You have Chosen Elementals" << endl
            << "46. Air Elemental" << endl
            << "47. Earth Elemental" << endl
            << "48. Fire Elemental" << endl
            << "49. Ice Spirit" << endl
            << "50. Pheonix" << endl
            << "51. Storm Spirit" << endl
            << "52. Water Elemental" << endl;
        break;

    case 8:
        cout << "You have Chosen Constructs" << endl
            << "53. Animated Toy" << endl
            << "54. Crystal Golem" << endl
            << "55. Homunculus" << endl
            << "56. Iron Golem" << endl
            << "57. Robot" << endl
            << "58. Scarecrow" << endl
            << "59. Stone Golem" << endl;
        break;

    case 9:
        cout << "You have Chosen Lycanthropes" << endl
            << "60. Werebat" << endl
            << "61. Werebear" << endl
            << "62. Werecat" << endl
            << "63. Werechicken" << endl
            << "64. Werecrab" << endl
            << "65. Wererat" << endl
            << "66. Wereraven" << endl
            << "67. Weretuna" << endl
            << "68. Werewolf" << endl;
        break;

    case 10:
        cout << "You have Chosen Oozes" << endl
            << "69. Black Ooze" << endl
            << "70. Blob" << endl
            << "71. Blue Slime" << endl
            << "72. Gray Ooze" << endl
            << "73. Green Slime" << endl
            << "74. Living Jelly" << endl;
        break;

    case 11:
        cout << "You have Chosen Plantfolk" << endl
            << "75. Cornfolk" << endl
            << "76. Floralite" << endl
            << "77. Mycoptians" << endl
            << "78. Treefolk" << endl;
        break;

    case 12:
        cout << "You have Chosen Giants" << endl
            << "79. Cyclops" << endl
            << "80. Fire Giant" << endl
            << "81. Gnome" << endl
            << "82. Hill Giant" << endl
            << "83. Minotaur" << endl
            << "84. Mountain Giant" << endl
            << "85. Oni" << endl;
        break;

    case 13:
        cout << "You have Chosen Fae" << endl
            << "86. Faerie" << endl
            << "87. Garden Gnome" << endl
            << "88. Hag" << endl
            << "89. Humicorn" << endl
            << "90. Leprechaun" << endl
            << "91. Nuahcerpel" << endl
            << "92. Pixie" << endl
            << "93. Unitaur" << endl;
        break;

    case 14:
        cout << "You have Chosen Dragonoids" << endl
            << "94. Adderkin" << endl
            << "95. Dragonborn" << endl
            << "96. Dragonkin" << endl
            << "97. Half-Dragon" << endl
            << "98. Kobold" << endl
            << "99. Lizardman" << endl;
        break;

    case 15:
        cout << "You have Chosen Eldritch" << endl
            << "100. Astral Harbinger" << endl
            << "101. Inkling" << endl
            << "102. Sanity Breaker" << endl
            << "103. Starkin" << endl
            << "104. Thought Stealer" << endl
            << "105. Witnesskin" << endl;
        break;

    case 16:
        cout << "You have Chosen Demons and Angels" << endl
            << "106. Agathion" << endl
            << "107. Cambion" << endl
            << "108. Imp" << endl
            << "109. Nephilim" << endl
            << "110. Seraphim" << endl
            << "111. Succubi/Incubi" << endl;
        break;

    default:
        cout << "you did not choose a valid faction. Please restart the application.";
        break;
    }

    cout << "Select Your Race: "; cin >> raceChoice; cout << "" << endl;

    system("cls");

    //class selection menue
    cout << "Classes" << endl
        << "1. Arcanist" << endl
        << "2. Archer" << endl
        << "3. Artisan" << endl
        << "4. Berserker" << endl
        << "5. Diviner" << endl
        << "6. Minstrel" << endl
        << "7. Occultist" << endl
        << "8. Priest" << endl
        << "9. Scribe" << endl
        << "10. Shaman" << endl
        << "11. Sorcerer" << endl
        << "12. Templar" << endl
        << "13. Thief" << endl
        << "14. Warrior" << endl << endl;

    cout << "Select your Class: "; cin >> classChoice;

    system("cls");

    cout << "Proffessions" << endl
        << "1. Alchemist" << endl
        << "2. Apothecary" << endl
        << "3. Assassin" << endl
        << "4. Blacksmith" << endl
        << "5. Cartographer" << endl
        << "6. Clergyman" << endl
        << "7. Cooper" << endl
        << "8. Courier" << endl
        << "9. Crier" << endl
        << "10. Elder" << endl
        << "11. Farmer" << endl
        << "12. Healer" << endl
        << "13. Hunter" << endl
        << "14. Lumberjack" << endl
        << "15. Mercenary" << endl
        << "16. Merchant" << endl
        << "17. Nobility" << endl
        << "18. Performer" << endl
        << "19. Politician" << endl
        << "20. Soldier" << endl
        << "21. Student" << endl
        << "22. Tavernkeeper" << endl
        << "23. Townguard" << endl << endl;

    cout << "Select your Profession: "; cin >> professionChoice;
    system("cls");

    //sets players race, faction, etc to their desired races and factions...
    race = playerRace[raceChoice];
    faction = playerFaction[factionChoice];
    className = playerClass[classChoice];
    profession = playerProfession[professionChoice];


    //Stat Allocation System, may contain bugs?
    do {
        cout << "Stat Allocation" << endl
            << "1. T = " << T << endl
            << "2. R = " << R << endl
            << "3. A = " << A << endl
            << "4. I = " << I << endl
            << "5. N = " << N << endl
            << "6. E = " << E << endl
            << "7. D = " << D << endl;
        cout << "Select a stat to put a point in: "; cin >> allocationChoice;

        switch (allocationChoice) {
        case 1:
            T += 1;
            statPoints -= 1;
            system("cls");
            break;

        case 2:
            R += 1;
            statPoints -= 1;
            system("cls");
            break;

        case 3:
            A += 1;
            statPoints -= 1;
            system("cls");
            break;

        case 4:
            I += 1;
            statPoints -= 1;
            system("cls");
            break;

        case 5:
            N += 1;
            statPoints -= 1;
            system("cls");
            break;

        case 6:
            E += 1;
            statPoints -= 1;
            system("cls");
            break;

        case 7:
            D += 1;
            statPoints -= 1;
            system("cls");
            break;

        }

    } while (statPoints != 0);

    //############################### Placeholder VALUES #################################
    level = 1;
    armor = 10;
    health = 0;
    //####################################################################################

    cout << "What is your Character's Name? "; cin.ignore(); getline(cin, charName);
    system("cls");

    cout << "-------- Character Sheet --------" << endl
        << "Name:       " << charName << endl
        << "Race:       " << race << endl
        << "Faction:    " << faction << endl
        << "Class:      " << className << endl
        << "Profession: " << profession << endl
        << "Level:      " << level << endl
        << "--------------------------------" << endl
        << "Health: " << health << endl
        << "Armor:  " << armor << endl
        << "--------------------------------" << endl
        << "T: " << T << endl
        << "R: " << R << endl
        << "A: " << A << endl
        << "I: " << I << endl
        << "N: " << N << endl
        << "E: " << E << endl
        << "D: " << D << endl
        << "-------------------------------" << endl
        << "Dexterity DC: " << 10 + D + "ClassBonus" << endl
        << "Insight DC:   " << 10 + I + "ClassBonus" << endl
        << "Endurance DC: " << 10 + E + "ClassBonus" << endl
        << "-------------------------------" << endl
        << "Racial and Faction Features" << endl
        << "Stuff here" << endl
        << "-------------------------------" << endl
        << "General Feats" << endl
        << "Stuff here" << endl
        << "-------------------------------" << endl
        << "Profession Features" << endl
        << "Stuff here" << endl
        << "-------------------------------" << endl
        << "Class Features" << endl
        << playerClassFeatures[classChoice] << endl
        << "-------------------------------" << endl
        << "Class Feats" << endl
        << "Stuff here" << endl
        << "-------------------------------" << endl
        << "Spellcasting" << endl
        << "Apologies, we currently do not support spellcasting\n"
        << "this will also likely take a very long time to implement\n"
        << "so please bear with us as we try to implement this feature\n\n";

    system("pause");

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
