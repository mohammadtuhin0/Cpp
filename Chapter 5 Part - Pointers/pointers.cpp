#include <iostream>
using namespace std;
int main(){
    int x = 3;
    int* p;
    p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
}