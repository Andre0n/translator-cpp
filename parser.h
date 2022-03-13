
class SyntaxError {};
class Parser
{
private:
    
    void term();
    void match(int t);

public:
    int lookahead;
    Parser();
    void expr();
    
};
