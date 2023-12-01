#include <iostream>
using namespace std;
int main()
{
  int num1, num2, num3, largest, smallest;
  cout<<"enter three entegers";
  cin>>num1>>num2>>num3;
  largest=num1;
  smallest=num1;
  if ( num1 > largest )
    largest = num1;
  if ( num2 > largest )
    largest = num2;
  if ( num3 > largest )
    largest = num3;
  if ( num1 < smallest )
    smallest = num1;
  if ( num2 < smallest )
    smallest = num2;
  if ( num3 < smallest )
    smallest = num3;
cout << "Largest is " << largest<<endl;
cout << "smallest is " << smallest<<endl;

}
