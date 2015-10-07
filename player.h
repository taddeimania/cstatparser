#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    char pos[4];
    char first_name[50];
    char last_name[50];
    int pass_attempts, pass_completions, pass_tds, pass_ints;
    int pass_yards, rush_attempts, rush_yards, rush_tds, receptions;
    int rec_tds, rec_yards, kr_attempts, kr_yards, kr_tds, pr_attempts;
    int pr_yards, pr_tds, tackles, sacks, def_int, def_td, int_yards;
    int xp_attempts, xp, fg_attempts, fg, punts, punt_yards;
} Player;

#endif
