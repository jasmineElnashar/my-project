
//program:this code create a funny game which played by two and the person who get 100 first is the winner
//Author:Jasmine mohamed elsaid mostafa elnashar
//version:0.1
//date:2/3/2024
#include<iostream>
#include<cstring>
#include<limits>
using namespace std;
int main()
{
    string player1name,player2name;
    //starting the game
    cout<<" welcome to 100 game "<<endl;
    // take the name of player1
    cout<<" player1 : enter your name:"<<endl;
    cin>>player1name;
    cout<<" player2:please enter your name :"<<endl;
    //take the name of player2
    cin>>player2name;
    //declare variable
    int sum=0;
    //create a loop and will continue until the sum=100 then stops
    while ( sum<100)
    {
        int num1,num2;
        //check that player1 enter a valid input
        while (true)
        {
            cout<<player1name <<" "<<"please enter  positive integar a number from 1 to 10"<<endl;
            cin>>num1;
            if ( cin.fail()||num1<1||num1>10)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<" invalid input ,please try again"<<endl;
                continue;

            }
            break;
        }
        while (sum+num1>100)
        {
            cout<<" please enter smaller number "<<endl;
            cin>>num1;
        }
        sum+=num1;
        cout<<" now we have sum "<<" ="<<sum<<endl;
        //check if player1 is the winner
        if (sum==100)
        {
            cout<<player1name<<" is the winner!!!";
            //stop the game
            break;
        }
        // check that player2 input a valid value
        while(true)
        {
            cout<< player2name<<" "<<"please enter a positive integar number from 1 to 10"<<endl;
            cin>>num2;
            if (cin.fail()|| num2<1|| num2>10)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<" invalid input please try again"<<endl;
                continue;
            }
            break;
        }
        while (sum+num2>100)
        {
            cout<<" please enter a smaller number "<<endl;
            cin>>num2;

        }
        sum+=num2;
        // print the current sum
        cout<<" now we have sum"<<"="<<sum<<endl;
        //check if plyer2 is the winner
        if (sum==100)
        {
            cout<< player2name<<" "<<"is the winner!!"<<endl;
            //stop the game
            break;
        }


    }
}




