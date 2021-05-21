#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age , months ;
    cout<< " Enter your age"<<endl;
    cin>>age;

    

    switch(age)
    {
    case 13:
    cout << " you are an 13 year old"<<endl;
    break;
    
    case 18:
    cout<<"you are an 18 year old"<<endl;
    break;

    case 1:
    cout<<"january"<<endl;
    break;

    default:
    cout <<" you are not 13 nethire 18 year old "<<endl;
    }

    cout<< " Enter your birthday  months"<<endl;
    cin>>months;


    switch (months)
    {
    case 1:
        cout<<"your birthday months is : jauary";
        break;

        case 2:
        cout<<"your birthday months is : feb";
        break;

        case 3:
        cout<<"your birthday months is : march";
        break;

        case 4:
        cout<<"your birthday months is : aplir";
        break;

        case 5:
        cout<<"your birthday months is : may";
        break;

        case 6:
        cout<<"your birthday months is : june";
        break;

        case 7:
        cout<<"your birthday months is : july";
        break;

        case 8:
        cout<<"your birthday months is : agust";
        break;

        case 19:
        cout<<"septembare";
        break;

        case 10:
        cout<<"octumber";
        break;

        case 11:
        cout<<"your birthday months is : novmber";
        break;

       case 12:
        cout<<"your birthday months is : december";
        break;
    
    default:
         cout<<"you enterd invalid month"<<endl;
        break;
    }
    return 0;
}
