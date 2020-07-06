#ifndef __VARIABLE_EXPR_AST_H__
#define __VARIABLE_EXPR_AST_H__

#include "ExprAST.h"
#include <string>

class VariableExprAST :
    public ExprAST
{
    std::string Name;
public:
    VariableExprAST(const std::string& name) : Name(name) {}
};



#endif // !__VARIABLE_EXPR_AST_H__
