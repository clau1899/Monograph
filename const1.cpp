#include <iostream>

using namespace std;

class Vector{
    private:
        int x;
        int y;
    public:
        Vector(){
            x=0;
            y=0;
            cout<<"El vector ha sido creado";
        }
        void setx(int a);
        void sety(int a);
        int getx();
        int gety();
};
int main(){
    Vector vec1; //OUTPUT: El vector ha sido creado
}
