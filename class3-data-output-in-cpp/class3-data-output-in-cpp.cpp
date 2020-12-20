#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Good Morning";
    cout << "Good Night";

    cout<<"\n";

    cout << "Good Morning" << endl;
    cout << "Good Night" << endl;

    int x, y;
    x = 10;
    y = 20;
    cout << x << endl;
    cout << y << endl;

    double z;
    z = 2.3456;
    cout << fixed << setprecision(2) << z << endl;

    int age;
    double salary;
    string name;
    char genre;

    age = 32;
    salary = 4560.9;
    name = "Maria Silva";
    genre = 'F';

    cout << fixed << setprecision(2);
    cout << "The employee " << name << ", genre "
    << genre << ", earn " << salary << " and have "
    << age << " years old" << endl;

    return 0;
}
