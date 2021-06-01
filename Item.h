// Lydia Delgado Uriarte
//TC1030 Grupo 700
//24 de mayo del 2021

#ifndef Objetos_h
#define Objetos_h

class Objetos {

    public:
        Objetos();
        Objetos(int, string, string, int);
        virtual void use(); //virtual solo en declaracion - Función polimórfica
        int getLvl(){return level;};
        string getName(){return name;};
        string getDescription(){return description;};
        int getHP(){return HP;};
    protected:
        int level; 
        string name; 
        string description;
        int HP;
        vector <Objetos*> vecObjetos;
};
Objetos::Objetos(){
    level=0; 
    name=""; 
    description="";
    HP=1000;
}
Objetos::Objetos(int lvl, string n, string descr, int healthp){
    level= lvl;
    name= n;
    description: descr;
    HP= healthp;
}
void Objetos::use(){
    cout<<"Ese USE no se debe llamar de la clase base"<<endl;
}

#endif