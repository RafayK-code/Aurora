#ifndef _NUMBER_EXPR_AST_H
#define _NUMBER_EXPR_AST_H

#include "ExprAST.h"

class NumberExprAST : public ExprAST
{
public:
    NumberExprAST(double val)
        : val(val)
    {
    }

private:
    double val;
};

#endif
