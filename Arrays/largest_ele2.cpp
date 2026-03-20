#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 0){
        cout << "Array is empty";
        return 0;
    }

    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int maxi = v[0];

    for(int i = 1; i < n; i++){
        if(v[i] > maxi){
            maxi = v[i];
        }
    }

    cout << "Largest element is: " << maxi << endl;

    return 0;
}