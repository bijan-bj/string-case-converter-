#include <iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string word;
	cout << "Enter a string :";
	getline(cin, word);
	for (int i = 0; i < word.size(); i++)
	{
		if (islower(word[i]))
		{
			word[i] = toupper(word[i]);
		}
		else
		{
			word[i] = tolower(word[i]);
		}
	}
	cout << "Result: " << word << endl;

}
