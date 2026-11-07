#include<iostream>
using namespace std;

bool isPrime(int Num){
    if(Num <= 1){
        return false;
    }

for(int i = 2; i*i <= Num; i++){
    if(Num % i == 0){
        return false;
    }

}
    return true;



}

int primeNtoN(int n){
    for(int i=2; i <n; i++){
        if (isPrime(i)){
            cout << i <<"";
        }
    }
}