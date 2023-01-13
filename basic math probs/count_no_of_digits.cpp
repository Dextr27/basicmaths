/*Given a number with number of digits N, count N.*/

#include<iostream>
using namespace std;

int count_no(int n){
    int count;
    count=0;
    while(n!=0) {
        n=n/10;
        count+=1;
    }
        cout<<"the count is" << count;
}

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    count_no(n);       

}

// #include<bits/stdc++.h>

// using namespace std;

// int count_digits( int n )
// {
//    int x = n; int count =0;
//    while( x !=0 ) 
//    {
//        x = x / 10;
//        count++;
//    }
//    return count;
// }


// int main()
// {
//    int n = 12345;
//    cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
//    return 0;
// }

