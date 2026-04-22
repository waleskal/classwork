#include <iostream>
#include <string>

using namespace std;

// --- Helper Functions (Required by the handout) ---

void greet() { // [cite: 260]
    cout << "Hello from a function!" << endl;
}

int add(int a, int b) { // [cite: 273]
    return a + b;
}

double area(double width, double height) { // [cite: 284]
    return width * height;
}

// --- The Main Entry Point (This is what was missing!) ---

int main() {
    // Example 1: Prediction [cite: 172-177]
    int x = 5;
    int y = 7;
    cout << "Example 1: " << x + y << " " << x * y << endl;

    // Example 2: Basic Input/Output [cite: 185-187]
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << endl;

    // Example 3: Type Casting [cite: 193-199]
    int a = 10;
    double b = 3.5;
    double result = (double) a / b;
    cout << "Result of a / b = " << result << endl;

    // Example 4: Operators [cite: 206-216]
    int x_op = 8;
    int y_op = 3;
    cout << "x % y = " << x_op % y_op << endl;

    // Example 5: If/Else [cite: 225-228]
    int temp = 30;
    if (temp > 25) cout << "It's hot outside!" << endl;
    else cout << "It's cool outside." << endl;

    // Example 6: Switch [cite: 236-243]
    int day = 3;
    switch(day) {
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "Invalid day" << endl; break;
    }

    // Example 7: For Loop [cite: 252-253]
    for (int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }

    // Example 8, 9, 10: Functions [cite: 267, 279, 292-296]
    greet();
    cout << "Sum = " << add(4, 6) << endl;
    
    double w, h;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;
    cout << "Area = " << area(w, h) << endl;

    return 0;
}