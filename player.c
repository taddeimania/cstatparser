#include <stdio.h>
#include <string.h>
#include "player.h"

void add_stats(unsigned char *buffer, Player *player, int offset)
{
    if (strcmp(player->pos, "QB1") == 0) {
        player->pass_attempts = buffer[5781 + offset];
    } else {
        player->pass_attempts = 0;
    }
}
