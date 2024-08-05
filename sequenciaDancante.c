#include <stdio.h>
#include <string.h>

#define SIZE 50


void fazerDancar(char *array);
int main(){
    
    int numFrases;
    
    scanf("%d", &numFrases);
    getchar();
    
    // lendo as frases 
    char frases[numFrases][SIZE];
    
    for(int i = 0; i < numFrases; i++){
        fgets(frases[i], SIZE, stdin);
        
        // arrumando para por o \0 que o fgets não coloca
        size_t tam = strlen(frases[i]);
        if(frases[i][tam] == '\n'){
            frases[i][tam] = '\0';
        }
    }
    
    // fazendo o que o desafio pede
    for(int i = 0; i < numFrases; i++){
      fazerDancar(frases[i]);
      printf("%s", frases[i]);

    }
  
    
    
    return 0;
}

void fazerDancar(char *array){
    
    size_t tam = strlen(array);
    int controle = 1;
    
    for(int i = 0; i < tam; i++){
        
        if(array[i] == ' '){
            controle--;
        } 
        
        if(controle % 2 == 1){
            if(array[i] >= 'A' && array[i] <= 'Z'){
                array[i] += 32;
                
            } else if(array[i] >= 'a' && array[i] <= 'z'){
                array[i] -= 32;
                
            }
        }
        
        controle++;
    }
}
