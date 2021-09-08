#include<stdio.h>
#include <string.h>
int main(){

    char roman[20]="0";
    printf ("Enter Roman Number(use Only alphabets I,V,X,L,C,D,M): ");
    scanf ("%s", roman);
    int number=0,count1=0,count2=0;

    int strLeng = strlen(roman);
    int num[strLeng];

    for(int i=0; i<=strLeng; i++){
        switch(roman[i]){
            case 'I' : num[i]=1; break;
            case 'V' : num[i]=5; break;
            case 'X' : num[i]=10; break;
            case 'L' : num[i]=50; break;
            case 'C' : num[i]=100; break;
            case 'D' : num[i]=500; break;
            case 'M' : num[i]=1000; break;
            case '\0' : num[i]=0; break;
            default : printf("Try again\n");
        }
    }

    for(int i=0; i< strLeng; i++){
        if(num[i]==5||num[i]==50||num[i]==500){
            if(num[i]==num[i+1]){
            count1++;
        }
        }
        else if(num[i]==1||num[i]==10||num[i]==100){
            if(num[i]==num[i+1]){
            count2++;
            }
        }
    }
    if(count1>=1){
        printf("WRONG NUMBER (V,L,D over ussage)\n");
            }
    else if(count2 >=3){
        printf("WRONG NUMBER (I,X,C over ussage)\n");
    }else{
        for(int i=0; i<strLeng ; i++){
        if(num[i]>=num[i+1]){
            number+=num[i];
        }else{
            int temp=num[i];
            num[i]=num[i+1]-temp;
            number+=num[i];
            i++;
        }
    }
       printf("ROMAN \t DECIMAL\n");
       printf("----------------\n");
       printf("%s \t %d\n", roman, number);

    }



    return 0;
}
