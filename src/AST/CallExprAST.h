#ifndef _CALL_EXPR_AST_H
#define _CALL_EXPR_AST_H

#include <memory>
#include <string>
#include <vector>

#include "ExprAST.h"

class CallExprAST : public ExprAST
{
public:
    CallExprAST(const std::string callee, std::vector<std::unique_ptr<ExprAST>> args)
        : callee(callee), args(std::move(args))    
    {
    }

private:
    std::string callee;
    std::vector<std::unique_ptr<ExprAST>> args;
};

#endif
