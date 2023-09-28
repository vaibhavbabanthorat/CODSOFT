//Name: Vaibhav Baban Thorat
#include<iostream>
using namespace std;
class Calculator
{
    float num1,num2;
    char choice;
    public:
    float get_num1()
    {
        cout<<"Enter first number: "<<endl;
        cin>>num1;
    }
    int user_choice()
    {
        cout<<"Enter your choice (operation to be performed): "<<endl;
        cin>>choice;
    }
    float get_num2()
    {
        cout<<"Enter second number: "<<endl;
        cin>>num2;
    }
    float operation()
    {
        if(choice == '+')
        {
            return num1+num2;
        }
        else if(choice == '-')
        {
            return num1-num2;
        }
        else if(choice == '*')
        {
            return num1*num2;
        }
        else if(choice == '/')
        {
            return num1/num2;
        }
    }
};
int main()
{
    Calculator c1;
    c1.get_num1();
    cout<<"Enter '+' for Addition of two numbers."<<endl;
    cout<<"Enter '-' for Subtraction of two numbers."<<endl;
    cout<<"Enter '*' for Multiplication of two numbers."<<endl;
    cout<<"Enter '/' for Division of two numbers."<<endl;
    c1.user_choice();
    c1.get_num2();
    float result = c1.operation();
    cout<<"Result: "<<result<<endl;
    return 0;
}
