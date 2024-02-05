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

    static const std::string& get_identifier();
    static void set_identifier(const std::string& id);

    static double get_number();
    static void set_number(double num);
    
private:
    static std::string id_str;
    static double num_val;
};

#endif
