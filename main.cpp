#include <iostream>
#include <string>
#include "std_lib_facilities.h"

//name value class
class Name_value{
	public: string name;
	public: int value;
	public: Name_value(string n, int v){
			name=n;
			value=v;
	}
	public: void toString(){
			cout << name << " " << value << "\n"; 
	}
};


int main() {
		vector<Name_value> vec;
  while(true){
		string name;
		int value;
		cin >> name;
		cin >> value;
		Name_value v(name,value);//constructior

		if(v.name == "NoName" && v.value == 0){//when leave condition hit, we leave
			break;
		}

		vec.push_back(v);//push to vector
	}
	while(vec.size()!=0){//prints out stack
		 vec.back().toString();
		 vec.pop_back();
	}
} 