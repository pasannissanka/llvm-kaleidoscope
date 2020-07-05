#ifndef __VARIABLE_EXPR_AST_H__
#define __VARIABLE_EXPR_AST_H__

#include "ExprAST.h"
#include <string>

class VarialbeExprAST : public ExprAST
{
	std::string Name;
public:
	VarialbeExprAST(const std::string &name) : Name(name) {}
};

#endif // !__VARIABLE_AST_H__


