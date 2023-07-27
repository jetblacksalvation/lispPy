#include "../LispHeaders/tokenise.hpp"

void TokenHandler:: tokenize(std::string string){
    std::string buffer;
    for (auto& character : string){
        if (isalnum(character) && seperateTokensBy.find(character)==std::string::npos){
            //append to buffer tokens until it is in sperate tokens by...
            buffer += character;
        }
        else{
            if( character != ' ' && seperateTokensBy.find(character)!=std::string::npos){
                if (buffer.size() >0){
                    tokens.push_back(buffer);

                }
                //
                tokens.emplace_back(1,character);
                //do not push, if ' ' !
            }
            buffer = "";
        }
        // if (isalnum(character) && std::find(std::begin(seperateTokensBy), std::end(seperateTokensBy), character));

    }
    //accumilate string if char is not in seperateTokensBy and is alphanumeric aka visable ...
}
