#ifndef __FUNCTION_AST_H__
#define __FUNCTION_AST_H__

#include "ExprAST.h"
#include "PrototypeAST.h"

class FunctionAST
{
	PrototypeAST* Proto;
	ExprAST* Body;
public:
	FunctionAST(PrototypeAST* proto, ExprAST* body)
		: Proto(proto), Body(body) {}
};


#endif // !__FUNCTION_AST_H__

