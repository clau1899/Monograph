#ifndef ARRAYCONTAINER_H
#define ARRAYCONTAINER_H

template <typename T, int N>
class ArrayContainer
{
    T elts [N];
    public:
        T modificar(const int i, const T val);
        T obtener (const int i);
};

#endif // ARRAYCONTAINER_H
