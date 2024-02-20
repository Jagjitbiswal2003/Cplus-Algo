#include <iostream>
using namespace std;
 void dnfsort(int a[],int n)    //dnf-dutch national flag poblem
 {
      int lo=0;
      int mid=0;
      int hi=n-1;   int temp=0;
         if(n==0 || n==1)
          cout<<"element is not enough to sort"<<endl;
     
      while (mid<=hi)
      {
           if(a[mid]==0)
           {
                temp=a[lo];
                a[lo]=a[mid];
                a[mid]=temp;
                 lo++; mid++;
           }
             else if(a[mid]==1)
               mid++;
           
            else if(a[mid]==2)
            {
                  temp=a[mid];
                  a[mid]=a[hi];
                  a[hi]=temp;
                  mid++; 
                  hi--;

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
    //sort 0,1,2
     int i; int n;
  cout << "enter length of array:" << endl;
  cin >> n;
  int a[n];
  cout << "enter array elements:"<< " ";
  for (i = 0; i < n; i++)
    cin >> a[i];
   
     dnfsort(a,n);
     print(a,n);
    
    return 0;
}