#include <iostream>
#include "Point.h"
#include "Container.h"
#include "ArrayContainer.h"

using namespace std;

template <typename T, typename U>//t y u solo funcionan en la funcion
U sum (const T a, const U b){
    return a+b;
}

/*template <typename S>
class Point {
    S x,y;
public:
    Point (const S u, const S v): x(u), y(v){}
    S getX(){return x;}
    S getY(){return y;}
};*/
int main()
{
    cout << sum <int , float> (1,2.84) << endl;
    //cout << sum (1.588,2.71) << endl;nopuedo declarar una var tipo T here
    Point <float> fpoint(2.5,8.2);
    cout<<fpoint.getX()<<", "<<fpoint.getY();
    cout<<endl;
    Point <int> punto2 (8,9);
    cout<<punto2.getX()<<","<<punto2.getY();
    cout<<endl;
    Container <char> contenedor ('h');
    cout<<contenedor.uppercase();
    ArrayContainer <int, 5> intac;
    ArrayContainer <float, 10> floatac;
    cout<<intac.modificar(2, 3);


    return 0;
}
