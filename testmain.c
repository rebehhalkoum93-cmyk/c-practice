#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quadripule.h" 


void operation_str(char line[], char *res) {
    int l = strlen(line);
    char s[100];
    strcpy(s, line);

    for (int i = 0; i < l; i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            res[0] = s[i];
            res[1] = '\0';
            return;
        } else {
            char umin[10], sqr[10];

            strncpy(umin, s + i, 6); // Copy 6 chars for "uminus"
            strncpy(sqr, s + i, 4); // Copy 4 chars for "sqrt"
            umin[6] = '\0';
            sqr[4] = '\0';

            if (strcmp(umin, "uminus") == 0) {
                strcpy(res, "uminus");
                return;
            }
            if (strcmp(sqr, "sqrt") == 0) {
                strcpy(res, "sqrt");
                return;
            }
        }
    }
    res[0] = '\0';
}

void divide_line_quad(char line[], char *result, char *arg1, char *arg2, char *operation) {
    int i = 0;
    while (line[i] && !(line[i] == ':' && line[i + 1] == '=')) i++;

    if (!line[i]) return;

    strncpy(result, line, i);  
    result[i] = '\0';

    char rbh[100];
    strcpy(rbh, line + i + 2);  

    operation_str(rbh, operation); // استخراج العملية

    if (strcmp(operation, "uminus") == 0 || strcmp(operation, "sqrt") == 0) {
        // التعامل مع "uminus" و "sqrt"
        if (strcmp(operation, "uminus") == 0) {
            // التعامل مع uminus
            char *pos = strchr(rbh, 'u');  // ابحث عن بداية "uminus"
            if (pos) {
                strcpy(arg1, pos + 6);  // اجعل arg1 يبدأ من بعد "uminus"
            }
            strcpy(arg2, "NULL");  // لا يوجد arg2 في حالة "uminus"
        }
        else {
            // التعامل مع sqrt
            char *pos1 = strchr(rbh, '(');
            char *pos2 = strchr(rbh, ')');
            if (pos1 && pos2) {
                *pos2 = '\0'; // إزالة ")" من النهاية
                strcpy(arg1, pos1 + 1); // داخل الأقواس
            }
            strcpy(arg2, "NULL");
        }
    } else {
        // العمليات الأخرى
        char *op_pos = strchr(rbh, operation[0]);
        if (op_pos) {
            *op_pos = '\0'; // فصل العملية عن المعاملات
            strcpy(arg1, rbh);
            strcpy(arg2, op_pos + 1);
        }
    }
}

// دالة لتعيين السطر إلى الرباعيات
void assign_line(Pointer_qua p, const char line_tac[]){
    char arg1[10] = "", arg2[10] = "", op[10] = "", res[10] = "";
    char copy[100];
    strcpy(copy, line_tac);

    divide_line_quad(copy, res, arg1, arg2, op);

    Assign_arg1_qua(p, arg1);
    Assign_arg2_qua(p, arg2);
    Assign_op_qua(p, op);
    Assign_result_qua(p, res);
}

// دالة لإنشاء الرباعيات من السلسلة
void create_quad(Pointer_qua *P, char tac[]) {
    Pointer_qua temp, iter = NULL;
    int i = 0;
    char *line = strtok(tac, "\n");

    while (line != NULL) {
        Allocate_qua(&temp);
        if (!temp) return;

        assign_line(temp, line);
        Assign_indx_qua(temp, i++);

        if (*P == NULL) {
            *P = temp;
        } else {
            Assign_adr_qua(iter, temp);
        }
        iter = temp;
        line = strtok(NULL, "\n");
    }
}

// دالة لعرض الرباعيات
void print_table_row(int index, const char *result, const char *op, const char *arg1, const char *arg2) {
    printf("| %-5d | %-6s | %-6s | %-6s | %-6s |\n", index, result, op, arg1, arg2);
}

void display_quad(Pointer_qua p) {
    Pointer_qua iter = p;
    printf("| Index | Result | Op     | Arg1   | Arg2   |\n");
    printf("|-------|--------|--------|--------|--------|\n");
    while (iter) {
        print_table_row(iter->indx, iter->result, iter->op, iter->arg1, iter->arg2);
        iter = Next_qua(iter);
    }
}

int main() {
    char text[] = "a := a +b  \ny := sqrt(b) \nx:= uminusu\n";
    Pointer_qua p = NULL;

    create_quad(&p, text);
    display_quad(p);

    return 0;
}
