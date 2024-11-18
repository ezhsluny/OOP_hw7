#ifndef CLOCKCLASS_HPP
#define CLOCKCLASS_HPP

#include "time.hpp"
#include <iostream>

class Clock
{
    Time t;
    public:
    Clock()
    {
        std::cout << "Clock::obj was constructed (def)" << std::endl;
    }
    Clock(const Clock&)
    {
        std::cout << "Clock::obj was constructed (copy)" << std::endl;
    }
    ~Clock()
    {
        std::cout << "Clock::obj was deleted" << std::endl;
    }
    Clock(int h, int m, int s) : t(Time(h,m,s))
    {
        std::cout << "Clock::obj was constructed (init with int)" << std::endl;
    }
    Clock(const Time& time) : t(time)
    {
        std::cout << "Clock::obj was constructed (init with Time::obj)" << std::endl;
    }
    Time GetTime()
    {
        return t;
    }
    void SetClock(const Time& time)
    {
        t.SetHours(time.GetHours());
        t.SetMinutes(time.GetMinutes());
        t.SetSeconds(time.GetSeconds());
    }
};

#endif