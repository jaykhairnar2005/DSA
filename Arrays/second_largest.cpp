#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 2){
        cout << "Not enough elements";
        return 0;
    }

    vector<int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int maxi = v[0];

    // find max
    for(int i = 0; i < n; i++){
        if(v[i] > maxi){
            maxi = v[i];
        }
    }

    int second_max = -1;

    for(int i = 0; i < n; i++){
        if(v[i] != maxi && v[i] > second_max){
            second_max = v[i];
        }
    }

    if(second_max == -1){
        cout << "No second largest element";
    } else {
        cout << "Second largest element is: " << second_max;
    }

    return 0;
}