// Calc.cpp
// MIT License
// Copyright (c) 2025 Humbug!!

// See LICENSE file in the root of this repository.
#include <iostream>
#include <stdexcept> // For runtime_error

using namespace std;

// Function to perform calculations
double calculate(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0) throw runtime_error("Error: Division by zero!");
            return a / b;
        default: throw runtime_error("Error: Invalid operator!");
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "Simple C++ Calculator\n";
    cout << "Enter operation (e.g., 5 + 3): ";
    cin >> num1 >> op >> num2;

    try {
        double result = calculate(num1, num2, op);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl; // Print error message
    }

    return 0;
}

// Like I said, very basic, not my best work.
