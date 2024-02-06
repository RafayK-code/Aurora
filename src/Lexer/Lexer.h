#ifndef _LEXER_H
#define _LEXER_H

#include <string>

enum Token
{
    tok_eof = -1,
    tok_fn = -2,
    tok_extern = -3,

    tok_id = -4,
    tok_number = -5,
};

class Lexer
{
public:
    static int gettok();
    static int get_next_token();
    static int get_cur_token();

    static const std::string& get_identifier();

    static double get_number();
    
private:
    static std::string id_str;
    static double num_val;

    static int cur_tok;
};

#endif
