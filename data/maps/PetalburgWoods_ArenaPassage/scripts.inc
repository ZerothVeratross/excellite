PetalburgWoods_ArenaPassage_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoods_ArenaPassage_OnLoad
	.byte 0

PetalburgWoods_ArenaPassage_OnLoad:
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgWoods_ArenaPassage_EventScript_OpenArena
	end

PetalburgWoods_ArenaPassage_EventScript_OpenArena::
	setmetatile 0, 34, METATILE_SecretBaseShrub_Wall_Left, TRUE
	setmetatile 0, 35, METATILE_SecretBaseShrub_Wall_Left, TRUE
	setmetatile 0, 36, METATILE_SecretBaseShrub_Wall_Left, TRUE
	setmetatile 1, 34, METATILE_SecretBaseTree_Ground, FALSE
	setmetatile 1, 35, METATILE_SecretBaseTree_Ground, FALSE
	setmetatile 1, 36, METATILE_SecretBaseTree_Ground, FALSE
	setmetatile 2, 34, METATILE_SecretBaseShrub_ExposedCorner_UpperLeft, TRUE
	setmetatile 2, 35, METATILE_SecretBaseShrub_Wall_Right, TRUE
	setmetatile 2, 36, METATILE_SecretBaseShrub_ExposedCorner_LowerLeft, TRUE
	return
