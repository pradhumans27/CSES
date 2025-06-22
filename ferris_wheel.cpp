#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int ferris_wheel(int no_of_children,int max_weight,vector<int>&weight)
{
    int mod = 1000000007;
    int gondolas = 0;
    sort(weight.begin(), weight.end());
    int left = 0;
    int right = no_of_children - 1;;
    while(left<=right)
    {
        if((weight[left%mod]+weight[right%mod])%mod<=max_weight)
        {
            left++;
            right--;
            gondolas++;
        }
        else
        {
            right--;
            gondolas++;
        }
    }
    return gondolas;
}

int main()
{
    int no_of_children;
    cin>>no_of_children;
    int max_weight;
    cin>>max_weight;

vector<int>weight(no_of_children);
for(int i = 0;i<no_of_children;i++)
{
    cin>>weight[i];
}
int ans = ferris_wheel(no_of_children, max_weight, weight);
cout<<ans<<endl;
    return 0;
}