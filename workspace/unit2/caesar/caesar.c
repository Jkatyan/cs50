#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc,string argv[]){
if(argc != 2){
    return 1;
}
    string key = argv[1];
    int alpha = atoi(key) % 26;
    if(alpha == 0){
        printf("Please use a valid key!\n");
        return 1;
    }
    printf("What text do you want to encrypt?\n");
    string text = get_string();
    if(text != NULL){
        printf("ciphertext: ");
     for (int i = 0, length = strlen(text); i < length; i++)
            {
                int placeholder = 0;
                if (isupper(text[i]))
                {
                    placeholder = (((int)text[i] - 65 + alpha) % 26) + 65;
                    printf("%c", (char) placeholder);
                }
                else if (islower(text[i]))
                {
                    placeholder = (((int)text[i] - 97 + alpha) % 26) + 97;
                    printf("%c", (char) placeholder);
                }
                else
                {
                    printf("%c", text[i]);
                }
            }
    }
    printf("\n");
}