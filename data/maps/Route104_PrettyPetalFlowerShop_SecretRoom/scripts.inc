Route104_PrettyPetalFlowerShop_SecretRoom_MapScripts::
	.byte 0

Route104_PrettyPetalFlowerShop_SecretRoom_EventScript_ItemDarkSample::
	finditem ITEM_DARK_SAMPLE
	msgbox Route104_PrettyPetalFlowerShop_SecretRoom_Text_WhatAreTheyDoing, MSGBOX_AUTOCLOSE
	end

Route104_PrettyPetalFlowerShop_SecretRoom_Text_WhatAreTheyDoing:
	.string "What are they doing in this\n"
	.string "flower shop?$"
