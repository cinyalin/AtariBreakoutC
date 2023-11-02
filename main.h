#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

struct rect {
    int row;
    int col;
    int width;
    int height;
    int is_alive;
};

struct ball {
    int row;
    int col;
    int size;
    int velRow;
    int velCol;
};

struct stats {
    int lives;
    int bricks;
};

int rectCollision(struct rect rect, struct ball b);

#endif
