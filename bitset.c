#include <stdio.h>

int bit_set()
{     
    int x;
    int ps;
    return (x |(1<<ps));   //for set a perticular bit
    // return (x &(~(1<<ps));   //for reset bit
}

int main()
{
     int Data=00;
      int ps =0;
   
    printf("Data = 0x%x\n\n",Data);
    printf("Enter the position to set a bit  = ");
    scanf("%d",&ps);

    Data = bit_set(Data,ps);
    printf("\n\n%dth Bit Set Now Data will be = 0x%x\n",ps,Data);

    return 0;
}
