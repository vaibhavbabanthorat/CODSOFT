//Name: Vaibhav Baban Thorat
#include<iostream>
using namespace std;
int flag = 0;
bool result1 = false;
char a[3][3] = {'1','2','3','4','5','6','7','8','9'};
int input=0;
void display_board()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j<2)
            {
                cout<<a[i][j]<<"|";
            }
            else 
            {
                cout<<a[i][j];
            }
        }
        
        cout<<endl;
        if(i!=2)
        {
            cout<<"------"<<endl;
        }
    }
}
void take_input()
{
    cin>>input;
}
void update_board()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(input==1)
            {
                if(flag%2==0)
                {
                    a[0][0] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[0][0] = 'y';
                    flag++;
                }
                
            }
            else if(input==2)
            {
                if(flag%2==0)
                {
                    a[0][1] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[0][1] = 'y';
                    flag++;
                }
            }
            else if(input==3)
            {
                if(flag%2==0)
                {
                    a[0][2] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[0][2] = 'y';
                    flag++;
                }
            }
            else if(input==4)
            {
                if(flag%2==0)
                {
                    a[1][0] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[1][0] = 'y';
                    flag++;
                }
            }
            else if(input==5)
            {
                if(flag%2==0)
                {
                    a[1][1] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[1][1] = 'y';
                    flag++;
                }
            }
            else if(input==6)
            {
                if(flag%2==0)
                {
                    a[1][2] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[1][2] = 'y';
                    flag++;
                }
            }
            else if(input==7)
            {
                if(flag%2==0)
                {
                    a[2][0] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[2][0] = 'y';
                    flag++;
                }
            }
            else if(input==8)
            {
                if(flag%2==0)
                {
                    a[2][1] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[2][1] = 'y';
                    flag++;
                }
            }
            else if(input==9)
            {
                if(flag%2==0)
                {
                    a[2][2] = 'x'; 
                    flag++;
                }
                else 
                {
                    a[2][2] = 'y';
                    flag++;
                }
            }
            else 
            {
                continue;
            } 
        }
    }
}
bool result()
{
    for(int i=0;i<3;i++)
    {
        if(a[i][0]==a[i][1] && a[i][1]==a[i][2])
        {
            return true;
        }
    }
    for(int j=0;j<3;j++)
    {
        if(a[0][j]==a[1][j] && a[1][j]==a[2][j])
        {
            return true;
        }
    }
    if(a[0][0]==a[1][1] && a[1][1]==a[2][2] || a[0][2]==a[1][1] && a[1][1]==a[2][0])
    {
        return true;
    }
    return false;
}
int main()
{
    int count = 0;
    display_board();   
    bool game_over  = false;
    for(int i=0;i<9;i++)
    {
        while(!game_over)
        {
            if(count<9)
            {
                cout<<"Enter an input: "<<endl;
                take_input();
                update_board();
                display_board();
                bool result1 = result();
                if(result1==1)
                {
                    cout<<"Congratulations ! You won the match.";
                    game_over=true;
                    return 0;
                }
                count++;
            }
            else 
            {
                break;
            }
            
            
        } 
    } 
    cout<<"Match Tie";
    return 0;
}
