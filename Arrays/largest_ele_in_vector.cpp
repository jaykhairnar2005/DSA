#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cout << "enter size of array";
    cin >> n;
    for (int i =0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);

    }
    int maxi = v[0];

    for (int i=0;i<n;i++){
        if(v[i] > maxi){
            maxi = v[i];
        }
    }
    cout << "largest element in vector is: " << maxi << endl;


    
    return 0;
}