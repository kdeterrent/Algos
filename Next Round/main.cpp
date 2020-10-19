#include <iostream>

using namespace std;
int main()
{
	unsigned short n, k;
	cin >> n >> k;
	
	unsigned int* scores = new unsigned int[n];
	
	for(int i = 0; i < n; ++i)
	{
		string input;
		cin >> input;
		
		scores[i] = stoul(input);
	}
	
	unsigned int kthPlace = scores[k - 1];
	unsigned int output = 0;
	for(int i = 0; i < n; ++i)
	{
		unsigned int currentNum = scores[i];
		
		if(currentNum >= kthPlace && currentNum > 0)
			output++;
		else
			break;
	}
	
	cout << output;
	
	delete[] scores;
}