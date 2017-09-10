#include<iostream>
#include<vector>

template <typename T> using myvec = std::vector<T>;

template<typename T>
void foo(T x)
{
    puts(__PRETTY_FUNCTION__);
    
}

int main()
{
    myvec<int> vec{1,2,3,4};
    foo(4);
    foo(4.2);
    foo("hello");
    foo(3*4.2);
    foo(vec);
}
