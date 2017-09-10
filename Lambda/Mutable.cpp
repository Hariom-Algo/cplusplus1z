#include<iostream>

using namespace std;
int main()
{
    int count = 0;
    auto counter (
                  [=](int x) mutable  {return count =count+x; }
    );
    cout<<counter(3);
    cout<<count;
    
}
