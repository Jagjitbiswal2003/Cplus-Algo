#include <iostream>
using namespace std;

int partion(int a[], int l, int h)
{
    int pivot = a[l];
    int temp = 0;
    int count = 0;
    for (int i = l + 1; i <= h; i++)
    {
        if (a[i] <= pivot)   
            count++;
    }
    int pivotindex = l+count;
    temp = a[pivotindex];
    a[pivotindex] = a[l];
    a[l] =temp;
    int i = l;
    int j = h;
    while (i < pivotindex && j > pivotindex)
    {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;

        if (i < pivotindex && j > pivotindex)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    return pivotindex;
}

void quicksort(int a[], int l, int h)
{
    if (l >= h)   //focous you will create a error
        return;

    int p = partion(a, l, h);
    quicksort(a, l, p - 1);
    quicksort(a, p + 1, h);
}
void print(int a[], int n)
{

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cout << "enter length of array:" << endl;
    cin >> n;
    int a[n];
    cout << "enter array elements:"
         << " ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quicksort(a, 0, n - 1);
    print(a, n);
    return 0;
}