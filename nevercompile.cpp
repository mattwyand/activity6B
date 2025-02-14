#include <iostream>

void printIt()
{
    for (int i=0; i<1000; i++)
    {
        printf("supermanberdini %d\n", i);
    }
}

int main()
{
    printf("Running\n");

    printIt();
    printIt();

    return 0;
}