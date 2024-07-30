#include<iostream>
using namespace std;

int main() {
    float maths, physics, chemistry, english, computer, total, avg;
    
    cout << "Enter maths marks: ";
    cin >> maths;
    cout << "Enter physics marks: ";
    cin >> physics;
    cout << "Enter chemistry marks: ";
    cin >> chemistry;
    cout << "Enter english marks: ";
    cin >> english;
    cout << "Enter computer marks: ";
    cin >> computer;
    
    total = maths + physics + chemistry + english + computer;
    avg = total / 5;
    
    if (avg > 90) {
        cout << "Grade A";
    } else if (avg > 80) {
        cout << "Grade B+";
    } else if (avg > 70) {
        cout << "Grade B";
    } else if (avg > 60) {
        cout << "Grade C+";
    } else if (avg > 50) {
        cout << "Grade C";
    } else if (avg > 40) {
        cout << "Grade P";
    } else {
        cout << "Grade F";
    }
    
    return 0;
}


