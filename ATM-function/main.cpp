#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

// Global Variable
string accName;
int accNum;
int depAmo;
int accBal;

void accDetails() {

    cout << " " << endl;
    cout << "Enter Name: ";
    cin.ignore();
    getline (cin, accName);

    cout << "Enter Account Number: ";
    cin >> accNum;

    cout << "Enter Initial Balance: ";
    cin >> accBal;

}

void accData (){

    cout << " " << endl;
    cout << "Account name is " << accName << endl;
    cout << "Account number is " << accNum << endl;
    cout << "Account balance is " << accBal << endl;

}

void deposit (){

    cout << " " << endl;
    cout << "Enter amount to deposit: ";
    cin >> depAmo;
    accBal = accBal + depAmo;
    cout << "The current balance is " << accBal << endl;

}

void balance (){

    cout << " " << endl;
    cout << "Account name: " << accName << endl;
    cout << "Your account balance is " << accBal << endl;

}

void withdraw () {

    cout << " " << endl;
    int wit;
    cout << "Enter amount to withdraw: ";
    cin >> wit;

    accBal = accBal - wit;

    cout << "Your current balance is: " << accBal << endl;

}



int main()
{
    int choice;
    while (1){
        cout << "\n[1] Enter Account Details";
        cout << "\n[2] View Account Details";
        cout << "\n[3] Deposit";
        cout << "\n[4] Show Balance";
        cout << "\n[5] Withdraw";
        cout << "\n[6] Exit";
        cout << " " << endl;
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice) {

        case 1:
            accDetails ();
            break;

        case 2:
            accData ();
            break;

        case 3:
            deposit ();
            break;

        case 4:
            balance ();
            break;

        case 5:
            withdraw ();
            break;

        case 6:
            exit (1);
            break;

        default:
            cout << "\nInvalid Choice";

        }

    }

    return 0;
}
