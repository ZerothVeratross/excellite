Route102_To_Route101_House_MapScripts::
	.byte 0

Route114_EventScript_Leftovers_Man::
	lock
	faceplayer
	goto_if_set FLAG_ROUTE_102_LEFTOVERS_ACQUIRED, Route102_To_Route101_House_EventScript_SmallTalk
	msgbox Route102_To_Route101_House_Text_StayFed, MSGBOX_DEFAULT
	giveitem ITEM_LEFTOVERS, 1
	setflag FLAG_ROUTE_102_LEFTOVERS_ACQUIRED
	msgbox Route102_To_Route101_House_Text_ForYourPokemon, MSGBOX_DEFAULT
	release
	end

Route102_To_Route101_House_EventScript_SmallTalk::
	lock
	faceplayer
	msgbox Route102_To_Route101_House_Text_TheWeirdTree, MSGBOX_DEFAULT
	release
	end

Route102_To_Route101_House_Text_StayFed:
	.string "Oh! I don't get many visitors on this\n"
	.string "side of the lake.\p"
	.string "You want some advice? Stay fed. Here,\n"
	.string "take this.$"

Route102_To_Route101_House_Text_ForYourPokemon:
	.string "Give this to one of your Pokemon and\n"
	.string "they'll stay fed, even in combat.$"

Route102_To_Route101_House_Text_TheWeirdTree:
	.string "Did you see that weird tree outside?\p"
	.string "I've heard trees like that have\n"
	.string "a lot of space among their branches.\p"
	.string "Enough for a person to live in them!$"
