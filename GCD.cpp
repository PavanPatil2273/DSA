#include<iostream>
using namespace std;

int GCD(int a, int b){
    int small;

    if(a < b){
        small = a;
    }else{
        small = b;
    }

    for(int i = small; i>=1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}


int main(){
    int a,b;
    cin >>a >> b;

    cout << GCD(a,b);

    
}