#include <iostream>

using namespace std;

int main()
{
    double radius, area = 0.0, circumference = 0.0;
    int choice;
    const double PI=3.1416;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Choose an option:" << endl;
    cout << "1 area of the circle" << endl;
    cout << "2 circumference of the circle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        area= PI * radius * radius;
        cout << "the area of the circle is: " << area << endl;
    }

    else if (choice == 2) {
        circumference= 2 * PI * radius;
        cout << "the circumference of the circle is: " << area << endl;
    } else if (choice != 1 && 2) { cout << "incorrect output";
        }


    return 0;
}
