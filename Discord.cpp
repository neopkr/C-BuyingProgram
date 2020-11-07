#include "Discord.h"

void Discord::Initialize()
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("API KEY HERE", &Handle, 1, NULL); // API KEY
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
    discordPresence.partyId = "";
    discordPresence.partySize = 1;
    discordPresence.partyMax = 5;
    discordPresence.joinSecret = "";
    Discord_UpdatePresence(&discordPresence);
}
