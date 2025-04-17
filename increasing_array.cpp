#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    return 0;
}