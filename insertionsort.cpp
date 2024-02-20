#include<iostream>
using namespace std;
 void insertion(int a[],int n)
 {
       for(int i=1;i<n;i++)
       {
          int temp=a[i];
           int j=i-1;
          for(;j>=0;j--)
          {
              if(a[j]>temp)
                 a[j+1]=a[j];
                 else
                 break;
                 }
                 
                 a[j+1]=temp;             
       }
 }
   void print(int a[], int n)
{

     for (int i = 0; i < n; i++)
          cout << a[i] << " ";
}



int main()
{
   int n;
   cout<<"enter length of array:"<<endl;
   cin>>n;
   int a[n];
   cout<<"enter array elements:"<<" ";
     for(int i=0;i<n;i++)
       cin>>a[i];
    insertion(a,n);
    print(a,n);

return 0;
}