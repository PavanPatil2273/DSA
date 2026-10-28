#include<iostream>

using namespace std;

int LargestDigit(int n){
    int largest = 0;
    while( n > 0){
        int ld = n % 10;
        if(ld > largest){
            largest = ld;
        }
        n = n / 10;
    }

    return largest;
}


int main(){
    int n;
    cin >> n;
    cout << LargestDigit(n);
}

