#include <iostream>
#define ulli unsigned long long int

using namespace std;

ulli widthheight(ulli& a, ulli& b)
{
	ulli output = a / b;
	if(a % b != 0)
		output += 1;
	
	return output;
}

int main()
{
	ulli n, m, a;
	cin >> n >> m >> a;
	
	ulli width = widthheight(n, a);
	ulli height = widthheight(m, a);
	
	ulli output = width * height;
	
	cout << output;
}