#include<iostream>
#include <climits>
#include<vector>
using namespace std;
int min_coins(vector<int>&coins, int n, int sum)
{
    if (sum == 0)
    {
        return 0;
    }
    if (sum < 0)
    {
        return INT_MAX;
    }

    int result = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sub_result = min_coins(coins, n, sum - coins[i]);
        if (sub_result != INT_MAX)
        {
            result = min(result, sub_result + 1);
        }
int n, sum;
cin >> n >> sum;
vector<int> coins(n);
for (int i = 0; i < n; i++)
{
    cin >> coins[i];
}
cout << min_coins(coins, n, sum);
    int coin;
    cin >> coin;
    coins.push_back(coin);
}
cin>>n;
cout<<min_coins(coins,n,sum);

}