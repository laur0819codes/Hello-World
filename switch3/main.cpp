#include <iostream>

using namespace std;

int main()
{
    int numOne;
    int numTwo;
    char op;
    int ans;

    cout << "Enter a Number: ";
    cin >> numOne;

    cout << "Enter another Number: ";
    cin >> numTwo;

    cout << endl << "+ for addition" << endl;
    cout << "- for subtraction" << endl;
    cout << "* for mulitiplication" << endl;
    cout << "/ for division" << endl << endl;
    cout << "Enter an Operation: ";
    cin >> op;

    switch (op) {
        case '+' :
            ans = numOne + numTwo;
            cout << numOne << " + " << numTwo << " = " << ans;
            break;

        case '-' :
            ans = numOne - numTwo;
            cout << numOne << " - " << numTwo << " = " << ans;
            break;

        case '*' :
            ans = numOne * numTwo;
            cout << numOne << " * " << numTwo << " = " << ans;
            break;

        case '/':
            ans = numOne / numTwo;
            cout << numOne << " / " << numTwo << " = " << ans;
            break;

        default :
            cout << "Invalid Operator";
            break;








    }



    return 0;
}
