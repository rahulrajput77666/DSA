#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
  int n = arr.size();
  for (int i = 1; i < n; ++i)
  {
    int key = arr[i]; // Element to be inserted into the sorted portion
    int j = i - 1;

    // Shift elements of the sorted portion to the right to make space for the key
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }

    // Insert the key at the correct position
    arr[j + 1] = key;
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

  insertionSort(arr);

  cout << "Sorted Array: ";
  printArray(arr);

  return 0;
}
