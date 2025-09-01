#ifndef _GAME_H
#define _GAME_H

#include "menu.h"
#include "player.h"
#include <fstream>
#include <iostream>

class game{

    private :
        player joueur;
        menu m;

    public :

        player getplayerinfo();

        void saveloadfile();

        std::string loadsavefile(std::string username);

        void updategame();
};


#endif