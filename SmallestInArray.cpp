#include<bits/stdc++.h>
using namespace std;

int smallestInArray(int arr[] , int sizeOfArray){
    int smallest = INT_MAX;

    for(int elementIndex = 0 ; elementIndex < sizeOfArray ; elementIndex++)
        if(arr[elementIndex] < smallest)
            smallest = arr[elementIndex];

    
    return smallest;
}

int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;

    int arr[size];

    for(int elementIndex = 0 ; elementIndex < size ; elementIndex++)
        cin>>arr[elementIndex];
    
    cout<<"Smallest in array = "<<smallestInArray(arr ,size);

    
return 0;
}