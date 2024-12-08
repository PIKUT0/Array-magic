#include <stdio.h>
#include <math.h>
#include <string.h>
//float a = 0;
//float b,c = 0;
//int main(){
//    scanf("%f", &a);
//    scanf("%f", &b);
//    b = fmod(b,256);
//    c = (a*b)/256;
//    printf("%.2f", round((a*b)*100/256)/100);
//    return 0;
//}

const float Capacity = 4.7;
const int Resistance = 100;
float CapRes, freq = 0;
char a[100];
char b[100];
int Input_N[100];

void getting_Values(void){
    scanf("%f", &freq);
    scanf("%s", &b);
    fgets(a,100,stdin);
    strcat(b,a);
    b[strlen(b)-1] = 'L';
    printf(b);//debug
    int i =0;
    sscanf(b, "%d", &i);
    i = 0;
    for(int x = 0, j=0; x < strlen(b); x++)
    {
        if(b[x] == 'L')break;
        if (b[x] == ' '){
            j++;
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
        i++;
        printf("Input_N = %d | b = %c | X = %d | J = %d \n", Input_N[j], b[x], x, j);
    }
    for(int j = 0; j<i;j++){
        printf("%d \n", Input_N[j]);
        
    }
   CapRes = 1000000/(M_PI*2*freq*Capacity);
}

int main(){
    getting_Values();
}
//0 14 20 14 0 -14 -20 -14