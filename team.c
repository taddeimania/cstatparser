#include <stdio.h>
#include <string.h>
#include "team.h"
#include "player.h"

const char * const POSITIONS[] = {"QB1", "QB2", "RB1", "RB2",
    "RB3", "RB4", "WR1", "WR2", "WR3", "WR4", "TE1", "TE2",
    "RE", "NT", "LE", "ROLB", "RILB", "LILB", "LOLB", "RCB",
    "LCB", "FS", "SS", "K", "P"};


Team get_team(unsigned char *buffer, int offset)
{
    Team team;

    for(int i = 0; i <= 2 ; i++) {
        team.name[i] = buffer[3087 + offset + i];
    }
    return team;
}

Team get_home_team(unsigned char *buffer)
{
    return get_team(buffer, 0);
}

Team get_away_team(unsigned char *buffer)
{
    return get_team(buffer, 32);
}

void clear_roster(Team *team)
{
    int roster_size = sizeof(team->roster) / sizeof(Player);
    for (int i = 0 ; i < roster_size ; i++){
        destroy_player(&team->roster[0]);
    }
}

void populate_roster(unsigned char *buffer, Team *team, int offset)
{
    int position_count = sizeof(POSITIONS) / sizeof(unsigned long);

    for (int i = 0 ; i < 25 ; i++) {
        Player *player = new_player();
        strcpy(player->pos, POSITIONS[i]); // Set position for player
        add_stats(buffer, player, i + offset);
        team->roster[i] = *player;
    }
}
