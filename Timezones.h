#ifndef TIMEZONES_H
#define TIMEZONES_H

#include <vector>
#include <gtk/gtk.h>

#include "Boxable.h"
#include "Clock.h"


class Timezones : public Boxable
{
public:
    Timezones();
    ~Timezones();

    void updateTime();

protected:
    vector<Clock*> clocks;

};

#endif