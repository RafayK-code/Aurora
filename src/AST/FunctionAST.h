#ifndef _FUNCTION_AST_H
#define _FUNCTION_AST_H

#include <memory>

#include "PrototypeAST.h"
#include "ExprAST.h"

class FunctionAST
{
public:
    FunctionAST(std::unique_ptr<PrototypeAST> proto, std::unique_ptr<ExprAST> body)
        : proto(std::move(proto)), body(std::move(body)) 
    { 
    }

private:
    std::unique_ptr<PrototypeAST> proto;
    std::unique_ptr<ExprAST> body;
};

#endif
