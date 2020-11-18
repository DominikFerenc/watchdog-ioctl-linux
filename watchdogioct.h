#include <iostream>
#include <fstream>
#include <linux/watchdog.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <getopt.h>
#include <string.h>
#include <errno.h>
#include <sys/io.h>
#include <unistd.h>


class WatchDogIoctl 
{
    private: 
        //bool file_is_open = false; 
        int file_watchdog;
        const char * path_to_file = "/dev/watchdog"; 
        const char * file_2 = "/home/dferenc/Pulpit/sipconfig.ini"; 
    public: 
        WatchDogIoctl(); 
        ~WatchDogIoctl(); 
        bool openFile(); 
        void ioctlLoop(bool isFileOpen); 
        bool file_is_open = false; 
}