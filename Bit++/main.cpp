#include <iostream>

using namespace std;
int main()
{
	unsigned int n;
	cin >> n;
	
	int x = 0;
	for(int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		if(s.find('+') != string::npos)
		{
			x++;
		}
		else
		{
			x--;
		}
	}
	
	cout << x;
}