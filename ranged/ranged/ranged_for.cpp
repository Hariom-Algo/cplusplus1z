#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include<string>


using namespace std;
int main()
{
    vector<int> val {1,2,3,4,5};
    vector<string >hexvec;
    for(auto x:val)
    {
        std::istringstream s;
        s >> std::setbase(16)>>x;
   }
 }
