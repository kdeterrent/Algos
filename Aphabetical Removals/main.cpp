#include <iostream>

using namespace std;
int main()
{
	unsigned int k, n;
	cin >> n >> k;
	
	//char inpstr[60000];
	
	string inpstr;
	cin >> inpstr;
	n = inpstr.length();
	
	for(char c = 'a'; c <= 'z'; ++c)
	{
		for(int i = 0; i < n; ++i)
		{
			
			if(inpstr[i] == c)
			{
				inpstr[i] = ' ';
				k--;
			}
			
			if(k == 0)
				break;
		}
		if(k == 0)
			break;
	}

	
	for(int i = 0; i < n; ++i)
	{
		if(inpstr[i] != ' ')
			cout << inpstr[i];
	}
}