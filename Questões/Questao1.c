#include <stdio.h>
#include <stdlib.h>

const char replacement_str[] = "&32"; 

char *replace(int size, char str[]){
    
    char *new_str = (char *)malloc(sizeof(char) * (size + 2));
    
    int i, index = 0;
    for(i=0;i<size;i++){
        if(str[i] == ' '){
            new_str[index++] = replacement_str[0];
            new_str[index++] = replacement_str[1];
            new_str[index++] = replacement_str[2]; 
        }
        else{
            new_str[index++] = str[i];
        }
    }
    for(;i<size;i++) {
        new_str[index++] = str[i];
    }
    return new_str;
}

int main()
{
    char str[] = "User is not allowed ";
    int size = 19;
    char *replaced_str = replace(size, str);
    
    printf(replaced_str);
}
