#include <stdint.h>
#include <stdio.h>

int main(){
    int is_prime=1,i=1;
    for(;i<=10;i++){
        for(int j=2;j<=i;j++){
            if (i%j==0){
                is_prime=0;
                break;
            }
            
            if (j==(i-1)){
            printf("%d",i);
        }
        }
       
    }
    return 0;
}