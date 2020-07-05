
#include <string>

class PrototypeAST
{
	std::string Name;
	std::vector<std::string> Args;
public:
	ProtypeAST(const std::string &name, const std::vector<std::string> &args)
		: Name(name), Args(args) {}
};
