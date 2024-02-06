#ifndef _VARIABLE_EXPR_AST_H
#define _VARIABLE_EXPR_AST_H

#include <string>

#include "ExprAST.h"

class VariableExprAST : public ExprAST
{
public:
    VariableExprAST(const std::string& name)
        : name(name)
    {
    }

private:
    std::string name;
};

#endif
