#include <iostream>

using namespace std;

class Vector{
    private:
        int x;
        int y;
    public:
        void setx(int a); //funcion que recibe un parametro
        void sety(int a);
        int getx();
        int gety();
};

int main(){

    Vector vector1;
    Vector vector2;
    Vector ejemplo3;
    vector1.setx(9);    //se asigna 9 a x del vector1
    vector2.sety(10);   //se asigna 10 a y del vector2
    ejemplo3.x=14;      //nos da un error porque las variables miembro son privadas,
                        //entonces para modificar debemos usar las funciones setters que son públicas
}


