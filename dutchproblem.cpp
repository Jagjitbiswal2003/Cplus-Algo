#include<iostream>
using namespace std;
 void sort(int a[],int n)
 {
          int count=0;
        if(n==0 || n==1)
          cout<<"element is not enough to sort"<<endl;
          
           for(int i=0;i<n;i++)
            { 
               if(a[i]==0)
                 count++;
            }
           for(int i=0;i<count;i++)
              a[i]=0;
           for(int i=count;i<n;i++)
              a[i]=1;
             
 }
   void print(int arr[], int n)
{

     for (int i = 0; i < n; i++)
          cout << arr[i] << " ";
}
int main()
{
    int n;
  
  int i;
  cout << "enter length of array:" << endl;
  cin >> n;
  int a[n];
  cout << "enter array elements:"
       << " ";
  for (i = 0; i < n; i++)
    cin >> a[i];
     sort(a,n);
     print(a,n);
return 0;
}