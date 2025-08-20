#include <iostream>
using namespace std;

int main() {
    cout<< "Enter a number: ";
    int num;
    cin >> num;
    int fac = 1;
    for (int i = num; i > 0; i--)
    {
        fac *= i;
    }
    cout << fac << "";

    
    return 0;
}