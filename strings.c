#include <stdio.h>
#include <string.h>

/*This function is designed to remove the newline from the end of a string*/
void remove_newline(char *str, int size);

void compare_two_strings(char *str);

int get_string_length(char *str);

void contact_strings(char *str1, char *str2, char *str3);

void copy_string(char *src, char *dest);

int main() {

    char long_string[256];
    char name[50];
    char lastname[50];
    char fullname[100];
    char source[6] = "Hello";
    char destination[20];

    printf("Enter your long string here: \n");

    fgets(long_string, 256, stdin); // char *fgets(char *str, int size, FILE* file); reads a line from the specified stream and stores it into the string pointed to by str. It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.

    // Replacing the newline character with a null terminator

    for (int i = 0; i < 256; i++) {
        if (long_string[i] == '\n') {
            long_string[i] = '\0';
            break;
        }
    }

    printf("Hello, %s \n", long_string);

    printf("STRIPING OFF NEW LINE FROM A STRING \n\n");

    printf("Please enter your name:\n");
    fgets(name,50,stdin);

    remove_newline(name,50);
    compare_two_strings(name);

    printf("Your name is %d letters long \n", get_string_length(name));

    printf("Enter your last name: \n");

    fgets(lastname, 50, stdin);

    remove_newline(lastname,50);

    fullname[0] = '\0'; // strcat will look for the \0 and add the second string starting at that location

    contact_strings(fullname,name,lastname);

    copy_string(source, destination);
    

    getchar();
    return 0;
}


void remove_newline(char *str, int size) {

    int i = 0;
    /* remove the null terminator */
    for (i = 0; i < size; i ++){

        if(str[i] == '\n'){
            str[i] = '\0';
            return;
        }
    }
}

void compare_two_strings(char *str){

    if(strcmp(str,"Jeanndo") == 0){
        printf("Ja, das ist mein name zu \n");
        printf("Both names are the same \n");
    }else {
        printf("Both names are different \n");
        printf("Oh! Nein, Das ist nicht mein name \n");
    }
}

int get_string_length(char *str) {

    return strlen(str);
}

void contact_strings(char *fullname, char *firstname, char *lastname){
    strcat(fullname, firstname);  /* Copy name into fullname */
    strcat(fullname, " "); /* Separate the names by a space */
    strcat(fullname, lastname); /* Copy lastname onto the end of the fullname */
    printf("Your full name is %s\n\n", fullname);
}


void copy_string(char *src, char *dest){
    strncpy(dest, src, sizeof(dest));
    printf("Text copied to clipboard %s\n", dest);
}