#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    // Checking if user input is valid

    if (argc != 2)
    {
        printf("Usage: ./recover card.raw\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    // Checking if input is JPEG file

    uint8_t buffer[BLOCK_SIZE];
    int i = 0;
    char filename[8];
    FILE *img;
    while (fread(buffer, 1, BLOCK_SIZE, file) == BLOCK_SIZE)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (i == 0)
            {
                sprintf(filename, "%03i.jpg", i);
                img = fopen(filename, "w");
                fwrite(buffer, BLOCK_SIZE, 1, img);
                fclose(img);
                i++;
            }
            else
            {
                fclose(img);
                sprintf(filename, "03i.jpg", (n - 1));
                img = fopen(filename, "w");
                fwrite(file, BLOCK_SIZE, 1, img);
                fclose(img);
            }
        }
        else
        {
            fwrite(img, BLOCK_SIZE, 1, file);
            fclose(img);
        }
    }
    fclose(file);
    free(filename);
    return 0;
}