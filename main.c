// Tomás Watson
#include <ctype.h>
#include <stdio.h>

int main()
{
    printf("Ingrese una frase: ");

    char caracter;
    while((caracter = getchar ())!='\n')
    {
        if(isdigit(caracter))
        {
        }
        else
        {
            if(isupper(caracter))
            {
                putchar(tolower(caracter));
            }
            else
            {
                if(islower(caracter))
                {
                putchar(toupper(caracter));
                }
                else
                {
                    putchar(caracter);
                }
            }
        }
    }

    return 0;
}