#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; ++i){
        scanf("%d", &arr[i]);
    }
    for (int i=n-1; i>=0; --i){
        printf("%d ", arr[i]);
    }
    return 0;
}
        
  
/* Utility function to print an array */
 
