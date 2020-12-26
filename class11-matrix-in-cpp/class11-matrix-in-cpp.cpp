#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int M, N, i, j;

   cout << "How many rows the matrix will be? ";
   cin >> M;
   cout << "How many columns the matrix will be? ";
   cin >> N;

   int mat[M][N];


   for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
   }

   cout << endl << "Typed Matrix:" << endl;
   for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
   }

    return 0;
}
