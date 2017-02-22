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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    
    long int myints[] = {(b + c + d + e),(a + c + d + e),(a + b + d + e),(a + b + c + e),(a + b + c + d)};
    
    cout << *min_element(myints, myints + 5) << " " << *max_element(myints, myints + 5) << endl;
    
    return 0;
}