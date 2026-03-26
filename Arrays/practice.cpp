#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
     int sum = 0;
    for(int i=0;i<n;i++){
        if(v[i] % 2 != 0){
            sum += v[i];
        }
    }
     cout << sum << " ";
    return 0;
}