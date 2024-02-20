#include <iostream>
#include <string.h>
#define d 256
using namespace std;
int search(char txt[], char pat[], int q)
{
    int m = strlen(txt);
    int n = strlen(pat);
    int i, j;
    int t = 0; // hash value for text
    int p = 0; // hash value for pattern
    int h = 1;
          if(m==0 || n==0)
             exit(0);
        if(m<n)
          exit(0);
  
    for (i = 0; i < n; i++)
        h = (d * h) % q;
    for (i = 0; i < n; i++)
    {
        t = (d * t + txt[i]) % q;
        p = (d * p + pat[i]) % q;
    }
    for (i = 0; i < m - n; i++)
    {
        if (t == p)
        {
            for (j = 0; j < n; j++)
            {
                if (txt[i + j] != pat[j])
                    break;
            }
        }
        if (j == m)
            cout << "match found at" << i << "to" << i + 1 << " ";

        if (i < m - n)
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;
        if (t < 0)
            t = (t + q);
    }
           return (i-1);
}

int main()
{
    int n;
    cout << "enter the length of text:" << endl;
    cin >> n;
    char txt[n];
    int m;
    cout << "enter the length of pattern:" << endl;
    cin >> m;
    char pat[m];
    cout << "enter text array:" << " ";
    for (int i = 0; i < n; i++)
        cin >> txt[i];
    cout<<"enter pattern array:"<<" ";
    for (int i = 0; i < m; i++)
        cin >> pat[i];
   cout<<"pattern found at:"<<search(txt, pat, 11)<<endl;
    return 0;
}