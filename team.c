#include "team.h"

struct Team get_home_team(unsigned char buffer[10000])
{
    struct Team home_team;
    char home[2];

    for(int i = 0; i <= sizeof(home) ; i++) {
        home_team.name[i] = buffer[3087 + i];
    }
    return home_team;
}

struct Team get_away_team(unsigned char buffer[10000])
{
    struct Team away_team;
    char away[2];

    for(int i = 0; i <= sizeof(away) ; i++) {
        away_team.name[i] = buffer[3087 + 32 + i];
    }
    return away_team;
}
