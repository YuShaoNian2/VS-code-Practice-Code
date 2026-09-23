#include <iostream>
using namespace std;
void swag(int num1,int num2)
{
    cout<<num1<<endl;
    cout<<num2 <<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<num1<<endl;
    cout<<num2<<endl;
return;
}
int main (){
int a=10;
int b=20;
swag(a,b);
cout <<"but"<<endl;
cout <<"The true a is"<<a<<endl;
cout <<"The true b is"<<b<<endl;
system ("pause");
return 0;
}