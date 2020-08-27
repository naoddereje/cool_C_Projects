// STACKVIAARRAY.C [161002]
// Simple implementation of an integer stack using an array.
// History:
//	161002	DFA		First release
//	171002	DFA		Added defines

#include <stdio.h>

// Size can be changed to suit particular problem
#define	STACK_SIZE	100

// These defines are meant to be constant - do not change
#define	EMPTY_INDEX	-1
#define	MAX_INDEX	(STACK_SIZE - 1)

int  top = EMPTY_INDEX;
int  stack [STACK_SIZE];

int push (int n)
{
	if (top == MAX_INDEX)  return 0;
	stack[++top] = n;
	return  1;
}//push()


int  pop (int *value)
{
	if (top == EMPTY_INDEX)  return 0;
	*value = stack[top--];
	return  1;
}// pop()

        
int  tos (int **ptop)
{
	if (top == EMPTY_INDEX) return 0;
	*ptop = &stack[top];
	return  1;
} // tos()


int main (void)
{
	int		i;
	int		rslt;
	int		value;
	int		*pi;

	for (i=0; i<5; i++)
		push (20+i);

	while (rslt = pop (&value))
		printf ("  %2d", value);
	putchar ('\n');

	for (i=0; i<5; i++)
		push (100+i);
	while (rslt = pop (&value))	{
		printf ("  %2d", value);
		rslt = tos (&pi);
		*pi = *pi +50;
		}
	putchar ('\n');

	return 0;
}//main()
		


