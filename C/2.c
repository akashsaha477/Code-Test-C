#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[1000], reversed[1000], *token;
    int len;
    printf("Enter a sentence:");
    scanf("%[^\n]s",&sentence);

    len=strlen(sentence);
    if (sentence[len-1]=='\n'){
        sentence[len-1]='\0';
    }
    token=strtok(sentence," ");
    reversed[0]='\0';
    while (token!=NULL){
        char word[1000];
        strcpy(word,token);
        strcat(word," ");
        strcat(word,reversed);
        strcpy(reversed,word);
        token=strtok(NULL," ");
    }

    len =strlen(reversed);
    if(reversed[len-1]==' '){
        reversed[len-1]='\0';
    }
    printf("Reversed sentence: %s\n",reversed);
    return 0;
}

