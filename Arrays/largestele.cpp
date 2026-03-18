#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[100];
     cout << "enter the elements of array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }

    int max = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i] > max){
            max = arr[i];

        }

    }
    cout << "largest element is " << endl <<  max << endl;


    return 0;
}