
#ifndef LOG_H
#define LOG_H

#if defined(_MSC_VER) 
#define LOG(x) (std::cout<< __FILE__ << ": " << __LINE__ << ": " <<__FUNCSIG__ << "(): " << (x)<< std::endl)
#elif defined(__GNUC__) || defined (__clang__)
#define LOG(x) (std::cout<< __FILE__ << ": " << __LINE__ << ": " <<__PRETTY_FUNCTION__ << "(): " << (x)<< std::endl)
#else
#define LOG(x) (std::cout << "unsupport complier ! we only support msvc,gcc and clang now")
#endif

#define OUT(x) (std::cout << (x) << std::endl)
#endif // !LOG_H

