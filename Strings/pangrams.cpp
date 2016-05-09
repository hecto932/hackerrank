#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){

	string s;
	int i;
	getline(cin, s);
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	bool pangram = true;
	for(i = 0; i < alphabet.size() && pangram; i++)
	{
		if(find (s.begin(), s.end(), alphabet[i]) == s.end() && find (s.begin(), s.end(), toupper(alphabet[i])) == s.end()){
			pangram = false;
		}
	}
	if(pangram)
		cout << "pangram" << endl;
	else
		cout << "not pangram" << endl;

	return 0;
}