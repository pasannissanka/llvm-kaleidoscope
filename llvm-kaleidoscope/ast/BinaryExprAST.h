#ifndef __BINARY_EXPR_AST_H__
#define __BINARY_EXPR_AST_H__

#include "ExprAST.h"

class BinaryExpr : public ExprAST
{
	char Op;
	ExprAST* LHS, * RHS;
public:
	BinaryExpr(char op, ExprAST *lhs, ExprAST *rhs)
		: Op(op), LHS(lhs), RHS(rhs) {}

};

#endif // !__BINARY_EXPR_H__
