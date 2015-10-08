#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.h"


Player *new_player()
{
    Player *player = malloc(sizeof(Player));
    return player;
}

void add_stats(unsigned char *buffer, Player *player, int offset)
{
    if (strcmp(player->pos, "QB1") == 0 || strcmp(player->pos, "QB2")) {
        player->pass_attempts = buffer[5781 + offset];
        player->pass_completions = buffer[5781 + 1 + offset];
    } else {
        player->pass_attempts = 0;
        player->pass_completions = 0;
    }
}
