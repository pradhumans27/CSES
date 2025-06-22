#include<iostream>
#include<vector>
#include<climits>
using namespace std;



// int removing_digits(int n, vector<int>&dp)
// {
//     int min_steps = INT_MAX;
//     int digit;
//  if(n == 0) return 0;
//  if(dp[n] != -1) return dp[n]; 
//  int temp = n;
//  while (temp > 0)
//  {
//     digit = temp % 10;
//     temp = temp / 10;
//     if(digit > 0)
//     {
//         min_steps = min(min_steps, 1+removing_digits(n - digit, dp));
//     }
//  }
//  return dp[n] = min_steps;
// }

int removing_digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int temp = n;
        int max_digit = 0;
        while (temp > 0)
        {
            max_digit = max(max_digit, temp % 10);
            temp /= 10;
        }
        n -= max_digit;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    // vector<int>dp(n+1,-1);
    // cout<<removing_digits(n,dp);
    cout<<removing_digits(n);
    return 0;
}