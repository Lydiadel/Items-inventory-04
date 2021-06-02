//
//  ItemGema.h
//  Tarea 04 
//  
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 01/06/21.
//

#include "Items.h"

class Gema: public Items{
    public:
        Gema();
        Gema(int,int,string, string, int);
        void use();
        int getGemType(){return gemType;}; 

    private:
        int gemType;
         //{Diamond, Ruby, Emerald, Sapphire};
}; 
Gema::Gema() : Items(){
    gemType= 0;    
}
Gema::Gema(int gemt, int lvl, string n, string descr, int healthp):Items(lvl, n, descr, healthp){
    gemType = gemt;

}
void Gema::use(){
    cout << "Acabas de coger una GEMA y ganaste más vida" << endl;
}