#include <iostream>
using namespace std;
void sum();
double diff (double num1, double num2);

int main() {

    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << diff (num1, num2);




    return 0;
}

void sum ()
{
    int num1, num2, sum;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    sum = num1 + num2;

    cout << sum << endl;

}

double diff (double num1, double num2) {

    return num1 - num2;

}


