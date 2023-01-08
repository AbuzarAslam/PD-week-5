#include<iostream>
using namespace std;
int number1 =10;
int number2 =20;
int add()
{
    int number1=40;
    return number1+number2;

}

main()
{
   int x = number1;
   number1 = 100;
   x = 20;
   number2 = add();
   cout<<number1<<" "<<number2;



}
