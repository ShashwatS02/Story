#include <iostream>
using namespace std;

int main() {

    //Problem 1

    // for (int i = 280; i >= 250; i--) {
    //     cout << i << " ";
    // }

    //Problem 2

    // for (char i = 'A'; i <= 'Z'; i++) {
    //     cout << i << " ";
    // }

    //Problem 3 

    // for (char i = 'Z'; i >= 'A'; i--) {
    //     cout << i << " ";
    // }

    //Problem 4

    // for (int i = 220; i <= 730; i+=7){
    //     cout << i << " ";
    // }

    //Problem 5

    // int n, sum=0;
    // cout << "Enter the number: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     sum += i*i;
    // }
    // cout << sum;

    //Problem 6

    // int n, sum = 1;
    // cout << "Enter the number: ";
    // cin >> n;

    // for (int i = 2; i <= n; i++) {
    //     sum += i*i*i;
    // }
    // cout << sum;

    //Problem 7

    int n, last = 0, prev = 1, curr;
    cout << "Enter your number: ";
    cin >> n;

    if(n == 1) {
        cout << "0";
        return 0;
    }

    if (n == 2) {
        cout << "1";
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        curr = last + prev;
        last = prev;
        prev = curr;
        

    }

    cout << curr;

    return 0;
}