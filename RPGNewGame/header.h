#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <time.h>
#include <stdlib.h>


typedef struct player{
    char name[20];
    int maxlife;
    int damage;
    int gold;
}player;

typedef struct monsters{
    char name[20];
    int maxlife;
    int damage;
}monsters;


void firstChapter(player *player1,monsters *orc);
void combat(player *y,monsters *orc);

#endif // HEADER_H_INCLUDED
