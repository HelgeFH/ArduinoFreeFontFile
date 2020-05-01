const uint8_t FreeSansBoldOblique9pt7bBitmaps[] PROGMEM = {
  0x0F, 0x07, 0xE3, 0x9D, 0xC7, 0x71, 0xDC, 0x7E, 0x1F, 0x8E, 0xE3, 0xB8,
  0xEE, 0x73, 0xF8, 0x3C, 0x00, 0x04, 0x3B, 0xF7, 0xE1, 0xC3, 0x06, 0x1C,
  0x38, 0x70, 0xC1, 0x87, 0x00, 0x0F, 0x87, 0xFC, 0xE3, 0xB8, 0x70, 0x0E,
  0x03, 0x80, 0xF0, 0x38, 0x1E, 0x07, 0x01, 0xC0, 0x7F, 0xCF, 0xF8, 0x0F,
  0xC7, 0xFC, 0xE3, 0xB8, 0x70, 0x1C, 0x0F, 0x03, 0xF0, 0x0E, 0x01, 0xDC,
  0x3B, 0x8E, 0x7F, 0x83, 0xE0, 0x03, 0xC0, 0xE0, 0x58, 0x2E, 0x13, 0x8C,
  0xE6, 0x33, 0xFE, 0xFF, 0x81, 0xC0, 0x60, 0x18, 0x0F, 0xE3, 0xFC, 0x60,
  0x0C, 0x03, 0x78, 0x7F, 0x9C, 0x70, 0x0E, 0x01, 0xDC, 0x33, 0x8E, 0x7F,
  0x83, 0xE0, 0x0F, 0x07, 0xE3, 0x9D, 0xC0, 0x7F, 0x1F, 0xEF, 0x3B, 0x8E,
  0xE3, 0xB8, 0xCE, 0x71, 0xF8, 0x3C, 0x00, 0x7F, 0xDF, 0xF0, 0x18, 0x0C,
  0x06, 0x03, 0x81, 0xC0, 0x60, 0x38, 0x0C, 0x07, 0x01, 0x80, 0x60, 0x00,
  0x0F, 0x83, 0xFC, 0xE3, 0x9C, 0x73, 0x9C, 0x3F, 0x0F, 0xE3, 0x8E, 0xE1,
  0xDC, 0x3B, 0x8E, 0x7F, 0xC3, 0xE0, 0x0F, 0x83, 0xF8, 0xE3, 0xB8, 0x77,
  0x0E, 0xE1, 0xDC, 0x7B, 0xFE, 0x3D, 0xC0, 0x33, 0x8E, 0x7F, 0x87, 0xC0,
  0x77, 0x00, 0x00, 0x0E, 0xE0 };

const GFXglyph FreeSansBoldOblique9pt7bGlyphs[] PROGMEM = {
  {     0,  10,  13,  10,    1,  -12 },   // 0x30 '0'
  {    17,   7,  13,  10,    3,  -12 },   // 0x31 '1'
  {    29,  11,  13,  10,    1,  -12 },   // 0x32 '2'
  {    47,  11,  13,  10,    1,  -12 },   // 0x33 '3'
  {    65,  10,  12,  10,    1,  -11 },   // 0x34 '4'
  {    80,  11,  13,  10,    1,  -12 },   // 0x35 '5'
  {    98,  10,  13,  10,    2,  -12 },   // 0x36 '6'
  {   115,  10,  13,  10,    2,  -12 },   // 0x37 '7'
  {   132,  11,  13,  10,    1,  -12 },   // 0x38 '8'
  {   150,  11,  13,  10,    1,  -12 },   // 0x39 '9'
  {   168,   4,   9,   6,    2,   -8 } }; // 0x3A ':'

const GFXfont FreeSansBoldOblique9pt7b PROGMEM = {
  (uint8_t  *)FreeSansBoldOblique9pt7bBitmaps,
  (GFXglyph *)FreeSansBoldOblique9pt7bGlyphs,
  0x30, 0x3A, 21 };

// Approx. 257 bytes
