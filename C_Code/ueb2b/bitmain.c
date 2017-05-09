#include <stdlib.h>
#include <stdio.h>
#include "bitstream.h"

int main()
{
    struct Bitstream* bs = bs_create(3);

    bs_write(bs, 8, 7);
    bs_write(bs, 8, 0);
    bs_write(bs, 8, 511);
    bs_write(bs, 8, 1);

    bs_print(bs);

    bs_delete(bs);
}

