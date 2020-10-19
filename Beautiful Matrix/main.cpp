#include <bits/stdc++.h>

using namespace std;
int main()
{
	for( int y = 0; y < 5; ++y )
	{
		for( int x = 0; x < 5; ++x)
		{
			int a;
			cin >> a;
			if(a == 1)
			{
				cout << (abs(x-2) + abs(y-2));
				return 0;				
			}
		}
	}
}