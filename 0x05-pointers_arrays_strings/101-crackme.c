#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random valid password for 101-crackme
*
* Return: Always 0 (Success)
*/
int main(void)
{
int sum = 0;
int random_number;
srand(time(NULL));
for (int i = 0; i < 2196; i++)
{
random_number = rand() % 126;
sum += random_number;
printf("%c", random_number);
}
printf("%c", 2772 - sum);
return (0);
}
