#include <time.h>
#include <stdio.h>
#include <windows.h>
int main()
{
    double start=0, end=0, timing=0;
    int i=0;
    if(i<60)
    {
        i++;
        
        start = clock();
    
        sleep(1000);
    
        end = clock();
   
        timing = timing + (double)(end-start)/CLOCKS_PER_SEC;
    
        printf("%lf\n", timing);
    
        system("cls");
    }     // bisher ist es der Zwerk,dis millis-funktion zu realisieren.
    runTests();//es testet,ob wirklich genau 60s gelaufen ist.
    return 0;
}