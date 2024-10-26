#include <iostream>

using namespace std;

int main()
{
    double radius, area;
    const double PI = 3.1416;


   cout << "Radius: ";
   cin >> radius;

   area = PI * (radius * radius);

   cout << "The area of the circle is: " << area;




    return 0;
}

