// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;

// function mengecek masing - masing bracket
bool bracketPair(string brackets)
{
	stack<char> s;
	char x;

	// Check Bracket
	for (int i = 0; i < brackets.length(); i++)
	{
		if (brackets[i] == '(' || brackets[i] == '['
			|| brackets[i] == '{')
		{
			// Push the element in the stack
			s.push(brackets[i]);
			continue;
		}

		if (s.empty())
			return false;

		switch (brackets[i]) {
		case ')':
			
			// Store the top element in a
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			// Store the top element in b
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			// Store the top element in c
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	// Check Empty Stack
	return (s.empty());
}

// Main code
int main()
{
	string brackets = "{()}[]"; //masukan bracket yang akan di cek

	// Function call
	if (bracketPair(brackets))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
