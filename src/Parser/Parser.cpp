#include "Parser.h"

#include <Logger/Logger.h>

namespace
{
    std::unique_ptr<ExprAST> parse_number_expr();
    std::unique_ptr<ExprAST> parse_paren_expr();
    std::unique_ptr<ExprAST> parse_id_expr();
}

std::unique_ptr<ExprAST> Parser::parse_primary()
{
    switch (Lexer::get_cur_token())
    {
    case tok_id:
        return ::parse_id_expr();
        break;
    case tok_number:
        return ::parse_number_expr();
        break;
    case '(':
        return ::parse_paren_expr();
        break;
    default:
        return Logger::log_expr_error("unknown token when expecting an expression");
        break;
    }
}
