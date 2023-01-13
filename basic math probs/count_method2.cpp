/*convert into string and count*/

#include<iostream>
using namespace std;

int convert_string(int n) { 
    string str1 = to_string(n);           /*conversion to string*/
    return str1.length();

}

int main() {
    int n = 12345;
    cout<<"Number of digits is"<<convert_string(n);
    return 0;  
}