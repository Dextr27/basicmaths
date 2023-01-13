/*153 = 1^3 + 5^3 + 3^3 */

#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int y=0;
    while (n>0) {
        int digit = n%10;
        y= y+ pow(digit,3) ;
        n=n/10;
    }

   return y;
}

int main() {
    int num;
    cout<<"Enter number";
    cin>>num;
    cout<<armstrong(num);
}
