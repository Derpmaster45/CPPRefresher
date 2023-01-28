#include <iostream>
#include "functions.h"
using namespace std;
int main()
{
bool choice=true;
    do 
{ //  prompt user
    cout<<"Pick a number: \n";
    int num1,num2;
    cin>> num1;
    cout<<"Pick another number: \n";
    cin>> num2;
    // function calls
    int sum=add(num1,num2);
    int difference=subtract(num1,num2);
    int product=multiply(num1,num2);
    int quotient=division(num1,num2);
    cout<<"Sum  : " <<sum <<"\n" <<"Difference : "           <<difference        <<"\n";
    cout <<"Product : "<<product <<"\n" <<"Quotient :" <<quotient <<"\n";
    choice=false;
}
    while(choice==true);
    return 0;
}


