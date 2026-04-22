#include <iostream>
#include <string>

using namespace std;

// Function definitions for Section: Functions [cite: 260, 273, 284]
void greet() {
    cout << "Hello from a function!" << endl;
}

int add(int a, int b) {
    return a + b;
}

double area(double width, double height) {
    return width * height;
}

int main() {
    // 1. Prediction Task [cite: 172-177]
    int x = 5, y = 7;
    cout << "Prediction Output: " << x + y << " " << x * y << endl;

    // 2. Basic Input/Output [cite: 185-188]
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << endl;

    // 3. Variables and Type Casting [cite: 193-200]
    int a = 10;
    double b = 3.5;
    double result = (double) a / b;
    cout << "Result of a / b = " << result << endl;

    // 4. Operators and Expressions [cite: 206-216]
    int x_op = 8, y_op = 3;
    cout << "x % y = " << x_op % y_op << endl;

    // 5. Control Structures: If/Else [cite: 225-230]
    int temp = 30;
    if (temp > 25) cout << "It's hot outside!" << endl;
    else cout << "It's cool outside." << endl;

    // 6. Switch Statement [cite: 236-245]
    int day = 3;
    switch(day) {
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "Invalid day" << endl;
    }

    // 7. For Loop [cite: 252-254]
    for (int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }

    // 8. Function Calls [cite: 267, 279, 296]
    greet();
    cout << "Sum = " << add(4, 6) << endl;
    
    double w, h;
    cout << "Enter width and height for area: ";
    cin >> w >> h;
    cout << "Area = " << area(w, h) << endl;

    return 0;
}