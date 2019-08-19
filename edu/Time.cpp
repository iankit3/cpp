#include<iostream>
using namespace std;


class Time {
  private : 
    int seconds_;
    int minutes_;
    int hours_;

  public :
   void set(int h , int m , int s){hours_ = h; minutes_ = m ; seconds_ = s;};
   void increment();
   void display();
};

void Time::increment(){
  seconds_++;
  minutes_ += seconds_ / 60;
  hours_ += minutes_ / 60;

  seconds_ %= 60;
  minutes_ %= 60;
  hours_ %= 24;

  return;
}

void Time::display(){
  cout << hours_ << ":" << minutes_ << ":" << seconds_ << endl;
}

int main(){

  Time time;
  time.set(23,58,10);
  time.display();  

  return 0;	
}
