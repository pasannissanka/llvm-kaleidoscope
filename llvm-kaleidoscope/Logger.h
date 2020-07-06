#ifndef __LOGGER_H__
#define __LOGGER_H__

#include "ExprAST.h"
#include "PrototypeAST.h"
#include "FunctionAST.h"

ExprAST* Error(const char* Str);
PrototypeAST* ErrorP(const char* Str);
FunctionAST* ErrorF(const char* Str);

#endif