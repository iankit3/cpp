#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){

  int rand_num , entered = 0;
  //Rand Seed	
  srand(time(NULL));

  rand_num = rand() % 100;
  //cout << rand_num << endl;
  do{
    cout << "Guess the number! HINT -- it is between 0-100 " << endl;
    if(!( cin >> entered)){
      cout << "INVALID ! As told it a number and it lies between 0 & 100";
      cin.clear();
      cin.ignore(10000 , '\n');  
    }else{
      if(entered > rand_num) 
	 cout << "The secret number is LESS than " ;
      else if(entered == rand_num) break;
      else 
         cout << "The secret number is GREATER than ";
      cout << "" << entered << ". Keep Guesssing ! :) " << endl;
    }
  }while(entered != rand_num);

  cout << entered << "is equal the secret" << rand_num << " You WON !" << endl;

  return 0;
}

