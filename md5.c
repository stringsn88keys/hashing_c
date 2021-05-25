#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

const char *string = "The quick brown fox jumped over the lazy dog's back";
const char *characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*():;";

int main()
{
  int i;
  int *chars[8];
  char password[9] = "";

  unsigned char result[MD5_DIGEST_LENGTH];

  sprintf(password, "%c%c%c%c%c%c%c%c", chars[0], chars[1], chars[2], chars[3], chars[4], chars[5], chars[6], chars[7]);

  MD5(string, strlen(string), result);

  // output
  for (i = 0; i < MD5_DIGEST_LENGTH; i++)
    printf("%02x", result[i]);
  printf("\n");

  return EXIT_SUCCESS;
}