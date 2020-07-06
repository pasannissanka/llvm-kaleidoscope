#ifndef __NUMBER_EXPR_AST_H__
#define __NUMBER_EXPR_AST_H__

#include "ExprAST.h"


class NumberExprAST :
    public ExprAST
{
    double Val;
public:
    NumberExprAST(double val) : Val(val) {}
};


#endif // !__NUMBER_EXPR_AST_H__
