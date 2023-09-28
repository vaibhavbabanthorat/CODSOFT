//Name: Vaibhav Baban Thorat
// Number Guessing Game between 1-100 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int random_number = rand() % 100 + 1;
    int guess = 0;
    int no_of_choices = 10;
    cout<<"Guess the number between 1 to 100. \nEnter 0 to quit and see the number. \nYou have total 10 no. of choices."<<endl;
    while(true)
    {
        if(no_of_choices !=0)
        {
            if(guess != random_number)
        {
            cout<<"Guess the number(Enter 0 to quit !): "<<endl;
            cin>>guess;
            if(guess>random_number)
            {
                cout<<"Your guess is greater than the random number."<<endl;
                no_of_choices--;
                cout<<"No. of choices left: "<<no_of_choices<<endl;
            }
            else if(guess == 0)
            {
                cout<<"Random Number: "<<random_number<<endl;
                cout<<"You Lost the match !"<<endl;
                break;
            }
            else if(guess<random_number)
            {
                cout<<"Your guess is less than the random number."<<endl;
                no_of_choices--;
                cout<<"No. of choices left: "<<no_of_choices<<endl;
            }
        }
        else if(guess == random_number)     
        {
            cout<<"Congratulations, you WON the match !"<<endl;
            cout<<"Correct Guess !"<<endl;
            break;
        }
        }
        else if(no_of_choices == 0)
        {
            cout<<"Out of choices !"<<endl;
            cout<<"Random Number: "<<random_number<<endl;
            cout<<"You LOST the match"<<endl;
            return 0;
        }
    }
    return 0;
}
