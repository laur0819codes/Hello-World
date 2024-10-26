#include <iostream>

using namespace std;

int main()
{
    int i=1;
    cout << "EVEN numbers from 1 to 50 are:" << endl;
    for (int i = 1; i <= 50; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;




}
