#include <stdio.h>
#include <string.h>
#include "team.h"
#include "player.h"

int main(int argc, char *argv[])
{
    unsigned char buffer[10000];
    FILE *ptr;
    Player player1;

    ptr = fopen(argv[1], "rb");

    fread(buffer, sizeof(buffer), 1, ptr);

    Team home_team = get_home_team(buffer);
    Team away_team = get_away_team(buffer);


    printf("Home: %s\n", home_team.name);
    printf("Away: %s\n", away_team.name);

    populate_roster(buffer, &home_team, 0);
    populate_roster(buffer, &away_team, 261);
    printf("%i\n", away_team.roster[0].pass_attempts);
    printf("%i\n", home_team.roster[0].pass_attempts);

    fclose(ptr);
    // DO NOT TRY TO ACCESS A ROSTER BELOW HERE!
    clear_roster(&home_team);
    clear_roster(&away_team);

}
