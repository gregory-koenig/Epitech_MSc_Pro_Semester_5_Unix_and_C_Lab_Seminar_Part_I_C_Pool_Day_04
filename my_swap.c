/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** CPool Day04 Task 01
*/

void my_swap(int *a, int *b)
{
    int x = *a;

    *a = *b;
    *b = x;
}