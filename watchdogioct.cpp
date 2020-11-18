#include "watchdogioctl.h"

WatchDogIoctl::WatchDogIoctl()
{
    file_is_open = openFile();
    ioctlLoop(file_is_open);
}

WatchDogIoctl::~WatchDogIoctl() {}

bool WatchDogIoctl::openFile()
{
  file_watchdog = open(path_to_watchdog_file, O_RDWR);
  if (file_watchdog >= -1)
  {
    std::cout << "The file was opened correctly" << std::endl;
    file_is_open = true;
  }
  else
  {
    std::cout << "The file did not open correctly." << std::endl;
    file_is_open = false;
  }
  return file_is_open;
}

void WatchDogIoctl::ioctlLoop(bool is_file_open)
{
  if (file_is_open)
  {
    while (true)
    {
      ioctl(file_watchdog, WDIOC_KEEPALIVE, 0);
      std::cout << "I'm working.." << std::endl;
      sleep(3);
    }
  }
  close(file_watchdog);
}


