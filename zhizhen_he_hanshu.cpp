#include <iostream>
using namespace std;
//值传递（复印件）
void swap(int num1,int num2){
    int temp=num1;
    num1=num2; 
    num2=temp;
}
//地址传递(原件)
void swap1(int *p1,int *p2){
int temp=*p1;
*p1=*p2;
*p2=temp;
}

int main (){
    int a=10;
    int b=20;
    //值传递
    swap(a,b);
    cout <<a<<" "<<b<<endl;
    //地址传递
    swap1(&a,&b);
    cout <<a<<" "<<b<<endl;
    system("pause");
}