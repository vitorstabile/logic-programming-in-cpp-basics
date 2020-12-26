#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
   int x, sum;

    sum = 0;
    cout << "Enter the first number: ";
    cin >> x;

    while (x != 0) {
        sum = sum + x;
        cout << "Enter another number: ";
        cin >> x;
    }

    cout << "SUM = " << sum;

    return 0;
}
