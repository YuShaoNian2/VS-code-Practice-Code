#include<iostream>
using namespace std;
int main (){
    float a=5.5;
    float  *p=&a;
    //空指针变量不可以访问
    *p =100;//p只是一个指针，存地址内存
    //而*p是解指针，对应的地址的具体量
    //空指针,用于给指针变量初始化，为零
    //内存编号0-255是系统占用内存，不允许访问
//eg：int p=NULL;NULL
cout <<p<<endl;
system("pause");
return 0;
}