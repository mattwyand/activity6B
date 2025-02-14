#include <iostream>

int main()
{
    printf("Running");
    
    while (true)
        malloc(1);

    printf("Finished allocating memory! :D");

    return 0;
}