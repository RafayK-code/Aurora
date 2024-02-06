#ifndef _BINARY_EXPR_AST_H
#define _BINARY_EXPR_AST_H

#include <memory>

#include "ExprAST.h"

class BinaryExprAST : public ExprAST
{
public:
    BinaryExprAST(char op, std::unique_ptr<ExprAST> lhs, std::unique_ptr<ExprAST> rhs)
        : op(op), lhs(std::move(lhs)), rhs(std::move(rhs))
    {
    }

private:
    char op;
    std::unique_ptr<ExprAST> lhs;
    std::unique_ptr<ExprAST> rhs;
};

#endif
