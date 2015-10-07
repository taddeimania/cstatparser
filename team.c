#include <stdio.h>
#include "team.h"

const char * const POSITIONS[] = {"QB1", "QB2", "RB1", "RB2",
    "RB3", "RB4", "WR1", "WR2", "WR3", "WR4", "TE1", "TE2",
    "RE", "NT", "LE", "ROLB", "RILB", "LILB", "LOLB", "RCB",
    "LCB", "FS", "SS", "K", "P"};


Team get_team(unsigned char buffer[10000], int offset)
{
    Team team;

    for(int i = 0; i <= 2 ; i++) {
        team.name[i] = buffer[3087 + offset + i];
    }
    return team;
}

Team get_home_team(unsigned char buffer[10000])
{
    return get_team(buffer, 0);
}

Team get_away_team(unsigned char buffer[10000])
{
    return get_team(buffer, 32);
}

Team populate_roster(unsigned char buffer[10000], Team team)
{
    for (int i = 0 ; i < 25 ; i++){
        /* make a player and put them on the roster */
    }
    return team;
}
