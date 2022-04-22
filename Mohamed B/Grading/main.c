#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grade;
    printf("Grade is:\n");
    scanf("%d", &grade);
    if(grade>=90){
        printf("\n You got A");
    }
    else if(grade>=80&&grade<90){
        printf("\nYou got B");
    }
    else if(grade>=70&&grade<80){
        printf("\nYou got c");
    }
    else if(grade>=60&&grade<70){
        printf("\nYou got D");
    }
    else if(grade<60){
        printf("\nYou got E");
    }
    return 0;s
}
