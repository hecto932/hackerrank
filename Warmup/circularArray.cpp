#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(){
	int n;
	int k;
	int q;

	cin >> n >> k >> q;
	
	vector<int> a(n); 

	k = k % n;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int a0 = 0; a0 < q; a0++){
		int m;
		cin >> m;
		if((m - k) < 0)
			cout << a[n + (m - k)] << endl;
		else
			cout << a[(m - k)] << endl;
	}

	return 0;
}