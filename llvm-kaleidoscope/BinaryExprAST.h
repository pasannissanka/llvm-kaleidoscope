
#ifndef __BINARY_EXPR_AST_H__
#define __BINARY_EXPR_AST_H__

#include "ExprAST.h"
class BinaryExprAST :
    public ExprAST
{
    char Op;
    ExprAST* LHS, * RHS;

public:
    BinaryExprAST(char op, ExprAST* lhs, ExprAST* rhs)
        : Op(op), LHS(lhs), RHS(rhs) {}
};

#endif // !__BINARY_EXPR_AST_H__
