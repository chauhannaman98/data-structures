// code from geeksforgeeks

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stack{
    int top;
    int capacity;
    int* array;
};

stack* create(int capacity){
    stack* s = new stack;
    s->top = -1;
    s->capacity = capacity;
    s->array = (int*) malloc(s->capacity*sizeof(int));
    return s;
}

int isEmpty(stack* stack){
    return stack->top == -1;
}

char pop(stack* s){
    if(!isEmpty(s))
        return s->array[s->top--];
    return '$';
}

char peek(stack* s){
    return s->array[s->top];
}

void push(stack* s, char op){
    s->array[++s->top] = op;
}

int isOperand(char ch){
    return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
}

int prec(char ch){
    switch(ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

int infix_to_postfix(char* exp){
    int i,k;
    stack *s = create(strlen(exp));
    for(i=0,k=-1; exp[i]; ++i){
        if(isOperand(exp[i]))
            exp[++k] = exp[i];
        else if(exp[i]=='(')
            push(s, exp[i]);
        else if(exp[i]==')'){
            while(!isEmpty(s) && peek(s)!='('){
                exp[++k] = pop(s);
            }
            pop(s);
        }
        else{
            while(!isEmpty(s) && prec(exp[i])<=prec(peek(s)))
                exp[++k] = pop(s);
            push(s, exp[i]);
        }
    }
    while(!isEmpty(s) && peek(s)!='(')
        exp[++k] = pop(s);
    exp[++k] = '\0';
    printf("%sn", exp);
}

int main() 
{ 
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i"; 
    infix_to_postfix(exp); 
    return 0; 
} 
