#include <bits/stdc++.h>
using namespace std;

// Link to problem = https://codeforces.com/problemset/problem/112/A
int main()
{
	string line1;
	string line2;
	cin >> line1;
	cin >> line2;

	for (int i = 0; i < line1.length(); i++)
	{
		line1[i] = tolower(line1[i]);
		line2[i] = tolower(line2[i]);
	}

	if (line1 == line2)
	{
		cout << 0 << endl;
	}
	else if (line1 < line2)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << 1 << endl;
	};

	return 0;
}
