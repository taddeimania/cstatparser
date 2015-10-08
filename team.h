#include "player.h"

#ifndef TEAM_H
#define TEAM_H


typedef struct {
    char name[4];
    Player roster[25];
} Team;

Team get_team(unsigned char *, int);
Team get_home_team(unsigned char *);
Team get_away_team(unsigned char *);
void populate_roster(unsigned char *, Team *, int);

#endif
