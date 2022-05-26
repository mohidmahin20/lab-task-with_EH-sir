#include<stdio.h>
int main(){
    int arif,fahmid,joy;
    printf("Enter Arif's Age:");
    scanf("%d",&arif);
    printf("Enter Fahmid's Age:");
    scanf("%d",&fahmid);
    printf("Enter Joy's Age:");
    scanf("%d",&joy);
    if(arif<fahmid && arif<joy){
        printf("Arif is Youngest of the Three\n");
    }
    else if(fahmid<arif && fahmid<joy){
        printf("Fahmid is Youngest of the Three\n");
    }
    else{
        printf("Joy is Youngest of the Three\n");
    }
    
    return 0;
}
