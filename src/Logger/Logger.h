#ifndef _LOGGER_H
#define _LOGGER_H

#include <memory>

class ExprAST;
class PrototypeAST;

class Logger
{
public:
    static std::unique_ptr<ExprAST> log_expr_error(const char* str);
    static std::unique_ptr<PrototypeAST> log_proto_error(const char* str);
};

#endif
