#include<stdio.h>
#include<string.h>

int main(){
    int kazu=0;
    int komoji=0;
    int oomoji=0;
    char s[50];
    printf("パスワードを入力してください。\n");
    scanf("%49s",s);
    if(strlen(s)<8)
    {
    printf("8文字以上入力してください。\n");
    return 0;
    }
    for(int i=0;s[i] !='\0';i++){
        char moji=s[i];
    if('a'<=moji&&moji<='z')
    {
    komoji=1;
    }
    else if('A'<=moji&&moji<='Z')
    {
    oomoji=1;
    }
    if(komoji && oomoji){
        break;
    }
    }
    
    if(komoji && oomoji)
    {
        printf("正しいパスワードです。\n");
    }
    else{
        printf("無効なパスワードです。\n");
        if(!oomoji)printf("大文字を入力してください。\n"); 
        if(!komoji)printf("小文字を入力してください。\n");
    }
    }