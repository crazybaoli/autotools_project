#include <stdio.h>  
#include <stdlib.h>  


#include "myinclude.h"  


int main(void)  
{  
    int a=1, b=2;  
    int result;  


    result=my_add(a, b);      //自己实现加法函数  
    printf("a+b=%d\n", result);  


    result=my_sub(a, b);          //自己实现的减法函数  
    printf("a-b=%d\n", result);  


    return 0;  
}  