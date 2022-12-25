#include <stdio.h>
typedef enum{HP=101,WBL=112,HDD=121,PB=102,RTR=122,PTR=221,LS=103,LP=333}Electronics;
int main()
{
 Electronics pid;
 scanf("%u",&pid);
 if(pid==HP) printf("Headphones");
 else if(pid==WBL) printf("Wearable Watches");
 else if(pid==HDD)printf("Hard Disk");
 else if(pid==PB)printf("Powerbanks");
 else if(pid==RTR)printf("Routers");
 else if(pid==PTR)printf("Printers");
 else if(pid==LS)printf("Lens");
 else printf("Laptops");
return 0;
}
