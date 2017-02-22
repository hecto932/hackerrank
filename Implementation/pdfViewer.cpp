#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> h(26);

	for(int i = 0; i < 26; ++i){
		cin >> h[i];
	}
	string word;
	cin >> word;

	int max = 0;

	for(int i = 0; i < word.size() ; ++i){
		if(max < h[word[i] - 97])
			max = h[word[i] - 97];
	}

	cout << max * word.size() << endl;

	return 0;
}  