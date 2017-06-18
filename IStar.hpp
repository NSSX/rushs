#ifndef ISTAR_HPP
# define ISTAR_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include <unistd.h>

class IStar{

public:
    virtual ~IStar() {}
    virtual  void		moveStar(clock_t startTime, int lvl) = 0;
  	virtual void		dpStar(void) = 0;
};

#endif
