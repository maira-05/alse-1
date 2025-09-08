#include <iostream>
#define DEBUG
//using namespace std(solo para el cin sino se pone std::cin)
long double largeDecimal=0x1452579F12C58781;//0b110010
int main(){
    int height=1.8;
    char character='H';
    bool opened=false;
    unsigned int count=0;
    short score=0;
    int x, y;

int aux;
std::cout<<"Enter two numbers\n ";
std::cin >>x>>y;
aux =x;
x=y;
y = aux;
std::cout <<"X:" <<x<< "Y" <<y << std::endl;
std::cout <<"Global variable :" <<largeDecimal<<std::endl;
std::cout <<"Float variable:" <<height<<std::endl;
std::cout <<"Character variable:" <<character<<std::endl;
return 0; 
}