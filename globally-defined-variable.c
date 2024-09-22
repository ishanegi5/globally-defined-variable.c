#include<stdio.h>

int n=17;

int fun()

{ n++;

return n;

}

int fun1()

{ n=7;
 
n++;
 
return n;

}

int main()

{ printf("%d ",fun());
  
printf("%d ",fun());
  
printf("%d \n",fun());
  
printf("%d ",fun1());
  
printf("%d ",fun1());
  
printf("%d ",fun1());

return 0;

}
