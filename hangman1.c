#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int len(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char ch[][100]={"dust","hello","string","python","javascript","quiz","juice"};
    srand(time(NULL));
    int n=rand()%7;
    char *a=ch[n];
    // printf("%s",a);
    printf("\nHANG MAN : %d\n",len(a));
    printf("%c",a[0]);
    for(int k=1;k<len(a)-1;k++){
        printf(" _ ");
    }
    printf("%c",a[len(a)-1]);
    printf("\nfirst letter : %c\nlast latter : %c\n",a[0],a[len(a)-1]);
    int i=0,j=0;
    while(i<len(a)){
        char ch1=a[i];
        char p;
        scanf("\n%c",&p);
        if(ch1==p){
            i++;
            if(i==len(a)){
                printf("You've guessed the word.\nYOU WON!!");
                break;
            }
        }
        else{
            j++;
            switch(j) {
                case 0:
                    printf("   --------\n");
                    printf("   |      |\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   -\n");
                break;
                case 1:
                    printf("   --------\n");
                    printf("   |      |\n");
                    printf("   |      O\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   -\n");
                break;
                case 2:
                    printf("   --------\n");
                    printf("   |      |\n");
                    printf("   |      O\n");
                    printf("   |      |\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   -\n");
                break;
                case 3:
                    printf("   --------\n");
                    printf("   |      |\n");
                    printf("   |      O\n");
                    printf("   |     /|\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   -\n");
                break;
                case 4:
                    printf("   --------\n");
                    printf("   |      |\n");
                    printf("   |      O\n");
                    printf("   |     /|\\\n");
                    printf("   |\n");
                    printf("   |\n");
                    printf("   -\n");
                break;
                case 5:
                    printf("   --------\n");
                    printf("   |      |\n");
                    printf("   |      O\n");
                    printf("   |     /|\\\n");
                    printf("   |     /\n");
                    printf("   |\n");
                    printf("   -\n");
                break;
                case 6:
                    printf("   --------\n");
                    printf("   |      |\n");
                    printf("   |      O\n");
                    printf("   |     /|\\\n");
                    printf("   |     / \\\n");
                    printf("   |\n");
                    printf("   -\n");
                break;
                default:
                    printf("Your game is over\nYOU LOSE!!\n");
                    return 0;
            }
        }
    }
    printf("\nThe final word : %s",a);
    return 0;
}
