#include <iostream>

using namespace std;

class Vector{ //nombre de la clase "Vector"
    private:
        int x;  //variables miembro
        int y;
    public:
        void setx(int a);   //funciones miembro
        void sety(int a);
        int getx();
        int gety();
};
void Vector::setx(int a){
    x=a;
}
void Vector::sety(int a){
    y=a;
}
int Vector::getx(){
    return x;
}
int Vector::gety(){
    return y;
}
