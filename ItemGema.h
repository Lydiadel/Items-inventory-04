
//TC1030 Grupo 700
//24 de mayo del 2021

#include "Objetos.h"

class Gema: public Objetos{
    public:
        Gema();
        Gema(int,int,string, string, int);
        void use();
        int getGemType(){return gemType;}; 

    private:
        int gemType;
         //{Diamond, Ruby, Emerald, Sapphire};
}; 
Gema::Gema() : Objetos(){
    gemType= 0;    
}
Gema::Gema(int gemt, int lvl, string n, string descr, int healthp):Objetos(lvl, n, descr, healthp){
    gemType = gemt;

}
void Gema::use(){
    cout << "Acabas de coger una GEMA y ganaste más vida" << endl;
}