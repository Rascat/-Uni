/* bistream.h */

#ifndef BITSTREAM_H_INCLUDED
#define BITSTEAM_H_INCLUDED

struct Bitstream;
struct Bitstream* bs_create(size_t size);
void bs_delete(struct Bitstream* bs);
void bs_write(struct Bitstream* bs, size_t bit_count, unsigned int value);
void bs_print(struct Bitstream* bs);

#endif
