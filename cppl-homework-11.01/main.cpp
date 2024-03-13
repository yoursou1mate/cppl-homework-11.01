//
//  main.cpp
//  cppl-homework-11.01
//
//  Created by a1ex on 3/8/24.
//

#include <iostream>
#include <vector>
#include <string>

template <class T>
std::vector<T> move_vectors(std::vector<T>& v1, std::vector<T>& v2)
{
        std::vector<T> tmp = std::move(v2);
        v2 = std::move(v1);
        v1 = std::move(tmp);
    return v2;
}

int main(int argc, const char * argv[]) {
    
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    
    
    std::cout << "Vector 1: " << '\n';
    for(int i = 0; i < one.size(); ++i)
    {
        std::cout << one[i] << '\n';

    }
    
    move_vectors(one,two);
    
    std::cout << "Vector 2: " << '\n';
    for(int i = 0; i < two.size(); ++i)
    {
        std::cout << two[i] << '\n';
    }
   
    

    
    return 0;
}
