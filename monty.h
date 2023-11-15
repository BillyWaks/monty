#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <fnctl.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct stk_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  stk_t;
extern stk_t stk;

/* main.c */
int main(int argc, char *argv[]);
void processFile(const char *filename);
void executeCommand(const char *command, stack_t **stack, unsigned int counter, FILE *file);
void cleanup(stack_t *stack, FILE *file);
/* pall.c */
void pall(stack_t *h, unsigned int counter);
/* push.c */
void push(stack_t *h, unsigned int counter);


#endif
