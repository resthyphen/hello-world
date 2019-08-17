#include<stdio.h>
//#include"declare.h"


main(){
       int x, y, z;
       printf("please input the integers of x,y,z");
       scanf("%d%d%d", &x, &y, &z);
       printf("max = %d", max(x,y,z));
       printf("min = %d", min(x,y,z));
       }
        
