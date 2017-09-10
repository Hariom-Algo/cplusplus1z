//
//  main.cpp
//  cplus_plus
//
//  Created by Hariom Singh on 8/26/17.
//  Copyright © 2017 Hariom Singh. All rights reserved.
//

#include<iostream>
#include<string>
#include<map>
#include<algorithm>

int main()
{
    std::map<char,int> counterOfChar;
    std::string My("Once upon a time there was a lion who was very funny in reading text and counting them");
    std::for_each(My.begin(), My.end(), [&counterOfChar](const char& n)
                  {   //'if' initialization statements are a C++1z extension
                      
                      if (auto [iter,success] = counterOfChar.insert(std::make_pair(toupper(n),1) ) ;success == false)
                      {
                          counterOfChar[iter->first] = ++iter->second;
                      }
                  });
    for (const auto &[character,count]:counterOfChar)
    {
        std::cout<<character<<" "<<count<<std::endl;
    }
    return 0;
}
