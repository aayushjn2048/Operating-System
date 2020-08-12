#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h> 

void func() 
{ 
    if (fork() == 0) 
        printf("Hello from Aditya!\n"); 
    else
        printf("Hello from Ayush!\n"); 
}

int main()
{
    func();
    return 0;
}
