#include <iostream>
#include "parser.h"
using std::cin;
using std::cout;
int main(void) {
    Parser parse;
    try{
        parse.expr();
    }catch (SyntaxError){
        cout << "^\n";
        cout << "syntax error";
    }
    cout << std::endl;
    return 0;
}