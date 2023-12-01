#include <iostream>
using namespace std;
int main()
{
    double num1,num2,result;
char opr;
    cout<<"enter number one";
    cin>>num1;

     cout<<"enter number two";
    cin>>num2;

    cout<<"enter the operator [+] [-] [*] [/]";
    cin>>opr;
    if (opr=='+'){
        result=num1+num2;
        cout<<"the result is "<<result;
    }
      else if(opr=='-'){
        result=num1-num2;
        cout<<"the result is "<<result;
    }

    else if(opr=='*')
        {
        result=num1*num2;
        cout<<"the result is "<<result;
    }
      else if(opr=='/'){
        result=num1/num2;
        cout<<"the result is "<<result;
    }
}
