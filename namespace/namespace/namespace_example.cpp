//
//  main.cpp
//  namespace
//
//  Created by Hariom Singh on 9/9/17.
//  Copyright © 2017 Hariom Singh. All rights reserved.
//

#include <iostream>

namespace unit
{
    inline namespace unit1
    {
        void display()
        {
            std::cout<<"Hello inside unit1"<<"\n";
        }
    }
    namespace unit2
    {
        void display()
        {
            std::cout<<"Hello inside unit2"<<"\n";
        }
    }
}

int main() {
    unit::display();
    unit::unit2::display();

    return 0;
}
