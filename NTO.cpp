//Pikuto 08.12.24 
//all rights reserved 2024
#include <stdio.h>
#include <math.h>
#include <string.h>

char a[100];
char b[100];
int Input_N[100];

void getting_Values(void){
    scanf("%s", &b);
    fgets(a,100,stdin);
    strcat(b,a);
    b[strlen(b)-1] = 'L';
    int i=0;
    sscanf(b, "%d", &i);
    i = 0;
    for(int x = 0, j=0; x < strlen(b); x++)
    {
        if(b[x] == 'L')break;
        if (b[x] == ' '){
            j++; i++;
            continue;
        }
        if (b[x] == '-' ){
            Input_N[j] = 0 + (int(b[x+1]) -48)*(-1);
            x++;
            continue;
        }
        if(Input_N[j]<0){
           Input_N[j] = (Input_N[j]*(-10) + int(b[x]) - 48)*(-1);
           continue;
        }
        Input_N[j] = Input_N[j]*10 + int(b[x]) - 48;    
    }
    for(int j = 0; j<i+1;j++){
        printf("%d \n", Input_N[j]);
        
    }
}

int main(){
    getting_Values();
}
