#include <iostream>

using namespace std;

class Vector{
    private: //podemos suprimir "private" porque es el modificador por defecto
        int x;
        int y;
    public:
        void setx(int a);
        void sety(int a);
        int getx();
        int gety();
};

int main(){

    Vector vector1; //podemos ponerle el nombre que queramos a la instancia
    Vector vector2;
    Vector ejemplo3;

}
