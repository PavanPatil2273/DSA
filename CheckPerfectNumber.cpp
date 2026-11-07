#include <iostream>
using namespace std;

bool CheckPerfectNumber(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (CheckPerfectNumber(n)) {
        cout << "Perfect Number";
    } else {
        cout << "Not a Perfect Number";
    }

    return 0;
}