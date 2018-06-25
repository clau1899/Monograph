#include <iostream>
using namespace std;

int main(){

    int *x = new int;   //Creamos un puntero a la memoria recientemente asignada

    delete x;           //Desasigna la memoria que estaba previamente asignada

    return 0;
}
