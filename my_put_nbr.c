void my_putchar(char c)
{
write(1, &c , 1);
}

int my_put_nbr(int c)
{
if (c=='$')
write(1, &c , 1);
}

int main(void)
{
my_put_nbr();
}
