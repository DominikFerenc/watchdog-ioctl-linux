#include "watchdogioct.h"

WatchDogIoctl::WatchDogIoctl 
{
    
    is_file_open = openFile(); 
    ioctlLoop(is_file_open); 

}

WatchDogIoctl::~WatchDogIoctl() {}

bool WatchDogIoctl::openFile()
}
 
  bool file_is_open = false; 
  
  //file.open(file_2, std::ios::in | std::ios::out);
  file_watchdog = open(dev, O_RDWR);
  if (file_watchdog >= -1)
  {
    std::cout << "File is open" << std::endl; 
    file_is_open = true; 
  } 
  else 
  {
    std::cout << "File not open" << std::endl; 
    file_is_open = false; 
  }

  int fd = file.rdbuff()
  return file_is_open; 
}

void WatchDogIoctl::ioctlLoop(bool is_file_open) 
{
  if (is_open_file)
  {
    while (1) 
    {
      ioctl(file_watchdog, WDIOC_KEEPALIVE, 0);
      std::cout << "Working.." << std::endl;
      std::cout << "goo function: " << std::endl; 
      sleep(3);
    }
  }
}

int main()
{
    
    

     //char * dev = WATCHDOGDEV;
     int interval = 0;
     char kick_watchdog = 0;
     int fd;

   /*if (fd = open(dev, O_RDWR) < -1){

   }*/

  WatchDogIoctl watchDog; 
  
  return 0;
}
