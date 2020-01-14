
#include <iostream>
#include <string>
using namespace std;

int main(){


int stat;
int league;
  double CF;
  double FF; 
  double PDO;
  double cflap;
  double fflap;
  double khl = 0.80;
  double shl = 0.60;
  double ncaa = 0.35;
  double ahl = 0.48;
  double swiss = 0.40;
  double liiga = 0.40;
  double ohl = 0.34;
  double qmjhl = 0.28;
  double whl = 0.29;  
  int age;
  double pts;
  double gp;
  float ptv;


// Luck-Adjusted Possession Calculation, of LAP Calculation Provides a more accurate grasp of Fenwick and Corsi by adjusting for PDO, known as the "luck factor" in the analytics community.

// Prospect Transition Value, also known as PTV, is a metric for measuring the likelihood of a players' success in the NHL give their league (NHLe), age, point totals, and other factors.

// Both LAP and PVT were created by David Antao. 

  // assign value of 1 to LAP calculation and value of 2 to PTV, user inputs one or the other.
  cout << "Hello. Would you like to see Luck Adjustment Possession metrics or Prospect Transition Value?\nType 1 for LAP or 2 for PTV\n";
  cin >> stat;
        if (stat==1){
        cout << "\nYou have chosen LAP.\nPlease type the corsi for percentage value.\n";
        cin >> CF;
        cout << "\nPlease type in the fenwick for percentage value.\n";
        cin >> FF;
        cout << "\nPlease type in the PDO value.\n";
        cin >> PDO;
        cout << "\n Your LAP values are being calculated.\n";

          cflap = (CF)/(PDO);
          fflap = (FF)/(PDO);

        cout << "\nYour Corsi LAP value is " << cflap << ".\n\n";
        cout << "\nYour Fenwick LAP value is " << fflap << ".\n\n";}

    //--------------------------------------------------------------------------------------------------------------------------------------------------------

     
     




















     
     
     //--------------------------------------------------------------------------------------------------------------------------------------------------------
      if (stat==2){
      cout <<  "\nYou have chosen Propect Transition Value.\nPlease specify the league of the prospect through the following key:\n";
      cout <<  "KHL=1, AHL=2, NCAA=3, SHL=4, Switzerland NLA=5, Liiga=6, OHL=7, QMJHL=8, WHL=9\n";
      
      cin >> league;

    //--------------------------------------------------------------------------------------------------------------------------------------------------------
      
      if (league==1){//khl
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;
   
      cout << "\nCalculating...\n";

        ptv = pts/gp/age/100*khl/3*1000000;

      cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      

      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------
      
      if (league==2){//ahl
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;
    
      cout << "\nCalculating...\n";
        
          ptv = pts/gp/age/100*ahl/3*1000000;

      cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------
      
      if (league==3){//ncaa
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;

      cout << "\nCalculating...\n";
        
          ptv = pts/gp/age/100*ncaa/3*1000000;

      cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------

      if (league==4){//shl
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;

      cout << "\nCalculating...\n";
        
          ptv = pts/gp/age/100*shl/3*1000000;

      cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------

      if (league==5){//swiss league
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;

      cout << "\nCalculating...\n";

        ptv = pts/gp/age/100*swiss/3*1000000;
        cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------

      if (league==6){//liiga
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;

      cout << "\nCalculating...\n";

        ptv = pts/gp/age/100*liiga/3*1000000;
        cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------

      if (league==7){//ohl
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;

      cout << "\nCalculating...\n";

        ptv = pts/gp/age/100*ohl/3*1000000;
        cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------

      if (league==8){//qmjhl
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;

      cout << "\nCalculating...\n";

        ptv = pts/gp/age/100*qmjhl/3*1000000;
        cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }
      //--------------------------------------------------------------------------------------------------------------------------------------------------------

      if (league==9){//whl
      cout << "Please type in the prospect's age.\n";
      cin >> age;
      cout << "\nPlease type in the number of points.\n";
      cin >> pts;
      cout << "\nPlease type in the number of games played.\n";
      cin >> gp;

      cout << "\nCalculating...\n";

        ptv = pts/gp/age/100*whl/3*1000000;
        cout <<"The prospect transition value score is " << ptv <<" percent. \nIf the prospect is a defenseman, add 30.0 percent.";
      }




      }}
  