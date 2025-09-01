#ifndef _MENU_H
#define _MENU_H

class menu{

    private : 
        unsigned int step;

    public :

        menu();

        unsigned int getstep();

        void setstep(unsigned int s);

        void nextmenu();
        void prevmenu();
};

#endif