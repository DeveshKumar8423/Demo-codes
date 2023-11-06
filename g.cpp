//swapping the two numbers
#include<iostream>
using namespace std;

int main() {
    int number1 ;
    int number2 ;
    cin>>number1>>number2;
    int temp = number1;
    number1 = number2;
    number2 = temp;
    cout<<number1<<" "<<number2<<endl;
    return 0;
}