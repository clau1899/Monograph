#include <iostream>
#include <string>
using namespace std;

class Animal{
    protected:
        string nombre;
        int patas;
    public:
        Animal(){nombre="";patas=0;}
        ~Animal(){}
        void sonido()= 0;
};
class Perro:public Animal{
    public:
        void sonido(){
            cout<<"guau";
        }
};

class Gato: public Animal{
    public:
        void sonido(){
            cout<<"miau";
        }
};

int main(){
    Gato cat;
    cat.sonido();   //usara el metodo adecuado, el de gato
}
