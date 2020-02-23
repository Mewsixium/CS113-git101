//6210451489 Warunee Benjanan 
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node{
    int i;
    struct node *n;
};

void sort(struct node **mx, struct node *mn){
    struct node *x;
    if(*mx == NULL || (*mx)->i >= mn->i){
        mn->n = *mx;
        *mx = mn;
    }
    else{
        x = *mx;
        while(x->n != NULL && x->n->i < mn->i) {
            x = x->n;
        }
        mn->n = x->n;
        x->n = mn;
    }
}

int main(){
    struct node *m = NULL;
    struct node *new = NULL;
    int num ;

    while(1){
        scanf("%d", &num);
        if (num == -1{
            break;
        }
        else{
            struct node *new = (struct node *)malloc(sizeof(struct node));

            new->i = num;
            new->n = NULL;

            sort(&m, new);
        }
        
    }
    for(;m; m = m->n)
        printf("%d\n", m->i);
    
    return 0;
}