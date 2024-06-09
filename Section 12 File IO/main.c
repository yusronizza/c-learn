#include <stdio.h>

void printf_b(void *ptr, int size);

int main()
{
    char *filename = "index.txt";

    FILE *fp;
    fp = fopen(filename, "r");
    if(fp == NULL)
    {
        printf("Cannot open file : %s \n", filename);
        return 1;
    }

    printf("File opened\n");

    __int32_t buff;
    int block_memory = 0;
    while(fread(&buff, sizeof(buff), 1, fp)){
        printf_b(&buff, sizeof(buff));
        printf("\n");
        block_memory += 1;
    }
    printf("%d segments with %ld bit data wide", block_memory, sizeof(buff)*8);
    printf("\n");

    fclose(fp);
    printf("File closed\n");

    return 0;
}

void printf_b(void *ptr, int size)
{
    long long *ch = ptr;
    int size_bits = size * 8;
    for (int i = 0; i < size_bits; i++)
    {
        printf("%d", (bool)(*ch >> i & 1));
    }
}