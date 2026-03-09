#include <stdio.h>
#include <ctype.h>
#include <string.h>


int checkingFirstAlphabet(char firstAlphabet){
    if(!(isalpha(firstAlphabet) || firstAlphabet == '_'))
        return 1;
    return 0;
}

int checkingRest(char* idn){
    for(int i = 1; idn[i] != '\0'; i++){
        if(!(isalnum(idn[i]) || idn[i] == '_'))
            return 1;
    }
    return 0;
}

int checkingKeyword(char idn[]){
    char *identifiers[] = {
        "auto","break","case","char","const","continue","default","do","double",
        "else","enum","extern","float","for","goto","if","int","long","register",
        "return","short","signed","sizeof","static","struct","switch","typedef",
        "union","unsigned","void","volatile","while"
    };

    int length = sizeof( identifiers) / sizeof( identifiers[0]);
    for(int i = 0; i < length; i++){
        if(strcmp(idn, identifiers[i]) == 0)
            return 1;
    }

    return 0;
}

int main() {

    char idn[50];
    int isValid = 1;

    printf("Enter the Identifier : ");
    scanf("%s", idn);

    if(checkingFirstAlphabet(idn[0]) || checkingRest(idn) || checkingKeyword(idn))
        isValid = 0;

    // if(isValid){
    //     printf("Valid Identifier\n");
    // }
    // else{
    //     printf("Invalid Identifier\n");
    // }

    isValid? printf("Valid Indetifier\n") : printf("Invalid Indentfier\n");

    return 0;
}
