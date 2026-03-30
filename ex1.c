
#include <stdio.h>
int main(){
    int sub;
    
    printf("enter the subjects code in which you are passed\n");
    printf(" enter 101 for maths\n");
    printf(" enter 201 for science\n");
    printf(" enter 301 for both maths and science\n");

    scanf("%d", &sub);
    if (sub == 101)
    {
        printf("you will get a kitkat");
    }
    else if (sub == 201)
    {
        printf("you will get a dairy milk");
    }
    else if (sub == 301)
    {
        printf("you will get a ferrero");
    }
    
    else
    {
      printf("work hard");
    }
    
    return 0;
}