#include <iostream>
#include <cstdio>

int main() {
    // Complete the code.
    int i;
    long long l;
    char ch;
    float f;
    double d;
     scanf("%d %lld %c %f %lf", &i, &l, &ch, &f, &d);
    
    printf("%d\n", i); // print an int and \n means got to the new line
    printf("%lld\n", l); // long Number
    printf("%c\n", ch); // a character
    printf("%f\n", f); // float number
    printf("%lf\n", d); // double

    return 0;
}

// intiger is a 34 bit intiger is shorted as %d
// a long is a 64 bit intiger is shorted as %ld
// character type is ch
// float is a 32 bit real value shorten as %f
// a double is a 64 bit real value shorten as %lf

// to read those data you have to use the scanf or cin function. (scanf("specifier", values))