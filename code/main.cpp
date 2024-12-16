#include <iostream>
#include <string>
#include "log.h"
#include "enum_ref.h"
enum Color {
    RED,GREEN,BLUE,PINK,YELLOW
};

int main()
{
   
  /*  std::cout << "Hello World " << std::endl;
    LOG("Hello");*/
     Color red = (Color)2;
    std::string name = get_type_name<Color>();
   
    std::string enum_name = get_enum_name <char,1>();
    //OUT(name);
    OUT(enum_name);
    return 0;
}
