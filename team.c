#include "team.h"


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
