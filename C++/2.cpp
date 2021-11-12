#include <iostream>
using namespace std;
void fun(int,int &);
int main(){
    int a=22,b=44;
    cout<<"初始值：  a="<<a<<",b="<<b<<endl;
    fun(a,b);
    cout<<"参数传递后：fun(a,b),a="<<a<<",b="<<b<<endl;
    return 0;
}
void fun(int x,int &y){
    x=88;
    y=89;
}