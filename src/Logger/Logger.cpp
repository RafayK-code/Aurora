#include "Logger.h"

#include <AST/ExprAST.h>
#include <AST/PrototypeAST.h>

#include <cstdio>

std::unique_ptr<ExprAST> Logger::log_expr_error(const char *str)
{
    fprintf(stderr, "Error: %s\n", str);
    return nullptr;
}

std::unique_ptr<PrototypeAST> Logger::log_proto_error(const char *str)
{
    fprintf(stderr, "Error: %s\n", str);
    return nullptr;
}
