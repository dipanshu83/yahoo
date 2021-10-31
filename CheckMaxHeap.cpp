#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    //checking for max heap

    //flag = 0 means that it is max heap else it is not
    int flag = 0;
    for(int i=0; i<n; i++) {
        int parentIndex = i;
        int leftChildIndex = 2*parentIndex + 1;
        int rightChildIndex = 2*parentIndex + 2;

        //checking for left child
        if(leftChildIndex < n) {
            if(arr[leftChildIndex] > arr[parentIndex]) {
                flag = 1;
                break;
            }
        }

        //checking for right child
        if(rightChildIndex < n) {
            if(arr[rightChildIndex] > arr[parentIndex]) {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}