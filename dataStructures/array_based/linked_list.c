#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} node;

typedef struct {
    node *root;
} linked_list;

node* create_node(int val) {
    node *h = (node*) malloc(sizeof(node));
    h->next = NULL;
    h->val = val;
    return h;
}

linked_list* create_list(int root) {
    linked_list* l = (linked_list*) malloc(sizeof(linked_list));
    l->root = create_node(root);
    return l;
}

void list_append(int v, linked_list *l) {
    node *r = l->root;
    node *prev;
    while (r != NULL) {
        prev = r;
        r = r->next;
    }
    r = create_node(v);
    prev->next = r;
}

void traverse_list(linked_list *l) {
    node *r = l->root;
    while (r != NULL) {
        printf("%d -> ", r->val);
        r = r->next;
    }
    printf("(end of list)\n");
}

int main() {
    linked_list *l = create_list(1);
    list_append(2, l);
    list_append(3, l);
    traverse_list(l);
    return 0;
}