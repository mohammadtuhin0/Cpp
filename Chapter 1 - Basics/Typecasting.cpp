// Take integer 'X' as input and print half of the number.

#include <iostream>
using namespace std;
int main() {

    int x;
    cout<<"Enter a number: ";
    cin>>x;

    float y = (float)x;         // typecasting 
    cout<<"Half of the number :"<<y/2;
}