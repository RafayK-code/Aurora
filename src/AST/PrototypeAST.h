#ifndef _PROTOTYPE_AST_H
#define _PROTOTYPE_AST_H

#include <string>
#include <vector>

class PrototypeAST
{
public:
    PrototypeAST(const std::string& name, std::vector<std::string> args)
        : name(name), args(std::move(args))
    { 
    }

private:
    std::string name;
    std::vector<std::string> args;
};

#endif
