#include<iostream>
using namespace std;
int SPEED = 40;


int accelerate(int& speed , int amount);

int main(){
  int input = 0; 	
  cout << "Enter the amount you want to pay the driver for driving fast" << endl;
  while((cin >> input)){
    cout << accelerate(SPEED , input) << endl;
    cout << "Keep paying more" << endl;
  }
  cout << "Hope you mean't to END. If not please run again.. END-ing.. !" << endl;
  return 0;	
} 

int accelerate(int& speed , int amount){
  return speed += amount;
}
