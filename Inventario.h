// Lydia Delgado Uriarte
//TC1030 Grupo 700
//24 de mayo del 2021

#ifndef Inventario_h
#define Inventario_h

#include "Items.h"
#include "ItemGema.h"
#include "ItemPotion.h" 
#include <vector>

class Inventario {
    public:
        Inventario();
        Inventario(int, int);
        virtual void draw(); //virtual solo en declaracion - Función polimórfica
        int getValX(){return x;};
        int getValY(){return y;};

        void addItemGem();
        void addItemPotion();
        void showInventario();
    protected:
        int x;
        int y;
        vector <Items*> vecItems;     
};
Inventario::Inventario(){
    x=0;
    y=0;
}
Inventario::Inventario(int valx, int valy){
    x= valx;
    y= valy;
}
void Inventario::draw(){
    cout<<"Ese USE no se debe llamar de la clase base"<<endl;
}

void Inventario::addItemGem(){
    Items *objItems;  
    objItems = new Gema();
    vecItems.push_back(objItems);
}

void Inventario::addItemPotion(){
    Items *objItems;  
    objItems = new Potion();
    vecItems.push_back(objItems);
}
void Inventario::showInventario(){
    
}
#endif