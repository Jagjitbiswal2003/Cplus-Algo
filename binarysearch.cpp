#include <iostream>
using namespace std;
int binarysearch(int arr[],int l, int h, int key)
{
      //recursive method
       int mid=(l+h)/2;
        if(l>h)
        return -1;

        if(arr[mid]==key)
          return mid;
        else if(arr[mid]<=key)
         binarysearch(arr,mid+1,h,key);
         else
         binarysearch(arr,l,mid-1,key);
  //non recursive method                       
   // while (l <= h)                       
   // {
    //    int mid = (l + h) / 2;
     //   if (arr[mid] == key)
       //     return mid;

        //else if (arr[mid] <= key)
          //  l = mid + 1;
        //else
          //  h = mid - 1;
     // }
    //return -1;
}

int main()
{
    int n;
    int key;
    cout << "enter length of array:" << endl;
    cin >> n;
    int a[n];
    cout << "enter array elements in accending order:"
         << " ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "enter the searching element" << endl;
    cin >> key;
    cout << "the element is found at" << binarysearch(a,0, n - 1, key) << " ";
    return 0;
}