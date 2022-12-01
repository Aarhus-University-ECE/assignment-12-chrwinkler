// Showing what is public and what is privat.

#ifndef _Duration_H_
#define _Duration_H_

class Duration
{
private:
    int time;
    int alarm;
    bool alarmHasBeenSet;       // Alarm
    bool checkAndUpdateAlarm(); // update alarm

public:
    Duration();           // cunstructor
    Duration(int t);      // cunstructor
    int getduration();    // Initialize
    bool tick();          // adds 1
    bool tick(int dt);    // Sums
    void setAlarm(int a); // Set Alarm
};

#endif
