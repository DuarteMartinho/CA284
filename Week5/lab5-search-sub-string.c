#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char*argv[]) {
    char *sentence = argv[1];
    char *word = argv[2];
    char *ptr = strstr(sentence, word);
    if (ptr) {
        int position = ptr - sentence;
        printf("%d %lu\n", position, position + (strlen(word) - 1));
    }
    
    return 0;
}
