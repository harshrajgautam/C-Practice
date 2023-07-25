#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a value of a:-";
    cin>>a;
    cout<<"enter a value of b:-";
    cin>>b;
    cout<<"enter a value of c:-";
    cin>>c;
    if(a==b==c){
        cout<<"Equilateral triangle";
    }
    else if(a==b || a==c || b==c ){
        cout<<"isosceles triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    return 0;
}