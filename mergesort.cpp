#include<iostream>
using namespace std;
 void merge(int a[],int l,int h)
  {
           int mid=(l+h)/2;
            int n1=mid-l+1;
            int n2=h-mid;
            int*arr1=new int[n1];
            int*arr2=new int[n2];
            
             int minindex=l;
            for(int i=0;i<n1;i++){
               arr1[i]=a[minindex++];
            }
            int k=mid+1;
             for(int i=0;i<n2;i++){
               arr2[i]=a[minindex++];
             }
            int index1=0;
            int index2=0;
             minindex=l;
              while(index1<n1 && index2<n2)
              {
                   if(arr1[index1]<arr2[index2])
                     a[minindex++]=arr1[index1++];
                     else
                     a[minindex++]=arr2[index2++];

                       while(index1<n1)
                         a[minindex++]=arr1[index1++];
                        while(index2<n2)
                        a[minindex++]=arr2[index2++];
              }


  }
void mergesort(int a[],int l,int h)
{
      if(l!=h)
      {
          int mid=(l+h)/2;
          mergesort(a,l,mid);
          mergesort(a,mid+1,h);
          merge(a,l,h);
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
     mergesort(a,0,n-1);
     print(a,n);


return 0;
}

