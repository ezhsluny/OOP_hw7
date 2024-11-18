#ifndef SMARTWATCHCLOCKCLASS_HPP
#define SMARTWATCHCLOCKCLASS_HPP

#include <iostream>
#include "clock.hpp"
#include "watch.hpp"


class Smart_watch : public Watch
{
    int steps = 0;
    int heart_rate = 0;

    public:
    Smart_watch()
    {
        std::cout << "Smart_watch::obj was constructed (def)" << std::endl;
    }
    Smart_watch(const Smart_watch&)
    {
        std::cout << "Smart_watch::obj was constructed (copy)" << std::endl;
    }
    ~Smart_watch()
    {
        std::cout << "Smart_watch::obj was deleted" << std::endl;
    }
    void CountSteps(int n)
    {
        steps = n;
    }
    void Measure_HR(int hr)
    {
        heart_rate = hr;
    }
    void smart_watch()
    {
        std::cout << "steps: " << steps << " heart rate: " << heart_rate << std::endl;
    }
};


#endif