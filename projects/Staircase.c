/** 
 * This program works with string manipulations on user-defined first and last name, including 
 * calculating their lengths and comparing them for equality. It presents the first name in lowercase
 * as a staircase, then in uppercase as a reverse staircase, and finally a last name in a toggle 
 * staircase format.
 * 
 * @author     Low, Christian
 * @assignment ICS 212 Assignment 15
 * @date       October 29, 2024
 */

#include <stdio.h>   
#include <string.h>  // for strlen
#include <ctype.h>   // for tolower and toupper

int main() {
  // Declare and initialize the first name
  char firstname[] = "Christian";  // Change this to first name
  // Declare and initialize the last name using a pointer
  char *lastname = "Low";    // Change this to last name

  // Get the lengths of first and last names
  size_t firstNameLength = strlen(firstname);
  size_t lastNameLength = strlen(lastname);

  // Print first name and last name lengths
  printf("First name \"%s\" has length %zu.\n", firstname, firstNameLength);
  printf("Last name \"%s\" has length %zu.\n", lastname, lastNameLength);

  // Calculate and print total length
  size_t totalLength = firstNameLength + lastNameLength;
  printf("Total length: %zu\n", totalLength);

  // Compare names
  if (strcmp(firstname, lastname) == 0) {
    printf("\"%s\" and \"%s\" are the same.\n", firstname, lastname);
  }

  // Print first name in staircase fashion (lowercase)
  size_t i, j;
  for (i = 0; i < firstNameLength; i++) {
    for (j = 0; j < i; j++) {
      printf(" ");
    }
    printf("%c\n", tolower(firstname[i]));
  }

  // Print first name in reverse staircase fashion (uppercase)
  for (i = firstNameLength - 1; i < firstNameLength; i--) {
    for (j = 0; j < i; j++) {
      printf(" ");
    }
    printf("%c\n", toupper(firstname[i]));
  }

  // Print last name in toggle case staircase fashion
  for (i = 0; i < lastNameLength; i++) {
    // Inner loop prints spaces equal to the current index to create the staircase effect
    for (j = 0; j < i; j++) {
      printf(" ");
    }
    // Print character in toggle case based on its position (even or odd)
    if (i % 2 == 0) {
      printf("%c\n", toupper(lastname[i]));
    } else {
      printf("%c\n", tolower(lastname[i]));
    }
  }

  return 0;
}
