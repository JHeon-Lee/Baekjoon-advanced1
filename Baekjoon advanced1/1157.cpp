#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int count[26] = { 0 };
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] > 96)
		{
			s[i] -= 32;
		}
	}

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 65; j < 91; j++)
		{
			if (s[i] == j)
			{
				count[j - 65]++;
			}
		}
	}

	int max = count[0];
	int max_index = 0;
	bool no_duplication = true;

	for (int i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			max_index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == count[i] && i != max_index)
		{
			cout << "?";
			no_duplication = false;
			break;
		}
	}

	if (no_duplication == true)
	{
		cout << (char)(max_index + 65);
	}

	return 0;
}