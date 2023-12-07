// typical C++ CP code template.

#include <bits/stdc++.h>
ios::sync_with_stdio(0);
cin.tie(0);

// in order to solve the problem with reading files in the context if faced with some, it is a better idea to add the following code at the beginning of the programmm.

freopen('input.txt', 'r', stdin);
freopen('output.txt', 'w', stdout);


using namespace std;

int main(){
    cout << "Hello World" << "\n";

    int a = 123, b = 456;
    string x = "money";

    cout << a << " " << b << " " << x << "\n";

    // the faster way to read input and ouptuting is to use the scanf and printf;
    int a , b;

    scanf("%d %d", &a, &b);
    printf("%d %d\n", a , b);

    // to read all the input in one line which is really good, you can use the getline() function.
    string s;
    getline(cin ,s);

    // sometime there might be a lot of input, so it might be good idea to use the while loop to make sure the program read all the inputs.
    while (cin >> x){
        // code
    }


   // WORKING WITH NUMBERS
   // Integers
   // int 32-bits int.
   // long long is a 64-bits int.
   
    long long x = 123456789123456789LL;

    // floating points

    printf('%.9f\n', x); // this code telling the compile up to how many spaces should the reslut be in this case is 9.
    // using the above method can be tricky because some numbes can not be predermined how many decimals they will have. Due to rounding error it is adviced to compare two fp numbers with the formular e=10^9. the two numbers are equal if the difference between them is less than e.
    
    if (abs(a-b) < 1e-9){
        // a and b are equal
    }


    // SHORTENING CODE
    // using typedef function it is possible to give a shorter name to a datatype.
    typedef long long ll;

    long long a = 1242345;
    long long v = 78979799;

    // above code can shorted as
    ll a = 1242345;
    ll v = 78979799;

    typedef vector<int> vi;
    typedef pair<int,int> pi;

    // MACROS
    // Macros means that certain strings in the code will be changed before the compilation
    
    #define F first;
    #define s second;
    #define PB pushback

    // macros can have parameters making it possible to shorten loops.
    #define REP(i,a,b) for(int i = a, i<=b; i++)

    for(int i = 1; i<=n; i++){
        search(i);
    }
    // the above code can shortened as
    REP(i,1,n){
        search(i);
    }

}





