/* Bernstein's hash */
int hashByteString(const char* str, int len, int hash) {

  while (len--) {
    hash = (hash * 33) ^ *str++;
  }

  return hash;
}
