#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	
	int output = 0;
	char last = '\0';
	for(char& c : str)
	{
		if(c == last)
			output++;
		
		last = c;
	}
	
	cout << output;
}