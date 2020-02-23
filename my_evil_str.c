/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** CPool Day04 Task 04
*/

char *my_evil_str(char *str)
{
    char tmp;
    int count = -1;

    for (int i = 0; str[i] != '\0'; i++)
        count++;
    for (int i = 0; i < count; i++, count--) {
        tmp = str[i];
        str[i] = str[count];
        str[count] = tmp;
    }
    return (str);
}