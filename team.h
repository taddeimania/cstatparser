#include "player.h"

typedef struct {
    char name[4];
    Player roster[25];
} Team;

Team get_team(unsigned char buffer[10000], int offset);
Team get_home_team(unsigned char buffer[10000]);
Team get_away_team(unsigned char buffer[10000]);
