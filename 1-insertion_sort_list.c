#include "sort.h"

/**
 *insertion_sort_list - function that sorts a doubly linked list of integers
 *in ascending order using the Insertion sort algorithm
 *@list: doubly linked list of integers to be sorted
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	current = (*list)->next; /*asignando a el primer nodo*/

	if (!list)
		return;

	while (current)
	{
		while (current->prev  && current->n < current->prev->n)
		{
			swap_list(current->prev, current, list);
			print_list(*list);
		}
			current = current->next;
	}
}
/**
 * swap_list - function to swap the nodes in a list
 * @Node1: first node to swap
 * @Node2: Second node to swap
 * @list: pointer to head
 */ 
void swap_list(listint_t *Node1, listint_t *Node2, listint_t **list)
{
	listint_t *A, *B, *C, *D;

	A = Node1->prev;
	B = Node1;
	C = Node2;
	D = Node2->next;

	/* Initial A->B->C->D; Final A->C->B->D*/
	if (A)
		A->next = C;
	C->prev = A;
	C->next = B;
	B->prev = C;
	B->next = D;
	if (D)
		D->prev = B;

	if (*list == B)
		*list = C;
}
