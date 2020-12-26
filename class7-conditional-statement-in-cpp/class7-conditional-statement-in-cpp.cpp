#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    int time;
    cout << "Enter a time of day: ";
    cin >> time;

    if (6 <= time && time < 12) {
            cout << "Good Morning!" << endl;
    }

    else if (12 <= time && time < 18) {
            cout << "Good Afternoon!" << endl;
    }

    else{
        cout << "Good Night!" << endl;
    }


    return 0;
}
