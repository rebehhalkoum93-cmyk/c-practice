#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void operation_str(char line[], char *op) {
    int l = strlen(line);
    
    for (int i = 0; i < l; i++) {
        if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/') {
            op[0] = line[i];
            op[1] = '\0';
            return;
        } 
    }
    op[0] = '\0'; // No operator found
}

void divide_line_quad(const char *line_tac, char *res, char *arg1, char *arg2, char *op) {
    char line_s[100];
    strcpy(line_s, line_tac);
    
    // First split on := to get left and right parts
    char *left_part = strtok(line_s, ":=");
    char *right_part = strtok(NULL, ":=");
    
    if (left_part && right_part) {
        strcpy(res, left_part);
        
        // Find operator in right part
        operation_str(right_part, op);
        
        // Split right part based on found operator
        char *first_arg = strtok(right_part, op);
        char *second_arg = strtok(NULL, op);
        
        if (first_arg) strcpy(arg1, first_arg);
        else arg1[0] = '\0';
        
        if (second_arg) strcpy(arg2, second_arg);
        else arg2[0] = '\0';
    }
}

int main() {
    char* c = "reb:=a+b";
    
    // Allocate memory for strings
    char res[100], arg1[100], arg2[100], op[6];
    
    // Test operation_str directly
    operation_str("a+b", op);
    printf("Operator found: %s\n", op);
    
    // Test full division
    divide_line_quad(c, res, arg1, arg2, op);
    printf("\nFull division:\n");
    printf("Result: %s\n", res);
    printf("Operator: %s\n", op);
    printf("Arg1: %s\n", arg1);
    printf("Arg2: %s\n", arg2);
    
    return 0;
}