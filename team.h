
struct Team {
    char name[4];
};

struct Team get_team(unsigned char buffer[10000], int offset);
struct Team get_home_team(unsigned char buffer[10000]);
struct Team get_away_team(unsigned char buffer[10000]);
