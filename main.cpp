#include "LispHeaders/tokenise.hpp"

int main (int argc, char **argv){
    std::cout<<"Starting the Lisp Interpreter!\n";

    TokenHandler tokenHandler;
    tokenHandler.tokenize("(begin (define r 10) (* pi (* r r)))");
    for(auto string : tokenHandler.tokens){
        std::cout<<string<<'\n';
    }
}