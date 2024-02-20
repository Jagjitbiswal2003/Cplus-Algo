#include<iostream>
using namespace std;
  void selection(double arr[],int n)
  {
       int minindex;
    for(int i=0;i<n-1;i++)
    {
          minindex=i;
        for(int j=i+1;j<n;j++)
        {
               if(arr[j]<arr[minindex])
                  minindex=j;
        }
            int temp;
             temp=arr[i];
             arr[i]=arr[minindex];
             arr[minindex]=temp;
    }
  }
   void print(double arr[], int n)
{

     for (int i = 0; i < n; i++)
          cout << arr[i] << " ";
}



int main()
{
   double arr[] = {1000.99999 ,3000.89,1000000.11111, 200000000.9099,4.121212121};
     selection(arr, 5);
     print(arr, 5);

return 0;
}