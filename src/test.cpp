#include "player.h"
#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
    char* u = new char;
    cout<<"Pseudo du joueur?"<<endl;
    cin>>u;
    cout<<"Bonjour, "<<u<<"."<<endl;
    player joueur(u, 0, 0, 0, 1);
    cout<<"{ Argent : "<<joueur.getmoney()<<" | Exp : "<<joueur.getexp()<<"/"<<(int)(997+pow(4, joueur.getlvl())/pow(3, joueur.getlvl()))<<" | Level : "<<joueur.getlvl()<<" }"<<endl;
    bool quit = false;
    string str;
    str = "ph";
    while (!quit){
        if(str == "ph"){
            cout<<">";
            cin>>str;
        }
        if(str == "c"){
            joueur.addmoney(1);
            joueur.addexp(100);
        }else if(str == "q"){quit = true;};
        if(joueur.checklvl()){joueur.lvlup();}
        cout<<"{ Argent : "<<joueur.getmoney()<<" | Exp : "<<joueur.getexp()<<"/"<<(int)(997+pow(4, joueur.getlvl())/pow(3, joueur.getlvl()))<<" | Level : "<<joueur.getlvl()<<" }"<<endl;
        str = "ph";
    }

    return 0;
}