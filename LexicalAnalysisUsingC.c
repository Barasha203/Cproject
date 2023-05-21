#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100], token[100];
    int i, j, k, n;
    const char *keywords[] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while", NULL};

    printf("Enter a C program:\n");
    while (fgets(str, sizeof str, stdin)) {
        i = 0;
        n = strlen(str);
        while (i < n) {
            // skip white space
            while (i < n && isspace(str[i]))
                i++;
            if (i == n)
                break;
            // check for keyword or identifier
            if (isalpha(str[i]) || str[i] == '_') {
                j = i;
                while (isalnum(str[j]) || str[j] == '_')
                    j++;
                strncpy(token, str + i, j - i);
                token[j - i] = '\0';
                k = 0;
                while (keywords[k] != NULL) {
                    if (strcmp(keywords[k], token) == 0)
                        break;
                    k++;
                }
                if (keywords[k] != NULL)
                    printf("Keyword: %s\n", token);
                else
                    printf("Identifier: %s\n", token);
                i = j;
            }
            // check for integer or real number
            else if (isdigit(str[i])) {
                j = i;
                while (isdigit(str[j]))
                    j++;
                if (str[j] == '.') {
                    j++;
                    while (isdigit(str[j]))
                        j++;
                    printf("Real Number: %.*s\n", j - i, str + i);
                }
                else
                    printf("Integer: %.*s\n", j - i, str + i);
                i = j;
            }
            // check for string literal
            else if (str[i] == '"' || str[i] == '\'') {
                char delim = str[i];
                j = i + 1;
                while (j < n && str[j] != delim) {
                    if (str[j] == '\\')
                        j++;
                    j++;
                }
                if (j == n)
                    printf("Error: Unterminated string literal\n");
                else
                    printf("String Literal: %.*s\n", j - i + 1, str + i);
                i = j + 1;
            }
            // check for operator or separator
            else {
                printf("Symbol: %c\n", str[i]);
                i++;
            }
        }
    }
    return 0;
}

