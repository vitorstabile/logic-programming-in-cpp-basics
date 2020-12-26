#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
   int N, i, x, sum;

   cout << "How many number will be enter? ";
   cin >> N;

   sum = 0;
   for (i = 1; i <= N; i++) {
       cout << "Enter a number: ";
       cin >> x;
       sum = sum + x;
   }

   cout << "SUM = " << sum << endl;

    return 0;
}
