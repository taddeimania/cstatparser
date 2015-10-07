#include<stdio.h>
#include<string.h>

struct Player {
    char name[50];
    char pos[4];
};

struct Team {
    char name[4];
};

int main()
{
    char home[2];
    unsigned char buffer[10000];
    FILE *ptr;
    char away[2];
    struct Player player1;
    struct Team home_team, away_team;

    ptr = fopen("1.nst","rb");

    fread(buffer, sizeof(buffer), 1, ptr);

    /* home team name */
    for(int i = 0; i <= sizeof(home) ; i++) {
        home[i] = buffer[3087 + i];
    }
    strcpy(home_team.name, home);

    /* away team name */
    for(int i = 0; i <= sizeof(away) ; i++) {
        away[i] = buffer[3087 + 32 + i];
    }
    strcpy(away_team.name, away);

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
