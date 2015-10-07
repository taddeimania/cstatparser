#include "team.h"


struct Team get_team(unsigned char buffer[10000], int offset)
{
    struct Team team;

    for(int i = 0; i <= 2 ; i++) {
        team.name[i] = buffer[3087 + offset + i];
    }
    return team;
}

struct Team get_home_team(unsigned char buffer[10000])
{
    return get_team(buffer, 0);
}

struct Team get_away_team(unsigned char buffer[10000])
{
    return get_team(buffer, 32);
}
