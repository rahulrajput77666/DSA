#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i)
  {
    // Find the index of the smallest element in the unsorted part
    int minIndex = i;
    for (int j = i + 1; j < n; ++j)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    // Swap the smallest element with the first element in the unsorted part
    swap(arr[i], arr[minIndex]);
  }
}

void printArray(const vector<int> &arr)
{
  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {7, 3, 5, 2, 4};
  cout << "Original Array: ";
  printArray(arr);

  selectionSort(arr);

  cout << "Sorted Array: ";
  printArray(arr);

  return 0;
}
