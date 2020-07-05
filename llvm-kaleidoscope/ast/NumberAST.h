#ifndef __NUMBER_AST_H__
#define __NUMBER_AST_H__
#include "ExprAST.h"

class NumberAST : public ExprAST
{
	double Val;
public:
	NumberAST(double Val): Val(val) {}
};

#endif // !__NUMBER_AST_H__

