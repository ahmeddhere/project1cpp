#include <iostream>
using namespace std;
int main()
{
    int num,n1,n2,n3;
    n1=0;
    n2=1;
    cout<<"enter fibonacci sequence "<<endl;
    cin>>num;

    cout<<"fibonacci series is :"<<endl;

    for(int i=0;i<num;i++)
    {
       cout<<n1<<endl;
       n3=n1+n2;
       n1=n2;
       n2=n3;
    }

}
