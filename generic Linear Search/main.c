
/* 
 * File : main.c
 * --------------------------------------------------------------*
 * This is a generic linear search program to search an element. *
 * --------------------------------------------------------------*
 * Date : 31 January 2014
 * Author : Shankul Jain
 */


#include <stdio.h>
#include <string.h>

void *Lsearch(void *key, void *base, int n, int elemsize){
    for (int i=0; i<n; i++) {
        void *elemaddr = (char *)base + i*elemsize;
        if(memcmp(key, elemaddr, elemsize)==0){
            return elemaddr;
        }
    }
    return NULL;
}

int main(void){
    int a[] = {10,20,30,40,50,60,70};
    int key = 70;
    
    int *p = Lsearch(&key, a, 7, sizeof(int));
    
    if (p != NULL) {
        printf("%ld",p-a);
    }
    else{
        printf("value not found");
    }
    
    return 0;
}