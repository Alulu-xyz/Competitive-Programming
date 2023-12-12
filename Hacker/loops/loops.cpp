#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num1, num2; 
    cin >> num1 >> num2;  
    string numbers[9] = {"one","two","three","four","five","six","seven","eight", "nine"};
    
    for(int i=num1; i<= num2; i++){
        if(i>=1 && i<=9)
        {
            cout << numbers[i-1] << endl;    
        }
        else
        {
            if(i%2==0){
                cout << "even" <<endl;
            }    
            else{
                cout << "odd" <<endl;
            }
        }
    }
    return 0;
}
