#include<stdio.h>
int main()
{
    float x;
    printf("GIVE any real number ");
    scanf("%f",&x);
    if(x>=0){
        printf("%f",x);}
        else{
            x=(-1)*x;
            printf("%f",x);
        }
        while (getchar() != '\n'); 
    getchar();
}