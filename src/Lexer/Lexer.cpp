#include "Lexer.h"
#include <cctype>
#include <cstdio>
#include <cstdlib>

std::string Lexer::id_str = "";
double Lexer::num_val = 0;
int Lexer::cur_tok = 0;

int Lexer::gettok()
{
    static int last_char = ' ';

    while (isspace(last_char))
        last_char = getchar();

    if (isalpha(last_char))
    {
        id_str = last_char;
        while (isalnum((last_char = getchar())))
            id_str += last_char;

        if (id_str == "fn")
            return tok_fn;

        if (id_str == "extern")
            return tok_extern;

        return tok_id;
    }

    if (isdigit(last_char) || last_char == '.')
    {
        std::string num_str;

        do 
        {
            num_str += last_char;
            last_char = getchar();
        }
        while (isdigit(last_char) || last_char == '.');

        num_val = strtod(num_str.c_str(), 0);
        return tok_number;
    }

    if (last_char == '#')
    {
        do 
        {
            last_char = getchar();
        }
        while (last_char != EOF && last_char != '\n' && last_char != '\r');

        if (last_char != EOF)
            return gettok();
    }

    if (last_char == EOF)
        return tok_eof;

    int this_char = last_char;
    last_char = getchar();
    return this_char;
}

int Lexer::get_next_token()
{
    return cur_tok = gettok();
}

int Lexer::get_cur_token()
{
    return cur_tok;
}

const std::string& Lexer::get_identifier()
{
    return id_str;
}

double Lexer::get_number()
{
    return num_val;
}
