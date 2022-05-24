#include<stdio.h>
int main(){
    int man,woman,literate_man,literate_woman,illiterate_man,illiterate_woman;
    man = .52*80000;
    woman = .48*80000;
    literate_man = .35*80000;
    literate_woman = .13*80000;
    illiterate_man = man - literate_man;
    illiterate_woman = woman - literate_woman;
    printf("Total Number of Illiterate Man = %d\n",illiterate_man);
    printf("Total Number of Illiterate Woman = %d\n",illiterate_woman);

    return 0;
}
