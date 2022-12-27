PetalburgWoods_Arena_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, PetalburgWoods_Arena_OnResume
	.byte 0

PetalburgWoods_Arena_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end
