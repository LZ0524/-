#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=0;x<10;x++)
    {
        for(y=0;y<10;y++)
        {
            for(z=0;z<10;z++)
            {
                if((x*100+y*10+z*1)+(y*100+z*10+z*1)==532)
                {
                    printf("x=%d,y=%d,z=%d\n",x,y,z);
                }
            }
        }
    }
    return 0;
}
