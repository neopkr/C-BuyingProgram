#include "Discord.h"

void Discord::Initialize()
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("774000935198392360", &Handle, 1, NULL); // API KEY
}

void Discord::Update()
{
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.state = "Test";
    discordPresence.details = "Testing a.cpp";
    discordPresence.startTimestamp = 1507665886;
    discordPresence.largeImageText = "rcp_test";
    discordPresence.largeImageKey = "";
    discordPresence.smallImageKey = "";
    discordPresence.smallImageText = "Test_Logo";
    discordPresence.partyId = "ae488379-351d-4a4f-ad32-2b9b01c91657";
    discordPresence.partySize = 1;
    discordPresence.partyMax = 5;
    discordPresence.joinSecret = "MTI4NzM0OjFpMmhuZToxMjMxMjM= ";
    Discord_UpdatePresence(&discordPresence);
}