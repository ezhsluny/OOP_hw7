#ifndef WATCHCLOCKCLASS_HPP
#define WATCHCLOCKCLASS_HPP

#include <iostream>
#include "clock.hpp"


class Watch : public Clock
{
    public:
    Watch()
    {
        std::cout << "Watch::obj was constructed (def)" << std::endl;
    }
    Watch(const Watch&)
    {
        std::cout << "Watch::obj was constructed (copy)" << std::endl;
    }
    ~Watch()
    {
        std::cout << "Watch::obj was deleted" << std::endl;
    }

    void show_watch()
    {
        std::string watch = "-----------------------\n|                     |\n|          |          |\n|          |          |\n|          |______    |\n|                     |\n|                     |\n|                     |\n-----------------------\n";
        std::cout << watch << std::endl;
    }
};


#endif