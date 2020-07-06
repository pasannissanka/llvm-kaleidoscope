#ifndef __LEXER_H__
#define __LEXER_H__

#include <string>

extern int CurTok;

int gettok();
int getNextToken();

extern std::string IdentifierStr;
extern double NumVal;
#endif // !__LEXER_H__
