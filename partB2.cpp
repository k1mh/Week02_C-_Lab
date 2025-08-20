#include <iostream>
#include <string>

void revers(char text[]){
    size_t  length=sizeof(text)/sizeof(text[0]);
    std::cout<<"Reversed string  is :";
    for(int i=length;i>=0;i--){
        std::cout<<text[i];}
    }


int main(){

    char texts[20];
    std::cout<<"Enter  your text here: ";
   fgets(texts, sizeof(texts), stdin);
    revers(texts);
    return 0;
}