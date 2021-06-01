//Fernando de Jesus Mendivil Terminel - A00232280
//TC1030 Grupo 700
//24 de mayo del 2021

#include "Objetos.h"

class Potion:public Objetos{
    public:
        Potion();
        Potion(int,int, string, string, int);
        void use();
    private:
        int potionType; // {Health, Energy, Wisdom, Death}
};

Potion::Potion() : Objetos(){
    potionType = 0;
};
Potion::Potion(int p, int lvl, string n, string descr, int healthp):Objetos(lvl,n,descr,healthp){ 
    potionType= p;
    
}
void Potion::use(){
    cout << "Acabas de coger una POTION, tomatela y ganaste más vida" << endl;
}