/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** CPool Day04 Task 02
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}