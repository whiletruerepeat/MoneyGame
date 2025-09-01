#ifndef _PLAYER_H
#define _PLAYER_H
#include <math.h>
#include <unistd.h>
#include <string>

using namespace std;

class player{
    private :

        string username;
        int exp;
        int money;
        int id;
        int lvl;

    public :

        player(string u, int e, int m, int i, int l);

        string getuser();
        const float getexp();
        const float getmoney();
        const int getid();
        const int getlvl();

        void setuser(string u);
        void setexp(float e);
        void setmoney(float m);
        void setid(int i);
        void setlvl(int l);

        bool checklvl();
        void lvlup();
        void addexp(const float e);
        void addmoney(const float money);
};

#endif