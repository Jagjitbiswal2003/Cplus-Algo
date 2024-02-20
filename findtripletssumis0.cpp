#include <iostream>
#include<algorithm>
using namespace std;
bool find_tripletsofzero(int arr[], int n)
{
    if (n == 0 || n == 1)
        return false;
       std:: sort(arr,arr+n);
        
        
    for (int i = 0; i < n; i++)
    {
           int low=i+1;
           int high=n-1;
        while (low < high)
        {
            if (arr[i] + arr[low] + arr[high] == 0)
                return true;
            else if (arr[i] + arr[low] + arr[high] < 0)
                low++;
            else
                high--;
        }
    }
    return false;
}

int main()
{
    int n = 5;
    int a[n] = {0, -1, 2, -3, 1};
    if (find_tripletsofzero(a, 5) == true)
        cout << "the triplets are present" << endl;
    else
        cout << "the triplets are not present" << endl;
    return 0;
}