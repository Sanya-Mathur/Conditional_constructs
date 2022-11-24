#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    { printf("Hello\n");
        if(i==3)
        {
            if(j==3)
            {
                break;
            }
        }
    }
}
}
