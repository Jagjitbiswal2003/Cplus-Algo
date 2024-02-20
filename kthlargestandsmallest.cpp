#include <iostream>
#include <algorithm>
using namespace std;
int kthsmallest(int arr[], int n, int k)
{
    std::sort(arr, arr + n);
    return arr[k - 1];
}
int kthlargest(int arr[], int n, int k)
{
    std::sort(arr, arr + n);
    return arr[n - k];
}

int main()
{
    int n;
    int k;
    int i;
    cout << "enter length of array:" << endl;
    cin >> n;
    int a[n];
    cout << "enter array elements:"
         << " ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "enter kth smallest or largest element" << endl;
    cin >> k;
   cout<<k<<" smallest element: "<< kthsmallest(a, n, k)<<endl;
    cout<<k<<" largest element: "<< kthlargest(a, n, k) <<endl;
    return 0;
}