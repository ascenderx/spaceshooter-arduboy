#ifndef BITMAPS_HH
#define BITMAPS_HH

#include <stdint.h>

#include <Arduboy2.h>

#define SPRITE_WIDTH 8
#define SPRITE_HEIGHT 8

PROGMEM const uint8_t SHIP_BITMAP[SPRITE_WIDTH] = {
  0x81, 0xdb, 0xa5, 0xdb, 0x5a, 0x5a, 0x18, 0x18, 
};

#define NUM_EXPLOSION_BITMAPS 4
PROGMEM const uint8_t EXPLOSION_BITMAPS[NUM_EXPLOSION_BITMAPS][SPRITE_WIDTH] = {
  {
    0x00, 0x00, 0x18, 0x3c, 0x3c, 0x18, 0x00, 0x00,
  },
  {
    0x00, 0x18, 0x3c, 0x66, 0x66, 0x3c, 0x18, 0x00, 
  },
  {
    0x18, 0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c, 0x18,
  },
  {
    0x3c, 0x66, 0xc3, 0x81, 0x81, 0xc3, 0x66, 0x3c,
  },
};

#endif