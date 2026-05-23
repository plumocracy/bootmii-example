// This file demonstrates the basic principle that allows the bootmii
// jailbreak to work. Due to the signing key that nintendo used for
// the wii having a \0 quite early and their use of strcmp() instead
// of memcmp() to compare the keys attackers are able to adjust a malformed
// binary to conform to those first few bytes. as long as all bytes before the
// \0 match, the key will return as valid.

#include <stdio.h>
#include <string.h>

int main(void) {
  unsigned char expected[6] = {'A', 'B', '\0', 'X', 'Y', 'Z'};
  unsigned char actual[6] = {'A', 'B', '\0', '1', '2', '3'};

  printf("expected bytes: ");
  for (int i = 0; i < 6; i++) {
    printf("%02X ", expected[i]);
  }

  printf("\nactual bytes:   ");
  for (int i = 0; i < 6; i++) {
    printf("%02X ", actual[i]);
  }

  printf("\n\n");

  if (strcmp((char *)expected, (char *)actual) == 0) {
    printf("strcmp: equal\n");
  } else {
    printf("strcmp: different\n");
  }

  if (strncmp((char *)expected, (char *)actual, 6) == 0) {
    printf("strncmp: equal\n");
  } else {
    printf("strncmp: different\n");
  }

  if (memcmp(expected, actual, 6) == 0) {
    printf("memcmp: equal\n");
  } else {
    printf("memcmp: different\n");
  }

  return 0;
}
