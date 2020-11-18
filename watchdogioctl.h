#ifndef WATCHDOGIOCTL_H
#define WATCHDOGIOCTL_H
#include <iostream>
#include <fstream>
#include <linux/watchdog.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/io.h>
#include <unistd.h>
#include <sys/ioctl.h>


class WatchDogIoctl
{
    private:
        bool file_is_open = false;
        int file_watchdog;
        const char * path_to_watchdog_file = "/dev/watchdog";
    public:
        WatchDogIoctl();
        ~WatchDogIoctl();
        bool openFile();
        void ioctlLoop(bool isFileOpen);
        //bool file_is_open = false;
};

#endif // WATCHDOGIOCTL_H
