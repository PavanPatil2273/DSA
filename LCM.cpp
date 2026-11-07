#include<iostream>
using namespace std;


int LCM(int a, int b){
    int greater;

    if (a > b) {
    greater = a;
    } else {
    greater = b;
}
    

    for(int i = greater; ; i++){
        if(i % a ==0 && i % b ==0){
            return true;
        }
    }
    return false;

    

}