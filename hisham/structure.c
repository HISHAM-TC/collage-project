#include<stdio.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};
int main(){
    struct time t1,t2,result;
    printf("enter first time\n");
    scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
    printf("\nenter 2nd time:\n");
    scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
    result.hours=t1.hours+t2.hours;
    result.minutes=t1.minutes+t2.minutes;
    result.seconds=t1.seconds+t2.seconds;
    result.seconds %=60;
    result.minutes %=60;
    printf("%02d:%02d:%02d",result.hours,result.minutes,result.seconds);
    return 0;
}
    
