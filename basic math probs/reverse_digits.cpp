//123 --> 321

#include<bits/stdc++.h>
using namespace std;

int reverse_digits(int n) {
    int num = 0;
    while (n!=0) {
        int digit = n%10;
        num = num * 10 + digit;
        n= n/10;
        
        
    }

    cout<<"the number will be"<<num;
    
    
    
}

int main() {  
    int n = 123;
    cout<<"the reversed number is"<<reverse_digits(n);   
}

// #include<stdio.h>

// int main()
// {
//     int N = 123;
//     int num = N;
//     int reverse = 0;
//     while(N!=0)
//     {
//         int digit = N%10;
//         reverse = reverse*10+digit;
//         N = N/10;
//     }
//     printf("The reverse of the %d is %d",num,reverse);
// }
