// Power Function 
#include <iostream>
using namespace std;

// Function prototype
double power(double base, int exponent){
    float result=1;
    int expo=exponent;
    if (exponent < 0) {
        expo=expo*-1;
    }
    for(int i=0; i<expo; i++){
        result=result*base;
    }
    if (exponent >= 0){
        return result;
    }else{
        return 1/result;
    }
}

int main(){
    double base;
    int n;
    cout <<"Enter a number: " ;
    cin >> base;
    cout <<"Enter an exponent: " ;
    cin >> n;
    double total= power(base, n);
    cout <<"Answer is: " <<total ;
    return 0;
}