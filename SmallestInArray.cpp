#include<bits/stdc++.h>
using namespace std;

int smallestInAnArray(int arr[] , int size){
    int smallest = INT_MAX;

    for(int elementIndex = 0 ; elementIndex < size ; elementIndex++)
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
    
    cout<<"The smallest element in array = "<<smallestInAnArray(arr,size);

return 0;
}