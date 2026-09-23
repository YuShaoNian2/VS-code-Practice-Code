#include<iostream>
using namespace std;
int main (){
    int arr [5]={300,500,200,400,250};
    int temp=0; 
    for(int i=0;i<5;i++){
   // temp=(arr[i]>arr[i+1]?arr[i]:arr[i+1]);
    if(arr[i]>temp){
        temp =arr[i];
    }
}
    cout <<"最重的小猪体重是"<<temp<<endl;
    system("pause");
    return 0;
}