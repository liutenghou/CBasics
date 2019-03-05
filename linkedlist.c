#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node *next;
}node_t;

void print_list(node_t *head){
	node_t *current = head;

	while(current != NULL){
		printf("%d\n", current->val);
		current = current->next;
	}
}

void push(node_t *head, int val){
	node_t *current = head;
	while(current->next != NULL){
		current = current->next;
	}

	//now we can add a new variable
	current->next = malloc(sizeof(node_t));
	current->next->val = val;
	current->next->next = NULL;

}

/*add to the beginning of a list
1) create a new item and set its value
2) link the new item to point to the head of the list
3) set the head of the list to be our new item
*/
void push_front(node_t **head, int val){
	node_t *new_node;
	new_node = malloc(sizeof(node_t));

	new_node->val = val;
	new_node->next = *head;
	*head = new_node;
}

/*
pop a variable
1) take the next item that the head points to and save it
2) free the head item
3) set the head to be the next item that we've stored on the side
*/
int pop(node_t **head){
	int retval = -1;
	node_t *next_node = NULL;

	if(*head == NULL){
		return -1;
	}
	
	next_node = (*head)->next;
	retval = (*head)->val;
	free(*head);
	*head = next_node;
	
	return retval;
}

//remove the last item from a list
int remove_last(node_t *head){
	int retval = 0;
	//if there is only one item in the list, remove it
	if(head->next == NULL){
		//Q: need to do this?
		head->val = 0;
		free(head);	
		head = NULL;	
		return retval;
	}

	node_t *current = head;
	
	while(current->next->next != NULL){
		current = current->next;
	}

	retval = current->next->val;
	free(current->next);

	return retval;
}

int pop(node_t **head){
	int retval = -1;
	node_t *next_node = NULL;
	
	if(*head == NULL){
		return -1;
	}

	next_node = (*head)->next;
	retval = (*head)->val;
	free(*head);
	*head = next_node;
	
	return retval;
}

//remove a specific item
/*
1) iterate to the node before the node we wish to delete
2) save the node we wish to delete in a temporary pointer
3) set the previous node's next pointer to point to the node after the node we wish to delete
4) delete the node using the temporary pointer
*/
int remove_by_index(node_t ** head, int n){
	int i = 0;
	int retval = -1;
	node_t *current = *head;
	node_t *temp_node = NULL;
	
	if(n == 0){
		return pop(head);	
	}

	for(int i = 0; i < n-1; i++){
		if(current->next == NULL){
			return -1;
		}
		current = current->next;
	}

	temp_node = current->next;	
	retval = temp_node->val;
	current->next = temp_node->next;
	free(temp_node);
	
	return retval;
}	

//implement function to remove by value

int main(){
	node_t *head = NULL;
	head = malloc(sizeof(node_t));

	if(head == NULL){
		return 1;
	}
	head->val = 1;
	head->next = NULL;
	print_list(head);
	return 0;
}


