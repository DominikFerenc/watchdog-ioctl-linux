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
#include <watchdogioctl.h>



//using namespace std;

int openFile()
{
  const char * path_to_file = "/dev/watchdog";
  std::fstream file;
  file.open(path_to_file, std::ios::in | std::ios::out);

}

int main()
{
  WatchDogIoctl watchDog;
  return 0;
}
