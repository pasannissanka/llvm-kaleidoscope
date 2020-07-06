
#ifndef __PARSER_H__
#define __PARSER_H__

#include "ExprAST.h"
#include "NumberExprAST.h"
#include "VariableExprAST.h"
#include "BinaryExprAST.h"
#include "CallExprAST.h"
#include "FunctionAST.h"
#include "PrototypeAST.h"
#include "Token.h"
#include "Lexer.h"
#include "Logger.h"
#include <map>

extern std::map<char, int> BinopPrecedence;

int GetTokPrecedence();
ExprAST* ParseNumberExpr();
ExprAST* ParseParenExpr();
ExprAST* ParseIdentifierExpr();
ExprAST* ParsePrimary();
ExprAST* ParseBinOpRHS(int ExprPrec, ExprAST* LHS);
ExprAST* ParseExpression();
PrototypeAST* ParsePrototype();
FunctionAST* ParseDefinition();
FunctionAST* ParseTopLevelExpr();
PrototypeAST* ParseExtern();


#endif // !__PARSER_H__
