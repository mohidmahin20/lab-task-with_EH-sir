#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3,ab,bc,ac;
    printf("Enter 1st points cordinate:");
    scanf("%d %d",&x1,&y1);
    printf("Enter 2nd points cordinate:");
    scanf("%d %d",&x2,&y2);
    printf("Enter 3rd points cordinate:");
    scanf("%d %d",&x3,&y3);
    ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    ac = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    if(ab+bc==ac || ab+ac==bc || bc+ac==ab){
        printf("All the Three Points fall on one straight line\n");
    }
    else{
        printf("All the Three Points does not fall on one straight line\n");
    }
    
    return 0;
}
