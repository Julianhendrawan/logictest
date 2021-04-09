// C++ program to reverse a string using recursion
#include <bits/stdc++.h>
using namespace std;

/* Function untuk membalikkan nilai string */
void dibalik(string str)
{
	if(str.size() == 0)
	{
		return;
	}
	dibalik(str.substr(1));
	cout << str[0];
}

/* Main program to run function */
int main()
{
	string alphabet = "'h','e','l','l','o'"; //String yang akan di balikkan
	dibalik(alphabet);
	return 0;
}
