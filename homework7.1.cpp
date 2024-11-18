#include <iostream>

class Time;
class Watch
{
   int mode = 24;
   public:
      Watch()
      {}

      ~Watch()
      {}

      void show_watch(Time& t);
      void set_watch(Time& t, int h, int m, int s);
      void set_mode(int);
};

#include "time.hpp"

void Watch::show_watch(Time& t)
{
   int h = t.GetHours();
   if (mode == 12)
   {
      h %= mode;
   }
   std::cout << h << ":" << t.GetMinutes() << ":" << t.GetSeconds() << std::endl;
}

void Watch::set_watch(Time& t, int h, int m, int s)
{
   t.SetHours(h);
   t.SetMinutes(m);
   t.SetSeconds(s);
}

void Watch::set_mode(int mode)
{
   this->mode = mode;
}

class SimpleWatch
{
   int h = 0;
   int m = 0;
   int s = 0;

   public:
      SimpleWatch()
      {
         std::cout << "new SimpleWatch::object was constructed (default) " << '\n';
      }

      ~SimpleWatch()
      {
         std::cout << "SimpleWatch::object was deleted " << '\n';
      }

      void show_time(Time& t)
      {
         std::cout << t.GetHours() << ":" << t.GetMinutes() << ":" << t.GetSeconds() << std::endl;
      }

      void set_time(Time& t, int h, int m, int s)
      {
         t.SetHours(h);
         t.SetMinutes(m);
         t.SetSeconds(s);
      }
};

int main()
{
   Time t(2,12,2);

   SimpleWatch sw;
   sw.show_time(t);
   sw.set_time(t, 10, 10, 10);
   sw.show_time(t);

   Watch w;
   w.show_watch(t);
   w.set_watch(t, 21, 21, 21);
   w.show_watch(t);
   w.set_mode(12);
   w.show_watch(t);

   return 0;
}
