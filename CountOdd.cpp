#include<iostream>
using namespace std;

int CountOddDigit(int n){
   int count = 0;
   while( n > 0){
    int ld = n % 10;
    if(ld % 2 !=0){
        count = count + 1;  
    }
    n = n / 10;
   }
   return count;
}


int main(){
    int n;
    cin >> n;
    cout << CountOddDigit(n);
}
