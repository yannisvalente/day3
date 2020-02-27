/*
** EPITECH PROJECT, 2019
** task06
** File description:
**
*/
int my_putchar(char c)
{
    write(1, &c , 1);
}
int affiche(int a, int b, int c, int d)
{
    my_putchar(a+48);
    my_putchar(b+48);
    my_putchar(' ');
    my_putchar(c + 48);
    my_putchar(d + 48);
    if (a == 9 && b == 8 && c == 9 && d == 9){
    }
    else {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_pint_comb2(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 1;
    testcal(a , b, c, d);
}
void testcal(int a, int b, int c, int d)
{
    while (a <=9 && b <=9 && c<= 9 && d <= 9) {
        affiche(a, b, c, d);
        if (b >= 9 && c >= 9 && d >= 9) {
            a++;
            b=-1;
        }
        if (c >= 9 && d >= 9) {
            b++;
            c=a;
            d=b;
        }
        if (d >= 9) {
            c++;
            d=0;
        }else {
            d++;
        }
    }
}

int main(void)
{
    my_pint_comb2();
}
