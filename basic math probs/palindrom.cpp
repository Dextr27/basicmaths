/*a number is palindrome if it reads the same forward and backward*/
#include<iostream>
using namespace std;

int reverse_num(int n){
    int y=0;
    while(n>0){
        int digit= n%10;
        y= y*10 + digit;
        n = n/10;
    }
    return y;
}

int main(){
   int X = 121;
   int dummy = X;
   int Y = reverse_num(X);
   if (dummy == Y) {
      cout << "Palindrome Number" << endl;
   } else {
      cout << "Not Palindrome Number" << endl;
   }
   return 0;
}