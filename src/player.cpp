#include "player.h"

player::player(std::string u, int e, int m, int i, int l){
    username = u;
    exp = e;
    money = m;
    id = i;
    lvl = l;
}

string player::getuser(){return username;};
const float player::getexp(){return exp;};
const float player::getmoney(){return money;};
const int player::getid(){return id;};
const int player::getlvl(){return lvl;};

void player::setuser(string u){username = u;};
void player::setexp(float e){exp = e;};
void player::setmoney(float m){money = m;};
void player::setid(int i){id = i;};
void player::setlvl(int l){lvl = l;};

bool player::checklvl(){
    return exp>=(int)(997+(pow(4, getlvl())/pow(3, getlvl())));
}

void player::lvlup(){do{exp = exp - (997+pow(4, getlvl())/pow(3, getlvl()))+1; lvl++;}while(exp>=(int)(997+pow(4, getlvl())/pow(3, getlvl())));};

void player::addexp(float e){exp = exp + e;};

void player::addmoney(float m){money = money + m;};