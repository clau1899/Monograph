#include <iostream>
using namespace std;

struct USCurrency {
    int dollars;
    int cents;
    USCurrency operator+(const USCurrency o) {
        USCurrency tmp = {0, 0};
        tmp.cents = cents + o.cents;
        tmp.dollars = dollars + o.dollars;
        if(tmp.cents >= 100) {
            tmp.dollars += 1;
            tmp.cents -= 100;
        }
        return tmp;
    }
};
ostream& operator<<(ostream &output, const USCurrency &o)
{
    output << "$" << o.dollars << "." << o.cents;
    return output;
}

int main() {
    USCurrency a = {2, 50};
    USCurrency b = {1, 75};
    USCurrency c = a + b;
    cout << c << endl;          //4.25
    return 0;
}
