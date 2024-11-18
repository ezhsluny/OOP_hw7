#ifndef CUCKOOCLOCKCLASS_HPP
#define CUCKOOCLOCKCLASS_HPP


#include <iostream>
#include "clock.hpp"

class Cuckoo_clock : public Clock
{
    public:
    Cuckoo_clock()
    {
        std::cout << "Cuckoo_clock::obj was constructed (def)" << std::endl;
    }
    Cuckoo_clock(const Cuckoo_clock&)
    {
        std::cout << "Cuckoo_clock::obj was constructed (copy)" << std::endl;
    }
    ~Cuckoo_clock()
    {
        std::cout << "Cuckoo_clock::obj was deleted" << std::endl;
    }

    void cuckoo_sound()
    {
        Time time = GetTime();
        int h = time.GetHours();
        int m = time.GetMinutes();
        int s = time.GetSeconds();

        if (m == 0 && s == 0)
            for (int i = 0; i < h; ++i)
                std::cout << "Cuckoo!" << std::endl;
    }
};

#endif