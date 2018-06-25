#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *xPtr = &x;
    cout << *xPtr << endl;
    delete xPtr;
}
