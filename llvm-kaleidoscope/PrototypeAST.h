#ifndef __PROTOTYPE_AST_H__
#define __PROTOTYPE_AST_H__

#include <string>
#include <vector>

class PrototypeAST
{
	std::string Name;
	std::vector<std::string> Args;
public:
	PrototypeAST(const std::string& name, const std::vector<std::string>& args)
		: Name(name), Args(args) {}
};


#endif // !__PROTOTYPE_AST_H__
