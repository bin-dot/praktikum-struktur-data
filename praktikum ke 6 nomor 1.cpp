/* sitti aulia sabina rahmannissa / 2020B MI / 016 */
#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("SITTI AULIA SABINA RAHMANNISSA\n");
 printf("20051397016\n");
 printf("MI_B_2020\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
