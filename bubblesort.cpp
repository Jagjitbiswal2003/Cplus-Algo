#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{
     int temp = 0;
     for (int i = 0; i < n - 1; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (arr[j] > arr[j + 1])
               {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
               }
          }
     }
}
void print(int arr[], int n)
{

     for (int i = 0; i < n; i++)
          cout << arr[i] << " ";
}
int main()
{

     int arr[] = {-1, -8, 5, -2, 0};
     bubble(arr, 5);
     print(arr, 5);

     return 0;
}
