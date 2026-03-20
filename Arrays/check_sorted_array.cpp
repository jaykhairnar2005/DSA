#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    bool isSorted = true;

    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout << "array is sorted" << endl;
    } else {
        cout << "array is not sorted" << endl;
    }

    return 0;
}