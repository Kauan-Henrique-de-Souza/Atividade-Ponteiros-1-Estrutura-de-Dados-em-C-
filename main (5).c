#include <stdio.h>

int main()
{
    int *K24,*K34;
    
    if(K24>K34){
        printf("K24 tem o endereço maior:%p",&K24);
    }
    else{
        printf("K34 tem o endereço maior:%p\n",&K34);
    }
    
    printf("\nEndereço K24:%p",&K24);
    printf("\nEndereço K34:%p",&K34);


    return 0;
}
