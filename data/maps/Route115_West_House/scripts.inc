Route115_West_House_MapScripts::
	.byte 0

Route114_EventScript_Lighthouse_Man::
	lock
	faceplayer
	goto_if_set FLAG_ROUTE_115_SHED_SHELL_ACQUIRED, Route115_West_House_EventScript_SmallTalk
	msgbox Route115_West_House_Text_IWorkAtTheLighthouse, MSGBOX_DEFAULT
	giveitem ITEM_SHED_SHELL, 1
	setflag FLAG_ROUTE_115_SHED_SHELL_ACQUIRED
	msgbox Route115_West_House_Text_BetterForATrainer, MSGBOX_DEFAULT
	release
	end

Route115_West_House_EventScript_SmallTalk::
	msgbox Route115_West_House_Text_AzumarillHelps, MSGBOX_DEFAULT
	release
	end

Route115_West_House_Text_IWorkAtTheLighthouse:
	.string "Hey! You aren't my new supplier, are\n"
	.string "you? You are an adventuring Trainer.\p"
	.string "What brings you so far from Rustboro?\n"
	.string "Me? I keep the lighthouse running.\p"
	.string "Last week I found this at the nearby\n"
	.string "beach, but I have no use for it.$"

Route115_West_House_Text_BetterForATrainer:
	.string "I've heard Pokemon feel safer in\n"
	.string "battle when holding that.\p"
	.string "A Trainer will make better use of it\n"
	.string "than me.$"

Route115_West_House_Text_AzumarillHelps:
	.string "This place may seem lonely, but I can\n"
	.string "always count on Azumarill for company.$"
