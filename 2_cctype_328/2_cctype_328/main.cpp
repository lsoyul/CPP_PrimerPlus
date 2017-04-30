// cctype library

#include <iostream>
#include <cctype>

int main()
{
	using namespace std;

	cout << "Input text: "
		"last character should be @" << endl;

	char ch;

	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);				// input first char

	while (ch != '@')
	{
		if (isalpha(ch))		// is it alphabet?
			chars++;

		else if (isspace(ch))	// is it white space?
			whitespace++;
		
		else if (isdigit(ch))	// is it digit?
			digits++;
		
		else if (ispunct(ch))	// is it punct? (., etc)
			punct++;
		
		else
			others++;

		cin.get(ch);			// input next character
	}

	cout << "Alphabet " << chars << ", "
		<< "Whitespace " << whitespace << ", "
		<< "Digit " << digits << ", "
		<< "Punct " << punct << ", "
		<< "Others " << others << endl;


	return 0;
}