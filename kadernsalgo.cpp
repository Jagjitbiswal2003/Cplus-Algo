#include<iostream>
using namespace std;
  int find_max(int arr[],int n)
  {
          if(n==1)
            return arr[0];
      
       int sum=0; int max=arr[0];
        for(int i=0;i<n;i++)
        {
              sum=sum+arr[i];
                if(sum>max)
                 max=sum;

                  if(sum<0)
                   sum=0;
          }
             return max;
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
       cout<<"the max sum of subarray is:"<<find_max(a,n)<<endl;
return 0;
}

