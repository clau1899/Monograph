#include <iostream>

using namespace std;

class Vector{
    private:
        int x;
        int y;
    public:
        Vector (int nx, int ny){
            x=nx;
            y=ny;
        }
        ~Vector (){}

};

int main(){
    Vector vec1;
}
//cuando termina el main la instancia vec1 muere gracias al destructor
