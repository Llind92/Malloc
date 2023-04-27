/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

#define PAGESIZE (getpagesize() * 2)


//Struct for LinkedList
typedef struct s_memo
{
    bool disponibility;
    void *currentBlock;
    struct s_memo *next;
    struct s_memo *previous;
    size_t memoSize;

} t_memo;

//Recoded fcts needed for the project
void *calloc (size_t nmemb, size_t size);
void *reallocarray (void *ptr, size_t nmemb, size_t size);
void *realloc (void *ptr, size_t size);
void *malloc (size_t size);
void free (void *ptr);

//Setup LinkedList from struct for Malloc
t_memo *setup_malloc(size_t size);
t_memo *setup_list(t_memo *memo_list, size_t size);
void *final_allocation(t_memo *list, size_t size);

//Error Handling
void *error_handling(t_memo *memo_list, size_t size);
void *error_sbrk(size_t size);

#endif /* !MY_H_ */
