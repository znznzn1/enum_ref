#ifndef ENUM_REF_H
#define ENUM_REF_H



template <class T>
std::string get_type_name() {
#if defined(__GNUC__) 
    //std::string enum_name(T&)[with T = Color&; std::string = std::__cxx11::basic_string<char>]
    std::string func = __PRETTY_FUNCTION__;
    auto begin = func.find("T =");
    begin += 4;
    auto end = func.find(";", begin);
    std::string name = func.substr(begin, end - begin);
    return name;
#elif defined(_MSC_VER) 
    //class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl get_type_name<enum Color>(void)
    std::string func = __FUNCSIG__;
    auto begin = func.find("get_type_name");
    begin += 14;
    auto end = func.find(">(", begin);
    std::string name = func.substr(begin, end - begin);
    return name;
#endif
}

template<class T,T N>
std::string get_enum_name() {
#if defined(__GNUC__) 
    //std::string enum_name(T&)[with T = Color&; std::string = std::__cxx11::basic_string<char>]
    std::string func = __PRETTY_FUNCTION__;
    auto begin = func.find("N =");
    begin += 4;
    auto end = func.find(";", begin);
    std::string name = func.substr(begin, end - begin);
    return name;
#elif defined(_MSC_VER) 
    //class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl get_enum_name<enum Color,GREEN>(void)
    std::string func = __FUNCSIG__;
    auto begin = func.find("get_enum_name");
    begin += 14;
    auto mid = func.find(",", begin);
    mid += 1;
    auto end = func.find(">", mid);
    std::string name = func.substr(mid, end - mid);
    return name;
#endif

}


#endif // !ENUM_REF_H
