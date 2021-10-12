#include<bits/stdc++.h>
using namespace std;

bool isTheNumberAPalindrome(int number){
    string numberToString = to_string(number);

    int low = 0 , high = numberToString.size() - 1;

    while(low <= high){
        if(numberToString[low] != numberToString[high])
            return false;
        
        else{
            low++;
            high--;
        }
    }

    return true;
}

int main(){
    cout<<isTheNumberAPalindrome(121)<<endl;
    //Will Print 1 as it is a palindrome
    
    cout<<isTheNumberAPalindrome(122)<<endl;
    //Will Print 0 as it is not a palindrome
    
    cout<<isTheNumberAPalindrome(1212)<<endl;
    //Will Print 0 as it is not a palindrome
    
    cout<<isTheNumberAPalindrome(1221)<<endl;
    //Will Print 1 as it is a palindrome
    
    cout<<isTheNumberAPalindrome(1213)<<endl;
    //Will Print 0 as it is not a palindrome
return 0;
}