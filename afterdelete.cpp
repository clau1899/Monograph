#include <iostream>
using namespace std;


int *getPtrToFive() {
    int *x = new int;
    *x = 5;
    return x;
}
int main() {
    int *x = getPtrToFive();
    delete x;
    cout << *x << endl; // ???
}

