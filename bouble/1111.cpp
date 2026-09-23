#include <iostream>
using namespace std;
int main(){
int arr[10]={18,3,9,81,99,193,88,13,12,11};
int len =sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<len-1;i++){
    for(int j=0;j<len-1-i;j++){
        if(arr[j]<arr[j+1]){//我想降序拍列
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }

}
for(int i=0;i<len;i++){
    cout <<arr[i]<<endl;
}
system("pause");
return 0;

}