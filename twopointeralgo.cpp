#include <iostream>
#include <algorithm>
using namespace std;
bool find_twosum(int arr[], int n, int i, int j, int target)
{
    std::sort(arr, arr + n);
    // this is a library function to sort the array for reducing time complexity
    // other wise you can use merge or quick sort for sorting
        if(n==1)
          return false;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            return true;
            break;
        }
        else if (arr[i] + arr[j] < target)
            i++;
        else
            j--;
    }
    return false;
}
int main()
{
    int n;
    int key;
    int i;
    cout << "enter length of array:" << endl;
    cin >> n;
    int a[n];
    cout << "enter array elements:"
         << " ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "enter targeting sum :" << endl;
    cin >> key;

    if (find_twosum(a, n, 0, n - 1, key) == true)
        cout << "the sum " << key << " is present inside the array" << endl;
    else
        cout << "the sum " << key << " is not present inside the array" << endl;

    return 0;
}