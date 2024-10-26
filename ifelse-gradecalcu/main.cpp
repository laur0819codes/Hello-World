/*#include <iostream>

using namespace std;

int main()
{
    float genAve;
    float gradeOne;
    float gradeTwo;
    float gradeThree;
    float gradeFour;
    float grading = 4;

    cout << "Enter your first grading: ";
    cin >> gradeOne;

    cout << "Enter your second grading:  ";
    cin >> gradeTwo;

    cout << "Enter your third grading: ";
    cin >> gradeThree;

    cout << "Enter your fourth grading; ";
    cin >> gradeFour;

    genAve = (gradeOne + gradeTwo + gradeThree + gradeFour)/ grading;

    cout << "Your General Average is " << genAve << endl;

    if (genAve >= 98) {
        cout << "Congratulations! You are with Highest Honors";
    } else if (genAve >= 95) {
        cout << "Congratulations! You are with High Honors";
    } else if (genAve >= 90) {
        cout << "Congratulations! You are with Honors";
    } else if (genAve >= 75) {
        cout << "You have passed!";
    } else  {
        cout << "You have failed";
    }



    return 0;
} */



#include <iostream>
using namespace std;
int main() {

   float grade;

   cout << "Enter you grade: ";
   cin >> grade;

   if (grade >= 95) {
       cout << "A+";
   } else if (grade >= 90) {
       cout << "A";
   } else if (grade >= 85) {
       cout << "B";
   } else if (grade >= 80) {
       cout << "C";
   } else if (grade >= 76) {
       cout << "D";
   } else if (grade <= 75) {
       cout << "F";
   } else {cout << "invalid input";
   }

    return 0;
}
