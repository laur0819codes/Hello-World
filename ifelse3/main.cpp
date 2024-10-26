#include <iostream>

using namespace std;

int main()
{
    bool hasCoke = true;
    bool hasRoyal = true;
    bool hasSprite = false;

    if (hasCoke) {
        cout << "you bought coke!" << endl;
    } else if (hasRoyal){
        cout << "you bought royal"<< endl;
    } else if (hasSprite) {
        cout << "you bought sprite" << endl;
    } else {cout << "no softdrinks";}



    return 0;
}
