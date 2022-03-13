#include <iostream>
#include <cctype>
#include "parser.h"

using std::cin;
using std::cout;

Parser::Parser() {
    lookahead = cin.get();
}

void Parser::expr(){
    term();
    while(true) {
        if( lookahead == '+' ) {
            match('+'); term(); cout << ('+');
        }
        else if( lookahead == '-' ) {
            match('-'); term(); cout << ('-');
        }
        else return;
    }
}

void Parser::term() {
    if (isdigit((char) lookahead)){
        cout << (char) lookahead;
        match(lookahead);
    }else throw SyntaxError{};
}

void Parser::match(int t) {
    if( lookahead == t ) lookahead = cin.get();
    else throw SyntaxError{};
}

