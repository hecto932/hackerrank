#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

bool cmp(string p1, string p2) {
    return p1 < p2;
}


int main() {
	int n;

	cin >> n;
	vector<string> votes(n);
	map<string, int> resultados;
	vector<string> list;

	for(int i = 0; i < n; ++i){
		cin >> votes[i];
	}

	for(int i = 0; i < votes.size(); ++i){
		++resultados[votes[i]];
	}

	long int max = 0;
	for(map<string, int>::iterator it = resultados.begin(); it != resultados.end(); ++it) {
		if(it->second > max)
			max = it->second;
	}

	for(map<string, int>::iterator it = resultados.begin(); it != resultados.end(); ++it) {
		if(it->second == max)
			list.push_back(it->first);
	}

	sort(list.begin(), list.end(), cmp);

	cout << *(list.begin() + (list.size() - 1)) << endl;

	return 0;
}  