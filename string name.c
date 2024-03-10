#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeLeadingTrailingBlanks(char *str)
{
    while (*str && isspace(*str))
        {
        str++;
    }
    char *end = str + strlen(str) - 1;
    while (end > str && isspace(*end)) {
        end--;
    }
    *(end + 1) = '\0';
}

char* getLastName(char *str)
 {
    char *lastName = strrchr(str, ' ');
    if (lastName != NULL)
        {
        lastName++;
        }
    return lastName;
}

int main()
{
    char fullName[100];
    printf("Enter your first name and last name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = '\0';
    removeLeadingTrailingBlanks(fullName);
    printf("Trimmed full name: %s\n", fullName);
    char *lastName = getLastName(fullName);
    printf("Last name: %s\n", lastName);

    return 0;
}

