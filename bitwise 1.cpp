#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Pls Enter A Number In Decimal: ";
    cin >> a;
    cout << "Pls Enter Another Number In Decimal: ";
    cin >> b;

    // Converting decimal input to binary for bitwise operations
    int binary_a = a;
    int binary_b = b;

    // Perform bitwise operations on binary representation
    cout << "BITWISE AND: " << (binary_a & binary_b) << endl;
    cout << "BITWISE OR: " << (binary_a | binary_b) << endl;
    cout << "BITWISE XOR: " << (binary_a ^ binary_b) << endl;
    cout << "BITWISE NOT of A: " << (~binary_a) << endl;
    cout << "BITWISE NOT of B: " << (~binary_b) << endl;
    cout << "Left Shift of A: " << (binary_a << 1) << endl;
    cout << "Right Shift of A: " << (binary_a >> 1) << endl;

    return 0;
}
