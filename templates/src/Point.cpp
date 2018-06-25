#include "Point.h"

template <typename S>
Point<S>::Point(const S u, const S v){
    x=u;
    y=v;
}

template <typename S>
S Point<S>::getX(){
    return x;
}
template <typename S>
S Point<S>::getY(){
    return y;
}
template class Point <float>;
template class Point <int>;
