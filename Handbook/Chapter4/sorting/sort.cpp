#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
// bubble sort alg

    int arr [8] = {1, 3, 8, 2, 9, 2, 5, 6};

    for (int i =0; i<8; i++){
        for (int j=0; j<8-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        } cout << arr[i] << "\n";
    } 

} 


