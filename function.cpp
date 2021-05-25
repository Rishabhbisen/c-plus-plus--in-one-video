#include<iostream>
using namespace std;

int sum(int a , int b)
{
    int c;
    c = a+b;
    return c;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"Enter first nomber"<<endl;
    cin>>a;
    cout<<"Enter second nomber"<<endl;
    cin>>b;
    cout<<"The sum is :"<<sum(a ,b)<<endl;
   
    
    return 0;
}
