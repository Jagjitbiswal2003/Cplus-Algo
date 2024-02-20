#include <iostream>
#include <algorithm>
using namespace std;
bool find_triplet(int arr[], int n, int key)
{
  int i = 0;
  if (n == 0 || n == 1 || n == 2)
    return false;

  std::sort(arr, arr + n);
  for (i = 0; i < n; i++)
  {
    int low = i + 1;
    int high = n - 1;
    while (low < high)
    {
      if (arr[i] + arr[low] + arr[high] == key)
      {
        return true;
        break;
      }
      else if (arr[i] + arr[low] + arr[high] < key)
        low++;
      else
        high--;
    }
  }
  return false;
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
  cout << "enter targeting sum :" << endl;
  cin >> key;
  if (find_triplet(a, n, key) == true)
    cout << "find the sum of triplet that give me the target" << endl;
  else
    cout << "the triplet is not ofund" << endl;

  return 0;
}