#include <stdio.h>
#include <stdbool.h>
int main(){
    int input_1;
    int input_2;

    if (scanf("%d %d", &input_1, &input_2) != 2){
        return 1;
    }

    bool module_ready = input_1;
    bool fault_state = input_2;
    
    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %d\n", (int)sizeof(bool));
    printf("FLAGS_SUM: %d\n", (int)module_ready + (int)fault_state);

    return 0;
    
}