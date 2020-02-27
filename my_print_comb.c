/*
** EPITECH PROJECT, 2019
** task05
** File description:
** whalla c'est pas bien
*/

int affich(int a, int b, int c)
{
    while (c <= 9) {
        my_putchar(a + 48);
        my_putchar(b + 48);
        my_putchar(c + 48);
        if (a == 7)
            write(1, "\n", 1);
        else
            write(1, ", ", 2);
        c = c + 1;
    }
}

int my_print_comb(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    while (a <= 7) {
        b = a + 1;
        while (b <= 8) {
            c = b + 1;
            affich(a , b, c);
            b = b +1;
        }
        a = a + 1;
    }
}
