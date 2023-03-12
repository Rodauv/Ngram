#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void loop(char** s){
    int arr [128] = {0};
    for(int j = 1; s[j]; j++){
        for(int i = 0; s[j][i]; i++){
            if(s[j][i] != '"'){
                arr[(int) s[j][i]] += 1;
            }
        }   
    }
    for(int i = 0; i < 128; i++){
        if(arr[i] > 0){
            printf("%c:%d\n", i, arr[i]);
        }
    }
}

int main(int ac, char** av){
    if (!av[1] && ac==1)
        return -1;
    loop(av);
    return 0;
}
