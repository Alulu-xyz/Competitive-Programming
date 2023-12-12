#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int num [] = {a, b, c, d}; // we put all the intigers into an array
    int max = num[0]; // initialise a max number
    for(int i=0; i< 4; i++){  // loop four times
        if (max < num[i]){ // check if the max number is greater than the number at it index
            max =  num[i];  // if its greated make it a new max
        }
    } return max;

    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}