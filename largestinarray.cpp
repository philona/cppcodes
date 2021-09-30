#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    
    cout << “Enter size of array : “ << endl;
    
    cin >> size;
    int arr[size];
    
    cout << “Enter elements of array : “ << endl;
    
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    
    int largest = arr[0];   // initialize largest to arr[0]
    for(int i=1; i<size; i++)  
    {
        if(arr[i]>largest)   // compare current element with largest
        {
            largest = arr[i];
        }
    }
    
    
    cout << “Largest Element in the array : “ << endl << largest;  // display result

    return 0;
}
