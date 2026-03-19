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
    int max = v[0];

    for (int i=0;i<n;i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    cout << "largest element in vector is: " << max << endl;


    
    return 0;
}