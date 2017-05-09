/* bistream.c */

#include <stdio.h>
#include <stdlib.h>
#include "bitstream.h"

struct Bitstream 
{
    unsigned char* buffer;
    size_t size;
    size_t current;
};

struct Bitstream* bs_create(size_t size)
{
    struct Bitstream* bs = malloc(sizeof(unsigned char*) + sizeof(size_t) * 2);
    bs->buffer = calloc(0, size);
    bs->current = 0;
    bs->size = size;
    return bs;
}

void bs_delete(struct Bitstream* bs)
{
    free(bs->buffer);
    free(bs);
}

void bs_write(struct Bitstream* bs, size_t bit_count, unsigned int value)
{
    unsigned char overflow = 0;

    while(!overflow && bit_count)
    {
        // calculate current bit to write and position it right after the buffer content
        unsigned char bit = (value & 1) << bs->current;
        // write bit to buffer, old content is not touched, only current bit is written
        *(bs->buffer) |= bit;
        // focus next free bit in buffer
        bs->current++;
        // focus next bit in value to be added
        value >> 1;
        bit_count--;

        overflow = (bs->current > bs->size * sizeof(unsigned char*));
    }

    if(overflow)
    {
        printf("Buffer overflow. Could not write last %i bits of number %i.\n", bit_count+1, value);
    }
}

void bs_print(struct Bitstream* bs)
{
    for(int i = 0; i < bs->size; ++i)
    {
        printf("%i\n", (int) bs->buffer[i]);
    }
}
