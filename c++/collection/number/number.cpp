#include "number.h"

bool smaller(int a, int b)
{
    return a < b;
}
bool larger(int a, int b)
{
    return a > b;
}
bool equal(int a, int b)
{
    return a == b;
}

bool isPrime(int num){
    if(num<2){
        return false;
    }
    for(int i=0;i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return false;
}

int GCD(int a,int b){
    int A,B;
    // A is larger number, B is smaller number
    if (smaller(a, b)){
        A = b;
        B = a;
    }
    else{
        A = a;
        B = b;
    }
    while(B!=0){
        int temp=B;
        B=A%B;
        A=temp;

    }
    return A;
}

