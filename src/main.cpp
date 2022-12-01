#include "Duration.h"
#include <cstdio>
#include <cassert>
// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    printf("\n");
    Duration d;
    printf("%d", d.getduration());

    assert(d.getduration() == 0);
    d.tick();
    assert(d.getduration() == 1);
    d.tick();
    assert(d.getduration() == 2);
    d.tick(4);
    assert(d.getduration() == 6);
    d.setAlarm(8);
    assert(d.tick() == false);
    assert(d.tick() == true);
    assert(d.tick() == false);

    Duration d2(5);
    d2.setAlarm(9);
    assert(d2.tick(4) == true);
    assert(d2.tick(4) == false);

    printf("\n");

    return 0;
}