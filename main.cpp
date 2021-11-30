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
			cout << name << "," << value << "\n"; 
	}
};

int contains(vector<Name_value> list, Name_value t){
	for(Name_value l :list){
		if(l.name == t.name  && l.value == t.value){
			return 1;
		}
	}
	return 0;
}

int main() {
		vector<Name_value> vec;
  while(true){
		string name;
		int value;
		cin >> name;
		cin >> value;
		Name_value v(name,value);//constructior

		if(contains(vec,v)){
			cout << "same name entered, exiting...";
			return -1;
		}

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