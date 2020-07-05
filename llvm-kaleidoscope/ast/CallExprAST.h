#ifndef __CALL_EXPR_H__
#define __CALL_EXPR_H__

#include "ExprAST.h"

class CallExprAST : public ExprAST
{
	std::string Callee;
	std::vector<ExprAST*> Args;
public:
	CallExprAST(const std::string &callee, std::vector<ExprAST*> &args)
		: Callee(callee), Args(args) {}
};

#endif // !__CALL_EXPR_H_
