#ifndef POINT_H
#define POINT_H

template <typename S>//clase generica
class Point {
    S x,y;
public:
    Point (const S u, const S v);
    S getX();
    S getY();
};


#endif // POINT_H
