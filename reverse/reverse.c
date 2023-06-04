#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "wav.h"


const int HEADER_SIZE = 44;
WAVHEADER header;

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    if (argc != 3)
    {
        printf("Usage: ./reverse input.wav output.wav\n");
        return 1;
    }

    // Open input file for reading
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file\n");
        return 2;
    }

    // Read header into an array
    fread(header, 1, HEADER_SIZE, input);  // ERROR OVER HERE - 'header' IS NOT A POINTER

    // Use check_format to ensure WAV format
    int check = check_format(header);

    // Open output file for writing
    FILE *output = fopen(argv[1], "w");
    if (output == NULL)
    {
        printf("Could not open file\n");
        return 3;
    }

    // Write header to file
    // TODO #6

    // Use get_block_size to calculate size of block
    // TODO #7

    // Write reversed audio to file
    // TODO #8
}

int check_format(WAVHEADER header)
{
    int8_t buffer;
    while (&buffer, 1, 4, header)
    {
        if (buffer == 65 || buffer == 69 || buffer == 86 || buffer == 87);
        else
            return 1;
    }
    return 0;
}

int get_block_size(WAVHEADER header)
{
    // TODO #7
    return 0;
}