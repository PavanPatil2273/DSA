#include<iostream>
#include <vector>
using namespace std;


vector<int> Divisor(int n){
    vector<int> ans;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            ans.push_back(i);
            
        }
    }
    return ans;


}



int main(){
    int n;
    cin >> n;
    vector<int> result = Divisor(n);

    for(int i = 0; i<result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;

}