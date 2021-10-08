#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursively(int arr[], int searchElement, int low, int high)
{
    if (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] == searchElement)
            return mid;

        if (arr[mid] < searchElement)
            return binarySearchRecursively(arr, searchElement, mid + 1, high);

        if (arr[mid] > searchElement)
            return binarySearchRecursively(arr, searchElement, low, mid - 1);
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter total number of elements : ";
    cin >> size;

    int arr[size], low = 0, high = size;

    for (int elementIndex = 0; elementIndex < size; elementIndex++)
        cin >> arr[elementIndex];

    cout << "Enter element to be searched: ";
    int searchElement;
    cin >> searchElement;

    if (binarySearchRecursively(arr, searchElement, low, high))
        cout << "Element found at index " << binarySearchRecursively(arr, searchElement, low, high);

    else
        cout << "Element does not exist" << endl;

    return 0;
}

//recursive implementation of
// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}
