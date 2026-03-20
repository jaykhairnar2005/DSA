#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0;i<n/2;i++){
        int temp = v[i];
        v[i] = v[n-i-1];
        v[n-i-1] = temp;
    }
    for (int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}