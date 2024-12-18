#include <iostream>
#include <string>
#include "log.h"
#include "enum_ref.h"
enum Color {
    RED = 1,GREEN,BLUE,PINK,YELLOW
};

int main()
{
   
  /*  std::cout << "Hello World " << std::endl;
    LOG("Hello");*/
     Color red = (Color)2;
    std::string name = get_type_name<Color>();
   
    std::string enumName = enum_name<Color>(red);
    //OUT(name);
    OUT(enumName);
    return 0;
}
