#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
    char *a;
    *a='a';
    argv[1]=a;
    cout<<"���г�������  "<<argv[0]<<endl;
    cout<<"�����Ĳ���1��  "<<argv[1]<<endl;
    cout<<"�����Ĳ���2��  "<<argv[2]<<endl;

    return 0;
}