#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main(void)
{
    char str[MAX], ctr, similar, stop = 'stop';
    int i, n;

    printf("Input your words through the 'Enter' button, and Enter 'stop' when you finish: "); /*<-message which requires enter the words*/
    i = 0;


    do {
        scanf("%c", &str[i]);                                               /*<-inputing words from the user and stopping do it when user enters stop word*/
        i++;
    } while (str[i-1] != stop);                                           /*<-here piece of stop checking*/
    str[i] = '\0';                                                       /*<-change the stop word to '\0' so this language need this -_-*/
    printf("Enter your character to check for repeating: ");            /*<-message which requires enter the character*/
    scanf("%c", &ctr);                                                 /*<-inputing character from the user*/


//    n = 0;
//    for (i = 0; i < MAX; i++) {
//        if strncmp(str[i], ctr, 1) == 0 {                          /*<-finding the repeats as character in the words*/
//            i++;
//            n++;
//            if n > 0 {
//                similar = str[i];
//            }
//        }
//        else {
//            printf("Not founded repeats in the words")
//        }
//    }
    return 0;
}
