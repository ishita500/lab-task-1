#include <stdio.h>
#include<ctype.h>
int main() {
   char str[200], *p;
   int vowels = 0, consonants = 0, digits = 0;
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   p = str; // Pointer 
   while (*p != '\0') {
       if (isalpha(*p)) {
           char ch = tolower(*p);
           if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
               vowels++;
           else
               consonants++;
       }
       else if (isdigit(*p)) {
           digits++;
       }
       p++; 
   }
   printf("Vowels: %d\n", vowels);
   printf("Consonants: %d\n", consonants);
   printf("Digits: %d\n", digits);
   return 0;
}