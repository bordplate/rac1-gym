//
// Created by Vetle Hjelle on 20/12/2022.
//

#ifndef PS3_CKIT_GAME_H
#define PS3_CKIT_GAME_H

#include <rc1/common.h>

#include "View.h"

struct Game {
public:
    static Game& shared() {
        static Game game;
        return game;
    }

    int userid;

    void start();

    void transition_to(View* view);

    void on_tick();
    void on_render();

    void before_player_spawn();

    void alert(String& message);
private:
    Game() {
    }
    Game(Game const&);

    View* current_view;

    Moby* test_moby;
    Moby* test_moby_a;
    Moby* test_moby_r;
    Moby* test_moby_l;
};


#endif //PS3_CKIT_GAME_H
