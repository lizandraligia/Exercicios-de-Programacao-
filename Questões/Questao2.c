#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool jumbled(char str1[], char str2[]){
    
    int i;
    if(strlen(str1)==strlen(str2)){
		if(str1[0] == str2[0]){
			int n = strlen(str2); 
			int i, count = 0;
			
			for(i=0;i<n;i++){
				int index = str1[i];
				if(index == -1){
					return false; 
				}
				if(str2[i] != index){
					count++;
				}
			}
			
			if(n > 3){
				if(count < ((n * 2 )/3) ){
					return true; 
				}
			}
			else{
				return count > 0;
			}	
    	}    
    }
    return false;
}

int main()
{
    char str1[] = "you";
    char str2[] = "yuo";
    //char str1[] = "probably"; 
	//char str2[] = "porbalby"; 
    //char str1[] = "despite"; 
	//char str2[] = "desptie"; 
    //char str1[] = "moon";
	//char str2[] = "nmoo";
    //char str1[] = "misspellings";
	//char str2[] = "mpeissngslli"; 
    
    printf(jumbled(str1,str2) ? "true" : "false");
}
