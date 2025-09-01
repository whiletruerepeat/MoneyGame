#include "menu.h"

menu::menu(){
    step = 0;
}

unsigned int menu::getstep(){
    return step;
}

void menu::setstep(unsigned int s){
    step = s;
}

void menu::nextmenu(){
    step++;
}

void menu::prevmenu(){
    step--;
}