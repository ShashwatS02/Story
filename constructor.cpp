#include <bits/stdc++.h>
using namespace std;

class Customer {
    string name;
    int account_number;
    int balance;
    int *roi;
    

    public:
    //default constructor
    Customer() {
        // cout << "Hello Constructor\n";
        name = "Virat";
        account_number = 5;
        balance = 100; 
        roi = new int[100];  
    }
    //parameterized constructor
    Customer(string name, int account_number, int balance) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    //constructor overloading
    Customer(string a, int b) {
        name = a;
        account_number = b;
        balance = 50;
    }
    // //inline constructor
    // inline Customer(string a, int b, int c): name(a),account_number(b),balance(c) {

    // };
    void display() {
        cout << name << " " << account_number << " " << balance << endl;
    }
    //copy constructor
    Customer(Customer &B) {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

int main() {

    Customer A1;
    Customer A2("Bumrah",23,100);
    Customer A3("Mohit",25);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    Customer A5;
    A5 = A3;
    A5.display();

    return 0;
}