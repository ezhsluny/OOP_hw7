#ifndef WALLCLOCKCLASS_HPP
#define WALLCLOCKCLASS_HPP

#include <iostream>
#include "cuckoo_clock.hpp"

class Wall_clock : public Cuckoo_clock
{
    public:
    Wall_clock()
    {
        std::cout << "Wall_clock::obj was constructed (def)" << std::endl;
    }
    Wall_clock(const Wall_clock&)
    {
        std::cout << "Wall_clock::obj was constructed (copy)" << std::endl;
    }
    ~Wall_clock()
    {
        std::cout << "Wall_clock::obj was deleted" << std::endl;
    }
};

#endif