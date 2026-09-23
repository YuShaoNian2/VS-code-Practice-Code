#include <iostream>
using namespace std;
void swap(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
    cout <<num1<<" "<<num2<<endl;
}
int main(){
int a=10;
int b=200;
swap (a,b);//引用定义的swap函数，进行值交换
int*p=&a;
//int *p;
//p=&a;

cout <<&a<<endl;
cout <<p<<endl;
system("pause");

}