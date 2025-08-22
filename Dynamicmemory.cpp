#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int age, roll_number;
    string grade;
};

int main() {

    Student *S = new Student;
    (*S).name = "Shashwat";
    (*S).age = 21;
    (*S).roll_number = 24;
    (*S).grade = "A+";

    cout << S -> name << " ";
    cout << S -> age << " ";
    cout << S -> roll_number << " ";
    cout << S -> grade << " ";
 
    return 0;
}