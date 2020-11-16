#include<stdio.h>
void changement(int *p1,int*p2);

int main(){
    int a,b; 
printf("donner a et b :\n");
scanf("%d%d",&a,&b);
changement(&a,&b);
printf ("les valeurs apres la permutation sont %d %d",a,b);


}

void changement(int *p1,int *p2){
int aux;
if (*p1 * *p2>0)
{
    aux=*p1;
    *p1=*p2;
    *p2=aux;
}else{
    aux=*p1;
    *p1=*p1 + *p2;
    *p2=aux * *p2;
    
}
//printf("les valeurs apres la permutation sont :%d %d",*p1,*p2);

}