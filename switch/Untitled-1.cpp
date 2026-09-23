#include <iostream>
using namespace std;
int main(){
char cmd;
cout <<"请输入一个字符代表机器人的指令:\n"<<endl;
cout <<"\'F\'代表前进\t"<<"\'B\'代表后退"<<endl;
cout <<"\'L\'代表左转\t"<<"\'R\'代表右转"<<endl;
cout <<"其他字符代表\"未知指令\""<<endl;
cin>> cmd;
    switch(cmd){
     case 'F':
     cout <<"前进"<<endl;
     break;
    case 'B':
     cout <<"后退"<<endl;
     break;
     case 'L':
    cout <<"左转"<<endl;
    break;
    case 'R':
    cout <<"右转"<<endl;
    break;
    default:
    cout <<"未知指令"<<endl;
    break;
}
system("pause");
return 0;

}