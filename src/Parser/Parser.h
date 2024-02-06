#ifndef _PARSER_H
#define _PARSER_H

#include <memory>

#include <Lexer/Lexer.h>
#include <AST/ExprAST.h>

class Parser 
{
public:
    static std::unique_ptr<ExprAST> parse_primary();
};

#endif
