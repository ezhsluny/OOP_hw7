#include <iostream>
#include "clock.hpp"
#include "wall_clock.hpp"
#include "cuckoo_clock.hpp"
#include "pendulum_clock.hpp"
#include "watch.hpp"
#include "smart_watch.hpp"



// часы с кукушкой (cuckoo_clock), настенные часы (wall_clock), наручные часы (watch), смарт-часы (smart_watch) 


int main()
{
    Cuckoo_clock ck;
    ck.SetClock(Time(4,0,0));
    ck.cuckoo_sound();
    std::cout << "\n\n" << std::endl;

    Wall_clock wc;
    wc.SetClock(Time(2,12,32));
    wc.cuckoo_sound();
    std::cout << "\n\n" << std::endl;
    
    Pendulum_clock pc;
    pc.SetClock(Time());
    pc.show_pendulum();
    std::cout << "\n\n" << std::endl;

    Watch w;
    w.SetClock(Time());
    w.show_watch();
    std::cout << "\n\n" << std::endl;

    Smart_watch sw;
    sw.show_watch();
    sw.SetClock(Time(3,0,0));
    Time t = sw.GetTime();
    t.PrintTime();
    sw.CountSteps(10000);
    sw.Measure_HR(103);
    sw.smart_watch();
    std::cout << "\n\n" << std::endl;

    return 0;
}