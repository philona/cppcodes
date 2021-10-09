/*
Question-
Given weights and values of n items, put these items in a knapsack of 
capacity W to get the maximum total value in the knapsack. 
In other words, given two integer arrays val[0..n-1] and wt[0..n-1] 
which represent values and weights associated with n items respectively.
Also given an integer W which represents knapsack capacity, 
find out the maximum value subset of val[] such that sum of the 
weights of this subset is smaller than or equal to W. 
You cannot break an item, either pick the complete item or 
don’t pick it (0-1 property).
*/

#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int> &wt, vector<int> &val, int n)
{
    vector<vector<int>> K(n + 1, vector<int>(W + 1));
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                K[i][w] = 0;
            }
            else if (wt[i - 1] <= w)
            {
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            }
            else
            {
                K[i][w] = K[i - 1][w];
            }
        }
    }
    return K[n][W];
}

int main()
{
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    cout << knapsack(W, wt, val, n);
    return 0;
}

// memoisation or top-down approach

// Here is the top-down approach of
// dynamic programming
#include <bits/stdc++.h>
using namespace std;

int knapSackRec(int W, int wt[],
                int val[], int i,
                int **dp)
{
    // base condition
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
        return dp[i][W];

    if (wt[i] > W)
    {

        dp[i][W] = knapSackRec(W, wt,
                               val, i - 1,
                               dp);
        return dp[i][W];
    }
    else
    {

        dp[i][W] = max(val[i] + knapSackRec(W - wt[i],
                                            wt, val,
                                            i - 1, dp),
                       knapSackRec(W, wt, val,
                                   i - 1, dp));

        return dp[i][W];
    }
}

int knapSack(int W, int wt[], int val[], int n)
{
    //craeting a 2D array
    int **dp;
    dp = new int *[n];

    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];

    //initialsising arrar with -1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;
    return knapSackRec(W, wt, val, n - 1, dp);
}

// Driver Code
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
