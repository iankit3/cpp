#include<iostream>
#include<string>
#include<vector>
using namespace std;

/**
*  impl string::split(" ")
**/

int main(){
	string str = "Hello gOOrm i am Ankit";
	
	string::iterator it; 
	vector<string> str_vec;
	int i=0;
	for(it = str.begin();it != str.end();it++){
		string s(1, *it); 
		if(str_vec.size() == 0){
			str_vec.push_back(s);	
		}else{
			
			if(*it == ' '){
				str_vec.push_back("");
				i++;
			}else{
				str_vec[i] += s;
			}
		}
		//cout << *it << endl;
	}
	
	vector<string>::iterator v_it;
	//cout <<  str_vec.size() << endl;
	for(v_it = str_vec.begin();v_it !=str_vec.end();v_it++){
		cout <<  *v_it << endl;
	}
	
	return 0;
}
