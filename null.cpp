#include <iostream>
#include <cmath>
/*Maryam Al-lashit- Zahra Alsadiq - Lina Mansouri*/
using namespace std;

float charles_law(float v1, float T1, float T2) {
    T1 += 273.15; // converting Celsius to Kelvin
    T2 += 273.15;
    return v1 * T2 / T1;
}

float pascals_principle(float f, float a) {
    return f / a;
}

float hookes_law(float k, float x) {
    return -k * x;
}

float specific_heat(float Q, float m, float deltaT) {
    deltaT += 273.15; // converting Celsius to Kelvin
    return Q / (m * deltaT);
}

int main() {
    cout << "Welcome to the Physics Calculator!\n";

    int choice;
    char ch;
    do {
        cout << "\nChoose one of the following laws:\n";
        cout << "1. Charles' Law\n";
        cout << "2. Pascal's Principle Law\n";
        cout << "3. Hooke's Law\n";
        cout << "4. Specific Heat Law\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Charles' Law
                {
                    float v1, T1, T2;
                    cout << "Enter the value of v1 in cubic meters: ";
                    cin >> v1;
                    cout << "Enter the value of T1 in Celsius: ";
                    cin >> T1;
                    cout << "Enter the value of T2 in Celsius: ";
                    cin >> T2;
                    float v2 = charles_law(v1, T1, T2);
                    cout << "The value of v2 is " << v2 << " m^3.\n";
                    break;
                }
            case 2: // Pascal's Principle Law
                {
                    float f, a;
                    cout << "Enter the value of f in Newtons: ";
                    cin >> f;
                    cout << "Enter the value of a in square meters: ";
                    cin >> a;
                    float p = pascals_principle(f, a);
                    cout << "The value of p is " << p << " Pa.\n";
                    break;
                }
            case 3: // Hooke's Law
                {
                    float k, x;
                    cout << "Enter the value of k in Newtons/meter: ";
                    cin >> k;
                    cout << "Enter the value of x in meters: ";
                    cin >> x;
                    float f = hookes_law(k, x);
                    cout << "The value of f is " << f << " N.\n";
                    break;
                }
            case 4: // Specific Heat Law
                {
                    float c, Q, m, deltaT;
                    cout << "Enter the value of Q in Joules: ";
                    cin >> Q;
                    cout << "Enter the value of m in kilograms: ";
                    cin >> m;
                    cout << "Enter the value of deltaT in Celsius: ";
                    cin >> deltaT;
                    c = specific_heat(Q, m, deltaT);
                    cout << "The value of c is " << c << " J/kg.K.\n";
                    break;
                }
            default:
                cout << "Invalid choice.\n";
                break;
        }

        // prompt for continuing or terminating the program
        cout << "\nDo you wish to continue? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    cout << "Thank you for using the Physics Calculator! Goodbye!\n";
    return 0;
}
