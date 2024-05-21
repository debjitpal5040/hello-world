#include <stdlib.h>
#include <stdio.h>
int main(){
    int *ptr1, *ptr2;
    int n=5;
    ptr1 = (int*)malloc(n*sizeof(int));
    ptr2 = (int*)calloc(n, sizeof(int));

    if (ptr2==NULL){
        printf("Memory not allocated\n");
    }

    else{
        printf("Success\n");
        for (int i=0; i<n; i++){
            scanf("%d", &ptr2[i]);
        }
        printf("\n");
        printf("added to memory");
        for (int i=0; i<n; i++){
            printf("%d ", ptr2[i]);
        }
        printf("\n");
        n=10;
        ptr2 = realloc(ptr2, n*sizeof(int));
        printf("Successfully reallocated");
        printf("\n");
        for (int i=5; i<n ; i++){
            scanf("%d", &ptr2[i]);
        }
        printf("added to memory");
        for (int i=0; i<n; i++){
            printf("%d", ptr2[i]);
        }
        free(ptr2);
        printf("memory deallocated\n");
    }
    return 0;
}