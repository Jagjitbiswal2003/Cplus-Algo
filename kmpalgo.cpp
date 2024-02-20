#include <iostream>
using namespace std;
void findLPS(string pat, int n, int lps[])
{
    int len = 0;
    int i = 1;
    lps[0] = 0;
    while (i < n)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
                lps[i] = lps[len - 1];
            else
                lps[i] = 0;
                  i++;
        }
    }
              if(i>=n)
          cout<<"no matching pattern in text";
          
}
void kmpsearch(string text, string pat)
{
    int m = pat.size();
    int n = text.size();
    int lps[m];
    findLPS(pat, m, lps);
    int i = 0, j = 0;
    while (i < n)
    {
        if (text[i] == pat[j])
        {
            i++;
            j++;
            if (j == m)
            {
                cout << "the matching is found at:" << i-j << endl;
                j = lps[j - 1];
            }
        }
        else if (i < n && text[i] != pat[j])
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }
}


int main()
{
      string text="ababcbabbd";
       string pattern="def";
        //int lps[3];
       kmpsearch(text,pattern);
    return 0;
}