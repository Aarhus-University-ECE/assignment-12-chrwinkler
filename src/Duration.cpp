#include "Duration.h"
#include <cassert>

// File for sandboxing and trying out code
int Duration::getduration()
{
    return time;
}

Duration::Duration()
{
    time = 0;
    alarm = -1;
    alarmHasBeenSet = false;
}

Duration::Duration(int t)
{
    assert(t > 0);
    time = t;
    alarm = -1;
    alarmHasBeenSet = false;
}

bool Duration::tick()
{
    time += 1;
    return checkAndUpdateAlarm();
}

bool Duration::tick(int dt)
{

    assert(dt > 0);
    time += dt;
    return checkAndUpdateAlarm();
}

void Duration::setAlarm(int a)
{
    assert(a > time);
    alarm = a;
    alarmHasBeenSet = true;
}

bool Duration::checkAndUpdateAlarm()
{
    if (alarmHasBeenSet == true && time >= alarm)
    {
        alarmHasBeenSet = false;
        return true;
    }
    else
    {
        return false;
    }
}