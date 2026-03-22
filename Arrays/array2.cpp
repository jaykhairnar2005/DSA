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
    int j = 0;
    for (int i=0;i<n;i++){
        if (v[i] != 0){
            v[j] = v[i];
            j++;
        }
    }
        for(int i=j;i<n;i++){
            v[i] = 0;
        }
        
       cout << "after moving zeroes to end of array: " << endl;
    for (int i=0;i<n;i++){
        cout << v[i] << " ";
    }
 

         return 0;
}