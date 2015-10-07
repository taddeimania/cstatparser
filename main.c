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

    /* team 1 */
    for(int i = 5781; i < 5781 + 239 ; i++) {
        printf("Addr: %i, %u\n", i, buffer[i]);
    }

    printf("Home: %s\n", home_team.name);
    printf("Away: %s\n", away_team.name);

    populate_roster(buffer, home_team);

    fclose(ptr);

    /* trying to find unsigned short stats below */
    FILE *ptr2;
    ptr2 = fopen(argv[1], "rb");
    unsigned short stat_buffer[10000];
    fread(stat_buffer, sizeof(stat_buffer), 1, ptr2);
    for(int i = 2890; i < 2890 + 239 ; i++) {
        printf("Addr: %i, %u\n", i, stat_buffer[i]);
    }
    /* printf("NEXT TEAM\n"); */

    /* /1* team 2 *1/ */
    /* for(int i = 260; i < 502 ; i++) { */
    /*     printf("Addr: %i, %u\n", 6042 + i, buffer[i]); // prints a series of bytes */
    /* } */
}
