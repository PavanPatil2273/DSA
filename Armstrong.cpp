#include<iostream>

using namespace std;

int ArmStrongNumber(int n){
    int original = n;
    int count = 0;
    int sum = 0;
    int temp = n;

    while( n > 0){
        int ld = n % 10;
        count++;
        n = n /10;
    }

    temp = n ;
    while(temp > 0){
        int ld = n % 10;
        int power = 1;

        
        for(int i=0;i<count; i++){
            power = power * ld;
        }

        sum = sum + power;
        temp = temp / 10;
    }
    

}

int main(){
    int n;
    cin >> n;
    cout << ArmStrongNumber(n);
}