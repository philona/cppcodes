#include<bits/stdc++.h>
using namespace std;

string reverseAString(string stringToBeReversed){
    int low = 0 , high = stringToBeReversed.size() - 1;
    while(low <= high)
        swap(stringToBeReversed[low++] , stringToBeReversed[high--]);
    

    return stringToBeReversed;

}

int main(){
cout<<reverseAString("Hello_World");
return 0;
}