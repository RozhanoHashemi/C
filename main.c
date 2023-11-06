#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x1,x2,y1,y2;

    scanf(" %f%f%f%f",&x1,&y1,&x2,&y2);

  if (x1==x2)

  printf("Vertical");

  else if(y1==y2)
printf("Horizontal");

else

    printf("Try again");


return 0;
}
