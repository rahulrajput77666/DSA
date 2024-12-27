#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i)
  {
    // Loop through the unsorted part of the array
    bool swapped = false; // To track if any swapping occurred
    for (int j = 0; j < n - i - 1; ++j)
    {
      if (arr[j] > arr[j + 1])
      {
        // Swap adjacent elements if they are in the wrong order
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    // If no swapping occurred, the array is already sorted
    if (!swapped)
      break;
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
  vector<int> arr = {5, 3, 8, 6, 2};
  cout << "Original Array: ";
  printArray(arr);

  bubbleSort(arr);

  cout << "Sorted Array: ";
  printArray(arr);

  return 0;
}
