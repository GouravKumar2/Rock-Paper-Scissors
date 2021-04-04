#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <ctime>
using namespace std;
int main() 


{

    string password="op";
    string pass;
    system("CLS");
    int x,random;
    char user1;
    string user;
    string again;
    do
   {
               // THIS PART OF PROGRAM TAKES YOUR CHOICE AND 
               // SAVES IT INTO THE user VARIABLE
     do        
     {
    
      cout<<"what do you choose!? ( rock, paper or scissors)"<<endl;
      cout<<"r - rock"<<endl<<"p - paper"<<endl<<"s - scissors"<<endl;
      cin>>user1;
      if(user1=='r')
      {
       x=1;
       user="rock";
      }
      else if(user1=='p')
      {
        x=1;
        user="paper";
      }
      else if(user1=='s')
      {
        x=1;
        user="scissors";
      }
      else
    {
        x=0;
       cout<<"Invalid Input!!"<<endl<<endl;
       
     }
     }while(x==0);


    if(user=="rock")
    {
        
        cout<<"You chose rock!"<<endl;
        getch();
    }
    else if(user=="paper")
    {
       
        cout<<"You chose paper!"<<endl;
        getch();
    }
    else if(user=="scissors")
    {
        
        cout<<"You chose scissors!"<<endl;
        getch();
    }
    else
    {
        
        cout<<"Invalid input!"<<endl;
        getch();
   
    }
               // THIS BLOCK CREATES A RANDOM NUMBER AND SAVES THE VALUE 
               // INTO THE computer VARIABLE AND ALSO PRINTS IT ON THE 
               // SCREEN
    
    
    srand ( time(NULL) );
    int random= rand()%9;
   
    std::string computer;
    if (random<=2)
    {
        computer = "rock";
    }
    else if (random<=5)
    {
        computer = "paper";
    }
    else
    {
        computer = "scissors";
    }
    cout<<"The computer chose "<<computer<<endl;
   
     
          // THIS BLOCK CHECKS ALL THE POSSIBLE CASES
          // AND FINDS OUT WHAT IS THE CASE
          // AND PRINTS THE RESULT ON THE SCREEN
    
    if(user=="rock"&&computer=="rock")
    {
        cout<<"Its a tie!"<<endl;
        getch();
    }
    else if(user=="paper"&&computer=="paper")
    {
        cout<<"Its a tie!"<<endl;
        getch();
    }
    else if(user=="scissors"&&computer=="scissors")
    {
        cout<<"Its a tie!"<<endl;
        getch();
    }
    else if(user=="rock"&&computer=="scissors")
    {
        cout<<"You Won!"<<endl;
        getch();
    }
    else if(user=="paper"&&computer=="rock")
    {
        cout<<"You Won!"<<endl;
        getch();
    }
    else if(user=="scissors"&&computer=="paper")
    {
        cout<<"You Won!"<<endl;
        getch();
    }
    else if(user=="rock"&&computer=="paper")
    {
        cout<<"You Lost!"<<endl;
        getch();
    }
    else if(user=="paper"&&computer=="scissors")
    {
        cout<<"You Lost!"<<endl;
        getch();
    }
    else if(user=="scissors"&&computer=="rock")
    {
        cout<<"You Lost!"<<endl;
        getch();
    }
    else
    {
        cout<<"ERROR"<<endl;
        getch();
    }

            // HERE THE COMPUTER ASKS WHETHER THE USER WANTS TO PLAY AGAIN OR NOT
            // IF USER SAYS YES THE PROGRAM STARTS AGAIN
            // AND IF USER SAYS NO THE PROGRAM ENDS
    cout<<"Do You want to play again? (yes or no)"<<endl<<"y - yes"<<endl<<"n - no"<<endl;
    cin>>again;
    if(again=="y")
    {
        system("CLS");
    }
    }while ( again=="y");
    cout<<"Ok! Thanks for Playing"<<endl;
    cout<<"(Press any key to close window)";
    getch();
    return 0;
}
