#ifndef BLINDBLANK_H_INCLUDED
#define BLINDBLANK_H_INCLUDED

/* Blindblank Engine / 2015-10-28 - v0.0.0.0 */
#include <string>

namespace blindblank
{
    class Game
    {
        public:
            Game();
            ~Game();

            int game_init(std::string windowName);
            void game_cleanup();
    };
}


#endif // BLINDBLANK_H_INCLUDED
