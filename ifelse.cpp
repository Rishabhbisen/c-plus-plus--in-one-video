#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>150 || age <5)
    {
        cout<<"invalid age ";
    }
    else if (age>=18)
    {
        cout<<"ypu can vote";
    }
    else
    {
        cout << " you can not vote";
    }
    return 0;
    }