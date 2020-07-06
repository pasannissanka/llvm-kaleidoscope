#include "Lexer.h"
#include "Token.h"

#include <string>
#include "Parser.h"

int CurTok;
std::string IdentifierStr;
double NumVal;

int gettok() {
	static int LastChar = ' ';

	// skip any whitespace
	while (isspace(LastChar))
	{
		LastChar = getchar();
	}

	// identifies keywords
	// def, extern
	if (isalpha(LastChar))
	{
		IdentifierStr = LastChar;
		while (isalnum((LastChar = getchar()))) {
			IdentifierStr += LastChar;
		}
		if (IdentifierStr == "def")
			return tok_def;
		if (IdentifierStr == "extern")
			return tok_extern;
		return tok_identifier;
	}

	// Stacking together only numeric values
	if (isdigit(LastChar) || LastChar == '.')
	{
		std::string NumStr;
		do
		{
			NumStr += LastChar;
			LastChar = getchar();
		} while (isdigit(LastChar) || LastChar == '.');
		// numeric string to numeric value
		NumVal = strtod(NumStr.c_str(), 0);
		return tok_number;
	}

	// Handling comments
	if (LastChar == '#') {
		do
		{
			LastChar = getchar();
		} while (LastChar != EOF && LastChar != '\n' && LastChar != '\r');

		if (LastChar == EOF) {
			return gettok();
		}
	}

	// If inputs doesn't handle above cases it 
	// either EOF or operator chars like '+', '-' etc
	if (LastChar == EOF)
	{
		return tok_eof;
	}

	int ThisChar = LastChar;
	LastChar = getchar();
	return ThisChar;
}


int getNextToken()
{
	return CurTok = gettok();
}