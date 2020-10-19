#include <bits/stdc++.h>

using namespace std;
int main()
{
	vector<int> nums;
	string str;
	cin >> str;
	
	for(char& c : str)
	{
		if(isdigit(c))
		{
			int x = c - '0';
			nums.push_back(x);
		}
	}
	
	sort(nums.begin(), nums.end());
	
	string output = "";
	for(int n : nums)
	{
		output += to_string(n);
		output += "+";
	}
	
	output.pop_back();
	cout << output;
}