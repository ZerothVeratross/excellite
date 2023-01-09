PetalburgWoods_Arena_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, PetalburgWoods_Arena_OnResume
	.byte 0

PetalburgWoods_Arena_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

PetalburgWoods_Arena_EventScript_Zeroth::
	trainerbattle_single TRAINER_REDMEGA, PetalburgWoods_Arena_Text_ZerothIntro, PetalburgWoods_Arena_Text_ZerothDefeat
	msgbox PetalburgWoods_Arena_Text_ZerothPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Arena_Text_ZerothIntro::
	.string "Placeholder\n"
	.string "Placeholder$"
	
PetalburgWoods_Arena_Text_ZerothDefeat::
	.string "Placeholder2\n"
	.string "Placeholder2$"

PetalburgWoods_Arena_Text_ZerothPostBattle::
	.string "Placeholder3\n"
	.string "Placeholder3$"
