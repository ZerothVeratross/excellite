ScorchedSlab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, MtPyre_6F_OnLoad
	.byte 0

MtPyre_6F_OnLoad::
	call_if_set FLAG_SYS_GAME_CLEAR, MtPyre_6F_EventScript_OpenArena
	end

MtPyre_6F_EventScript_OpenArena::
	setmetatile 7, 4, METATILE_Cave_Ladder_GoingDown, FALSE
	return

ScorchedSlab_OnTransition:
	setflag FLAG_LANDMARK_SCORCHED_SLAB
	end

