// the task is to calculate the maximum subarr sum i.e
// what is the largest possible sum of a sequence of consecutive values in the array.

#include <bits/stdc++.h>
using namespace std;

int arr [ ] = {-1, 2, 4, -3, 5, 2, -5, 2};
// {2, 4, -3, 5, 2} prodduce the maxmum sum of 10.

int main(){
// this algo is O(n^3) which is too slow for this solution

    int best = 0; 
    for(int a = 0; a < n; a++){
        for (int b = a; b < n; b++){
            int sum = 0;
            
            for (int k = 0; k <= b; k++){
                sum += arr[k];
            }
            best = max(best, sum);
        }
    }
    cout << best << "\n";

// the above code can be made better by removing some loops.


    int best = 0, sum= 0;
    for (int k = 0, k < n; k++){
        sum = max(arr[k], sum+arr[k]);
        best = max(best, sum);
    }
    cout << best << '\n';
}
