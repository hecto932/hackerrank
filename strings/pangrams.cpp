#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isspace(char c){ return (c == ' ');  }

int main(){

	string s;
	getline(cin, s);
	cout << s << endl; 
	string alphabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	bool pangram = true;
	for(int i = 0; i < alphabet.size()-1 && pangram; i++)
	{
		if( (string::npos != s.find(alphabet[i])) || (string::npos != s.find(alphabet[i+1])) ) {
			pangram = false;
			cout << alphabet[i] << endl;
		}
	}
	if(pangram)
		cout << "pangram" << endl;
	else
		cout << "not pangram" << endl;

	return 0;
}