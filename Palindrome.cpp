#include<iostream>
using namespace std;

bool IsPalindrome(int n){
    int rev; 0;
    int original = n;

    while(n > 0){
        int ld= n % 10;
        int rev = rev * 10 + ld;
        n = n / 10;
    }

    if ( original == rev){
        return true;
    }else{
        return false;
    }
}