#include<iostream>
using namespace std;
int gcd(int , int);
int main(){

  gcd(108,30);

  return 0;
}

int gcd(int a , int b){
  int out = 0;
 
  int dividand = a , divisor = b ;
  if(a < b){
    dividand = b;
    divisor = a;
  }
  int remainder = divisor;

  while(remainder != 0){
    //int new_dividand = (int)dividand / divisor ;
    cout << "Divisor " << divisor  << endl;
    remainder = dividand % divisor;
    dividand = divisor;
    if(remainder != 0)
     divisor = remainder;
  }

  cout << "GCD of (" << a << " , " << b  << ") is : " << divisor  << endl;


  return out;
}
