#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void lenWord(char* sentence, int start, int end);
void loopSentence(char* sentence);

int main(int argc, char*argv[]) {
    char* sentence = argv[1];
    loopSentence(sentence);
    return 0;
}

void lenWord(char* sentence, int start, int end) {
    char newWord[(end - start)]; 
    int j = 0;
    for (int i = start; i < end; i++) {
        newWord[j] = sentence[i];
        j++;
    }
    printf("%s\n", newWord);
};

void loopSentence(char* sentence) {
    int j = 0;
    int start, end, i, currLongestStart = 0, currLongestEnd = 0;
    start = 0;
    for (i = 0; i < strlen(sentence); i++) {
        if (isspace(sentence[i]) || (i + 1 >= strlen(sentence))) {
            if (i + 1 >= strlen(sentence)) {
                end = i + 1;
            } else {
                end = i;
            }
            if ((end - start) > (currLongestEnd - currLongestStart)) {
                currLongestStart = start;
                currLongestEnd = end;
            }
            start = i + 1;
            j++;
            // printf("SPACE | e%d \n", i);
        }
    }
    lenWord(sentence, currLongestStart, currLongestEnd);
};