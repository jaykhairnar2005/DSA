#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size of array " << endl;
    cin >> n;
    int arr[100];
    cout << "enter elemennts";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "reverse of array is " << endl;
    for (int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;

    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}