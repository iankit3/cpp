#include<iostream>
#include<fstream>
using namespace std;

int main(){
  char text[20] = "Sample text";
  ofstream WFile("my_file",ios::out);
  WFile << text << endl;
  WFile.close();

  ifstream RFile("my_file");
  //cout << RFile << endl;
  RFile >> text;
  cout << text << endl;
  RFile.close();

  return 0;
}

