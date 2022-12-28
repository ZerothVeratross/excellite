PetalburgWoods_Arena_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, PetalburgWoods_Arena_OnResume
	.byte 0

PetalburgWoods_Arena_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

PetalburgWoods_Arena_EventScript_Zeroth::
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Arena_Text_ZerothIntro::
	.string "Placeholder\n"
	.string "Placeholder$"
	
PetalburgWoods_Arena_Text_ZerothDefeat::
	.string "Placeholder\n"
	.string "Placeholder$"

PetalburgWoods_Arena_Text_ZerothPostBattle::
	.string "Placeholder\n"
	.string "Placeholder$"
