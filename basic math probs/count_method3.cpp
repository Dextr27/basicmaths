//if N is a number, to count the number of digits log10(N) ka floor + 1.

#include<bits/stdc++.h>  //this packs all input,output, math operations.
using namespace std;

int count_digits(int n) {
    int digits = floor(log10(n) + 1);
    return digits;
}

int main() {
    int n = 12345;
    cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
    return 0;
}
