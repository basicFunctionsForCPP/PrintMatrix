#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
 
using namespace std;

 
void printArray(int **arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << setw(2) << arr[i][j];
        }
    }
}
 
int main()
{
    setlocale(LC_ALL, "");
    int n;
    int arr[n][n];

    // Какой-то код заполняющий матрицу

    cout << "\t\tКвадратная матрица" << endl;
    printArray(arr,n);
 
 
    return 0;
}