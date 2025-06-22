#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<int> preprocess(int n, vector<int>& arr) {
    int count = 0;
    int sum = 0;
    int chunk = sqrt(n);
    vector<int> pre((n + chunk - 1) / chunk, 0);
    for (int i = 0; i < n; i++) {
        pre[i / chunk] += arr[i];
    }
    return pre;
}

int fetch(int l, int r, vector<int>& pre, vector<int>& arr) {
    int chunk = sqrt(arr.size());
    int sum = 0;

    // left part
    while (l % chunk != 0 && l <= r) {
        sum += arr[l];
        l++;
    }
    // middle part
    while (l + chunk - 1 <= r) {
        sum += pre[l / chunk];
        l += chunk;
    }
    // right part
    while (l <= r) {
        sum += arr[l];
        l++;
    }
    return sum;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();
    vector<int> pre = preprocess(n, arr);

    cout << "Preprocessed chunk sums: ";
    for (int i = 0; i < pre.size(); i++) {
        cout << pre[i] << " ";
    }
    cout << endl;

    
    cout << "Sum from 2 to 6: " << fetch(2, 6, pre, arr) << endl; // 3+4+5+6+7=25
    cout << "Sum from 0 to 8: " << fetch(0, 8, pre, arr) << endl; // 1+2+...+9=45
    cout << "Sum from 4 to 4: " << fetch(4, 4, pre, arr) << endl; // 5

    return 0;
}