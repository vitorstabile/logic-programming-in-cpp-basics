#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int N, i;

   cout << "How many numbers will be enter? ";
   cin >> N;

   double vet[N];


   for (i = 0; i < N; i++) {
       cout << "Enter a number: ";
       cin >> vet[i];
   }

   cout << endl << "Typed Numbers:" << endl;
   cout << fixed << setprecision(1);
   for (i = 0; i < N; i++) {
        cout << vet[i] << endl;
   }

    return 0;
}
