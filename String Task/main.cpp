#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str;
	cin >> str;
	
	for(char& c : str)
	{
		c = tolower(c);
	}
	
	string vowels = "aeiouy";
	for(char& c : vowels)
	{
		while(true)
		{
			size_t loc = str.find(c);
			if(loc != string::npos)
			{
				str.erase(str.begin() + loc);
			}
			else
				break;
		}
		
	}
	
	for(int i = str.length() - 1; i >= 0; --i)
	{
		str.insert(i, 1, '.');
	}
	
	cout << str;
}