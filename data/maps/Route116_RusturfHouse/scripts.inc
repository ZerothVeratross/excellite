.set LOCALID_KIRLIA, 1

Route116_RusturfHouse_MapScripts::
	.byte 0

Route116_RusturfHouse_EventScript_Kirlia::
	lock
	faceplayer
	playmoncry SPECIES_KIRLIA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	goto_if_set FLAG_ROUTE_116_KIRLIA_SPOKEN_TO, Route116_RusturfHouse_EventScript_KirliaSmallTalk
	msgbox Route116_RusturfHouse_Text_TelepathyWhoAreYou, MSGBOX_DEFAULT
	giveitem ITEM_ULTRA_BALL, 1
	setflag FLAG_ROUTE_116_KIRLIA_SPOKEN_TO
	release
	end

Route116_RusturfHouse_EventScript_KirliaSmallTalk::
	msgbox Route116_RusturfHouse_Text_TelepathyGetOut, MSGBOX_DEFAULT
	release
	end

Route116_RusturfHouse_Text_TelepathyWhoAreYou::
	.string "(Who are you? What are you doing here?\n"
	.string "This isn't your house!)\p"
	.string "(My trainer is outside. Did she give\n"
	.string "you permission to enter?)\p"
	.string "(You are the third trainer to invade\n"
	.string "the house this month.)\p"
	.string "(The last one left when he found an\n"
	.string "Ultra Ball. Maybe you will?)$"

Route116_RusturfHouse_Text_TelepathyGetOut::
	.string "(This isn't my house either, but the\n"
	.string "owner is friends with my trainer.)\p"
	.string "(We'll be leaving soon, but not before\n"
	.string "you do.)$"
