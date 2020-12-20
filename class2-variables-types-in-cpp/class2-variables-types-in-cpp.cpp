#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int age;
    double salary, height;
    char genre;
    string name;

    age = 20;
    salary = 5800.5;
    height = 1.63;
    genre = 'F';
    name = "Maria Silva";

    cout << fixed << setprecision(2);
    cout << "AGE = " << age << endl;
    cout << "SALARY = " << salary << endl;
    cout << "HEIGHT = " << height << endl;
    cout << "GENRE = " << genre << endl;
    cout << "NAME = " << name << endl;

    return 0;
}
