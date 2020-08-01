#include <bits/stdc++.h> 
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int> v;
    char c;
    int number;
    do{
        ss>>number;
        v.push_back(number);
        
    }while(ss>>c);
    return v; 
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
