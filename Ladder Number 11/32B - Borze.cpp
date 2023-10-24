#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s;
	cin >> s;
	string ans;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '.'){
			ans.push_back('0');
		}
		else if(s[i] == '-' && s[i+1] == '.'){
			ans.push_back('1');
			i++;
		}
		else if(s[i] == '-' && s[i+1] == '-'){
			ans.push_back('2');
			i++;
		}
	}
	cout << ans;
	return 0;
}