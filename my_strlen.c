/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** CPool Day04 Task 03
*/

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        count++;
    return (count);
}