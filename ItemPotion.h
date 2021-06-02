//
//  ItemPotion.h
//  Tarea 04 
//  
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 01/06/21.
//

#include "Items.h"


class Potion:public Items{
    public:
        Potion();
        Potion(int,int, string, string, int);
        void use();
    private:
        int potionType; // {Health, Energy, Wisdom, Death}
};

Potion::Potion() : Items(){
    potionType = 0;
};
Potion::Potion(int p, int lvl, string n, string descr, int healthp):Items(lvl,n,descr,healthp){ 
    potionType= p;
    
}
void Potion::use(){
    cout << "Acabas de coger una POTION, tomatela y ganaste más vida" << endl;
}