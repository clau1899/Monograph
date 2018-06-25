#ifndef CONTAINER_H
#define CONTAINER_H
#include <cctype>

template <typename T>
class Container
{
    T elt;
    public:
        Container(const T arg);
        T funcion ();

};

template <>
class Container <char> {
    char elt;
public:
    Container (const char arg);
    char uppercase();
};

#endif // CONTAINER_H
