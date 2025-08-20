#include <iostream>
#include <string>

int countword( const std::string& str){
int j = 0;
for (char c : str){
    if(c ==' '){
j++;
    }}
    return j+1;
}

int  main(){
    std::string text;
    std::cout<<"Enter a string:";
    std::getline(std::cin, text);
   int result = countword(text);
std::cout<<"So there  are "<<result<<" "<<"words";
return 0;
}