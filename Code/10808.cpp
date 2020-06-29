#include <bits/stdc++.h>
using namespace std;

int alpha[26];

int main(void)
{
	char s[100];
	scanf("%[^\n]", s);
	
	string str = s;
	for (int i = 0; i < str.size(); i++)
		alpha[s[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';

	return 0;
}