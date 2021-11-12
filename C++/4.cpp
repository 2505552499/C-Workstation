#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
    char *a;
    *a='a';
    argv[1]=a;
    cout<<"运行程序名：  "<<argv[0]<<endl;
    cout<<"所带的参数1：  "<<argv[1]<<endl;
    cout<<"所带的参数2：  "<<argv[2]<<endl;

    return 0;
}