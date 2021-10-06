#include <bits/stdc++.h>
using namespace std;

// C++ program to check if a string is
// substring of other.
 
// Returns true if s1 is substring of s2
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

int main()
{
    string s,subs;
    cin>>s>>subs;
    int res = isSubstring(subs, s);
    if (res == -1)
        cout << "No";
    else
        cout << "present at index " << res;
    return 0;
}