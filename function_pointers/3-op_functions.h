#ifndef OP_FUNCTIONS_H
#define OP_FUNCTIONS_H

/**
 * struct op - struct for operations
 * @op: the operator string
 * @f: function pointer
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* OP_FUNCTIONS_H */
