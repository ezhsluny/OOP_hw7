#ifndef PENDULUMCLOCKCLASS_HPP
#define PENDULUMCLOCKCLASS_HPP


#include <iostream>
#include "wall_clock.hpp"


class Pendulum_clock : public Wall_clock
{
    public:
    Pendulum_clock()
    {
        std::cout << "Pendulum_clock::obj was constructed (def)" << std::endl;
    }
    Pendulum_clock(const Pendulum_clock&)
    {
        std::cout << "Pendulum_clock::obj was constructed (copy)" << std::endl;
    }
    ~Pendulum_clock()
    {
        std::cout << "Pendulum_clock::obj was deleted" << std::endl;
    }
    void show_pendulum()
    {
        std::string pendulum = "  |\n   |\n    |\n     |\n   *****\n   *   *\n   *****\n";
        std::cout << pendulum << std::endl;
    }
};

#endif