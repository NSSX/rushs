#ifndef ISTONE_HPP
# define ISTONE_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include <unistd.h>

class IStone{

public:
      virtual ~IStone() {}
    virtual void					moveStone(clock_t startTime, int lvl) = 0;
  	virtual void					dpStone(void) = 0;
};

#endif
