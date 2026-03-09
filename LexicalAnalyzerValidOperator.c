#include <stdio.h>
#include <string.h>

int main() {
    char op[3];

    printf("Enter an operator: ");
    scanf("%s", op);

    if(strcmp(op, "+") == 0 || strcmp(op, "-") == 0 ||
       strcmp(op, "*") == 0 || strcmp(op, "/") == 0 ||
       strcmp(op, "%") == 0 || strcmp(op, "++") == 0 ||
       strcmp(op, "--") == 0 || strcmp(op, "==") == 0 ||
       strcmp(op, "!=") == 0 || strcmp(op, ">") == 0 ||
       strcmp(op, "<") == 0 || strcmp(op, ">=") == 0 ||
       strcmp(op, "<=") == 0 || strcmp(op, "&&") == 0 ||
       strcmp(op, "||") == 0 || strcmp(op, "=") == 0) {

        printf("Valid Operator\n");
    } else {
        printf("Invalid Operator\n");
    }

    return 0;
}