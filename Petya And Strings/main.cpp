#include <iostream>

using namespace std;

void tolowerf(string& s)
{
	for(int i = 0; i < s.length(); ++i)
	{
		s[i] = tolower(s[i]);
	}
}

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	
	tolowerf(str1);
	tolowerf(str2);
	
	if(str1 == str2)
		cout << 0;
	else if(str1 < str2)
		cout << -1;
	else
		cout << 1;
}