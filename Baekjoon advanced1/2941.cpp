#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	char s[101];
	cin >> s;

	int length = strlen(s);

	if (strlen(s) >= 2)
	{
		for (int i = 0; i < strlen(s) - 1; i++)
		{
			if (s[i] == 'c' && s[i + 1] == '=')
				length--;
			if (s[i] == 'c' && s[i + 1] == '-')
				length--;
			if (s[i] == 'd' && s[i + 1] == '-')
				length--;
			if (s[i] == 'l' && s[i + 1] == 'j')
				length--;
			if (s[i] == 'n' && s[i + 1] == 'j')
				length--;
			if (s[i] == 's' && s[i + 1] == '=')
				length--;
			if (s[i] == 'z' && s[i + 1] == '=')
				length--;
		}
	}

	if (strlen(s) >= 3)
	{
		for (int i = 0; i < strlen(s) - 2; i++)
		{
			if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
				length--;
		}
	}

	cout << length;

	return 0;
}