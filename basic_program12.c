// TO check size of data types

#include<stdio.h>
void main(){
int a= 4;
float b=1.5255;
double c= 1.356562359;
long int f=1.025565623;
char d='y';
char e='z';
printf(" int %d Bytes\n",sizeof(a));
printf(" float %d Bytes\n",sizeof(b));
printf(" double %d Bytes\n",sizeof(c));
printf(" char %d Bytes\n",sizeof(d));
printf(" char %d Bytes\n",sizeof(e));
printf(" long int %d Bytes\n",sizeof(f));
}