#include <iostream>

using namespace std;

int main() {
  int input_var = 0;

  do{
    cout << "Enter the number" << endl;
    if(!(cin >> input_var)){
      cout << "A non int value "<< input_var <<" is entered ! Exiting..." << endl;
      // break;	      
      //I will not break , i will gracefully IGNORE the error and CONTINUE
      cin.clear();
      /*
       * std::numeric_limits<std::streamsize>::max() RETURNS 10000
       * https://developers.google.com/edu/c++/solutions/1-3
      */
      cin.ignore(10000,'\n');
    }else{
      cout << "You have entered : " << input_var << endl;
    }
  }while(input_var != -1 );

  cout << "...END..." << endl;
  return 0;

}
