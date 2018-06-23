#include <iostream>
#include <string>

using namespace std;

char* duplicate(char *n){
    char *dup;
    for (int i=0;i!='\0';i++){
        dup[i]=n[i];
    }
    return dup;
}
class Vector{

    public:
        int x;
        int y;
        char *nombre;

        Vector(){ x=0; y=0; cout<<"El vector ha sido creado"; }
        Vector ( Vector &o){
            x=o.x;
            y=o.y;
            nombre=duplicate(o.nombre);//metodo que hace un duplicado del nombre para que los punteros sean distintos
        }
        void setx(int a){
            x=a;
        }
        void sety(int a){
            y=a;
        }
        void setnombre(char n[]){
            for (int i=0;i!='\0';i++){
                nombre[i]=n[i];
            }
        }

};
int main(){
    Vector vec1; //OUTPUT: El vector ha sido creado
    vec1.setx(22);
    char n[]="foo";
    vec1.setnombre(n);
    Vector vec2 = vec1;
    vec2.setnombre("boo");
    cout<<vec1.nombre; // foo
}
