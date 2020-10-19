#include <iostream>

using namespace std;
int main()
{
	unsigned short n;
	cin >> n;
	string* answers = new string[n];
	for(int i = 0; i < n; ++i)
	{
		string word;
		cin >> word;
		if(word.length() > 10)
		{
			string newWord = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
			answers[i] = newWord;
		}
		else
		{
			answers[i] = word;
		}
	}
	
	for(int i = 0; i < n; ++i)
	{
		cout << answers[i] << "\n";
	}
	
	delete[] answers;
}