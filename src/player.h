#ifndef _PLAYER_H
#define _PLAYER_H
#include <math.h>
#include <unistd.h>

class player{
    private :

        std::string username;
        int exp;
        int money;
        int id;
        int lvl;

    public :

        player(char* u, int e, int m, int i, int l);

        ~player();

        const char* getuser();
        const float getexp();
        const float getmoney();
        const int getid();
        const int getlvl();

        void setuser(char* u);
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