// find largest element from all possible subarray from array
// time complexity-O(n)  space complexity-O(k) k-is the length of window
#include <iostream>
#include <deque>
using namespace std;
void slidewindowmax(int arr[], int n, int k)
{
    std::deque<int> Qi(k);
    int i;
    if (n == 0)
        cout << "find largest element from all possible subarray from array is not possible";
    for (i = 0; i < k; ++i)
    {
        while (!Qi.empty() && arr[i] >= arr[Qi.back()])
            Qi.pop_back();

        Qi.push_back(i);
    }
    for (; i < n; ++i)
    {
        cout << arr[Qi.front()] << endl;
        while (!Qi.empty() && Qi.front() <= i - k)
            Qi.pop_front();
        while (!Qi.empty() && arr[i] >= arr[Qi.back()])
            Qi.pop_back();

        Qi.push_back(i);
    }
    cout << arr[Qi.front()];
}

int main()
{
    int n;
    int k;
    int i;
    cout << "enter length of array:" << endl;
    cin >> n;
    int a[n];
    cout << "enter array elements:"
         << " ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "enter the window length" << endl;
    cin >> k;
    slidewindowmax(a, n, k);
    return 0;
}