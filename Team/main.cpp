#include <iostream>

using namespace std;
int main()
{
	unsigned int n;
	unsigned short output = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		unsigned short lineTotal = 0;
		for(int j = 0; j < 3; ++j)
		{
			char inpChar;
			cin >> inpChar;
			
			if(inpChar == '1')
				lineTotal += 1;
		}
		
		if(lineTotal >= 2)
			output += 1;
	}
	
	cout << output;
}