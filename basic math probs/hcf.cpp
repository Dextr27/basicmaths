#include<bits/stdc++.h>
using namespace std;

/* The intuition here is to traverse from 1 to min(a,b) and check for every number.*/
int hcf(int num1, int num2) {
    int ans;
    for (int i=1; i<=min(num1,num2); i++){
        if(num1%i==0 && num2%i==0) {
            ans=i;

            
        }
        
    }
    return ans;    /*cout WON'T WORK. You need to return for a */
}

int main(){
    int a, b;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    cout<<hcf(a,b);


}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int num1 = 4, num2 = 8;
// 	int ans;
// 	for (int i = 1; i <= min(num1, num2); i++) {
// 		if (num1 % i == 0 && num2 % i == 0) {
// 			ans = i;
// 		}
// 	}
// 	cout << "The GCD of the two numbers is "<<ans;
// }