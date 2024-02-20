#include<iostream>
using namespace std;
int main()
{
  int n;  int key;  int temp=0;  int i;
   cout<<"enter length of array:"<<endl;
   cin>>n;
   int a[n];
   cout<<"enter array elements:"<<" ";
     for( i=0;i<n;i++)
       cin>>a[i];
       cout<<"enter searching element:"<<endl;
         cin>>key;
           for( i=0;i<n;i++){
               if(a[i]==key)
               {
                  temp++;  
                  break;
               }
                else
                   temp=0;
           }
               if(temp==1)
                 cout<<"element "<<key<<" is fount at:"<<i<<endl;
               else
                cout<<"element is not found";

return 0;
}