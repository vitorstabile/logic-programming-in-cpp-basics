#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    double salary1, salary2;
    string name1, name2;
    int age;
    char genre;

    cout << "Name of the first person: ";
    getline(cin, name1);
    cout << "Salary of the first person: ";
    cin >> salary1;

    cout << "Name of the second person: ";
    cin.ignore(INT_MAX, '\n'); // ------------- buffer cleaning
    getline(cin, name2);
    cout << "Salary of the second person: ";
    cin >> salary2;

    cout << "Age: ";
    cin >> age;
    cout << "Genre (F/M): ";
    cin >> genre;

    cout << fixed << setprecision(2);
    cout << "Name 1: " << name1 << endl;
    cout << "Salary 1: " << salary1 << endl;
    cout << "Name 2: " << name2 << endl;
    cout << "Salary 2: " << salary2 << endl;
    cout << "Age: " << age << endl;
    cout << "Genre: " << genre << endl;

    return 0;
}
