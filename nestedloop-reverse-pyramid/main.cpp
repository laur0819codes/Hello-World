#include <iostream>

using namespace std;

int main()
{
    int num = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = num; j > num - i; j--) {
            cout << j;
        }
        cout << endl;
        num += i + 1;
    }

    return 0;
}
