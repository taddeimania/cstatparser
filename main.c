#include <stdio.h>
#include <string.h>
#include "team.h"
#include "player.h"


int main(int argc, char *argv[])
{
    unsigned char buffer[10000];
    FILE *ptr;
    struct Player player1;
    struct Team home_team, away_team;

    ptr = fopen(argv[1],"rb");

    fread(buffer, sizeof(buffer), 1, ptr);

    home_team = get_home_team(buffer);
    away_team = get_away_team(buffer);

    /* team 1 */
    for(int i = 5781; i < 5781 + 261 ; i++) {
        /* printf("Addr: %i, %u\n", i, buffer[i]); // prints a series of bytes */
    }

    printf("Home: %s\n", home_team.name);
    printf("Away: %s\n", away_team.name);
    strcpy(player1.name, "Joel");
    printf("%s\n", player1.name);

    /* printf("NEXT TEAM\n"); */

    /* /1* team 2 *1/ */
    /* for(int i = 260; i < 502 ; i++) { */
    /*     printf("Addr: %i, %u\n", 6042 + i, buffer[i]); // prints a series of bytes */
    /* } */
}
