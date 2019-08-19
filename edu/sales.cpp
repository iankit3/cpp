#include<iostream>
using namespace std;

int GetInput(int WeeklySales);
int CalcMethod1(int WeeklySales);
int CalcMethod2(int WeeklySales);
int CalcMethod3(int WeeklySales); 

const int kShoesPrice = 225;
int main(){
  int weekly_sales;
  cout << "Enter the weekly sales in Integer" << endl;
  cin >> weekly_sales;
  int salary = GetInput(weekly_sales); 
  cout << "Your salary is : " <<  salary << endl;
  
  return 0;
}

int GetInput(int WeeklySales){
  int result1 = CalcMethod1(WeeklySales); 
  int result = result1;
  int result2 = CalcMethod2(WeeklySales);
  int result3 = CalcMethod3(WeeklySales);

  
  if(result2 > result1){
     result = result2;
  }

  if(result3 > result2){
     result = result3;
  }

  return result;
}

int CalcMethod1(int WeeklySales) {
  int salary = 0; 
  salary = 600;

  cout << "Method 1 : " << salary  << endl;
  return salary;
}

int CalcMethod2(int WeeklySales) {
  int salary = 0; 
  salary = 7 * 40 + (((WeeklySales * kShoesPrice) * 10) / 100);
  cout << "Method 2 : " << salary  << endl;

  return salary;
}

int CalcMethod3(int WeeklySales) {
  int salary = 0; 
  salary = (WeeklySales * 20) + ((WeeklySales * kShoesPrice * 20)  / 100);
  cout << "Method 3 : " << salary  << endl;

  return salary;
}
