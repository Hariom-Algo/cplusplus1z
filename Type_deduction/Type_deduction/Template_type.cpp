#include <iostream>

template <typename T>
void f(T& param){
    std::cout<<__PRETTY_FUNCTION__<<"\n";
}

template <typename N>
void func(N param){
    std::cout<<__PRETTY_FUNCTION__<<"\n";
}

template <typename M>
void funct(M&& param){
    std::cout<<__PRETTY_FUNCTION__<<"\n";
}
int main()
{
    int x =12;
    const int cx = x;
    const int& rx =x;
    const char* const ptr ="Hello How are you";
    f(x);
    f(cx);
    f(rx);
    f(ptr);
    
    func(x);
    func(cx);
    func(rx);
    func(ptr);
    
    funct(x);
    funct(cx);
    funct(rx);
    funct(ptr);
    
    
}

