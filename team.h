#include "player.h"

#ifndef TEAM_H
#define TEAM_H


typedef struct {
    char name[4];
    Player roster[25];
} Team;

Team get_team(unsigned char buffer[10000], int offset);
Team get_home_team(unsigned char buffer[10000]);
Team get_away_team(unsigned char buffer[10000]);
Team populate_roster(unsigned char buffer[10000], Team team);

#endif
