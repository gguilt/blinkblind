#include "blindblank.h"

int main(int argc, char* argv[])
{
    blindblank::Game Game;
    Game.game_init("Ohayou");
    Game.game_cleanup();
    return 0;
}

/* Pong Game using Blindblank Engine | 2015-10-28 23:20 (UTC+2)

   Development log:
    2015-10-28 | Day 1: Project started, tweaking linkers.
    2015-10-29 | Day 2: Linkers cleaned up,
*/
