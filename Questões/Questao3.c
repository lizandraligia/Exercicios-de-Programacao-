#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool checkTypos(char s1[], char s2[]) { 

    int m = strlen(s1); 
    int n = strlen(s2); 
    
    if((m-n) > 1){
    	return false;
	} 
	
	int count = 0, i = 0, j = 0; 
	
    while(i < m && j < n) { 
        if(s1[i] != s2[j]) { 
            if(count == 1) {
            	return false; 
			} 
            if(m > n){
            	i++; 
			}     
            else if(m < n) {
            	j++; 
			}      
            else { 
                i++; 
                j++; 
            }   
            count++; 
        } 
        else { 
            i++; 
            j++; 
        } 
    } 
  
    if(i < m || j < n) {
    	count++; 
	}
 
 	if(count == 0){
 		return true; 
	}
    return count == 1; 
} 
  
int main() 
{ 
	char s1[] = "pale"; 
	char s2[] = "ple"; 
	//char s2[] = "bale"; 
	//char s2[] = "bake"; 
	//char s2[] = "pales"; 
	
	printf(checkTypos(s1, s2) ? "true" : "false");
} 
