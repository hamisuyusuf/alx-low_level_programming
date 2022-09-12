#include <stdio.h>
/**
 * main - entry point
 * Description: prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always 0 (success/correct)
 */
int main(void)

{
char base_16;

for (base_16 = 48; base_16 <= 57; base_16++)
{putchar(base_16);
}

for (base_16 = 97 ; base_16 <= 102; base_16++)
{
putchar(base_16);
}

putchar ('\n');

return (0);

}
