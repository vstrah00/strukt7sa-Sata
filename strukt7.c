#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stabla;
typedef struct stabla* Position;
typedef struct stabla{
    char* name;
    Position sibling;
    Position child;
}branch;

struct _stack;
typedef struct _stack* posSt;
typedef struct _stack{
    Position element;
    posSt next;
    posSt prev;
}stack;

//1- "md", 2 - "cd dir", 3 - "cd..", 4 - "dir" i 5 – izlaz.
Position insert(Position current, Position q);
Position createDir();


int main(){
    stack head={.element=NULL, .next=NULL, .prev=NULL};
    posSt last=NULL;
    char order[20]={0};

    scanf(" %s", order);

    

}

Position insert(Position current, Position new){

}

Position createDir(){
    char dirName[30]={0};
    Position newDir=NULL;

    printf("Input new directory name:\t");
    scanf(" %s", dirName);

    newDir=(Position)malloc(sizeof(branch));
    if(newDir==NULL){
        return NULL;
    }

    newDir->name=dirName;
    newDir->sibling=NULL;
    newDir->child=NULL;

    return newDir;
}
