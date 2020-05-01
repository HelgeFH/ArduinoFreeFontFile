const uint8_t FreeSans10pt7bBitmaps[] PROGMEM = {
  0x3E, 0x3F, 0x98, 0xDC, 0x7C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xE0, 0xF8,
  0xEC, 0x67, 0xF1, 0xF0, 0x13, 0xFF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3E,
  0x3F, 0xB8, 0xF8, 0x30, 0x18, 0x0C, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x18,
  0x0F, 0xFF, 0xFC, 0x3E, 0x3F, 0xB8, 0xF8, 0x30, 0x18, 0x78, 0x3C, 0x07,
  0x01, 0x80, 0xF0, 0x7C, 0x77, 0xF1, 0xF0, 0x06, 0x06, 0x0E, 0x1E, 0x16,
  0x26, 0x46, 0x46, 0x86, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x7F, 0x3F, 0x98,
  0x0C, 0x0D, 0xE7, 0xFB, 0x8E, 0x03, 0x01, 0x80, 0xC0, 0x78, 0x67, 0xF1,
  0xF0, 0x1E, 0x1F, 0x98, 0xCC, 0x3C, 0x06, 0xF3, 0xFD, 0xC7, 0xC1, 0xE0,
  0xF0, 0x6C, 0x77, 0xF1, 0xF0, 0xFF, 0xFF, 0xC0, 0x40, 0x60, 0x20, 0x30,
  0x10, 0x18, 0x08, 0x0C, 0x06, 0x02, 0x03, 0x01, 0x80, 0x1C, 0x1F, 0x18,
  0xCC, 0x66, 0x31, 0xF0, 0xF8, 0xC6, 0xC1, 0xE0, 0xF0, 0x6C, 0x67, 0xF0,
  0xE0, 0x3E, 0x3F, 0xB8, 0xD8, 0x3C, 0x1E, 0x0F, 0x8E, 0xFF, 0x3D, 0x80,
  0xC0, 0xDC, 0x67, 0xE1, 0xE0, 0xF0, 0x00, 0x3C };

const GFXglyph FreeSans10pt7bGlyphs[] PROGMEM = {
  {     0,   9,  14,  11,    1,  -13 },   // 0x30 '0'
  {    16,   4,  14,  11,    3,  -13 },   // 0x31 '1'
  {    23,   9,  14,  11,    1,  -13 },   // 0x32 '2'
  {    39,   9,  14,  11,    1,  -13 },   // 0x33 '3'
  {    55,   8,  14,  11,    2,  -13 },   // 0x34 '4'
  {    69,   9,  14,  11,    1,  -13 },   // 0x35 '5'
  {    85,   9,  14,  11,    1,  -13 },   // 0x36 '6'
  {   101,   9,  14,  11,    1,  -13 },   // 0x37 '7'
  {   117,   9,  14,  11,    1,  -13 },   // 0x38 '8'
  {   133,   9,  14,  11,    1,  -13 },   // 0x39 '9'
  {   149,   2,  11,   5,    2,  -10 } }; // 0x3A ':'

const GFXfont FreeSans10pt7b PROGMEM = {
  (uint8_t  *)FreeSans10pt7bBitmaps,
  (GFXglyph *)FreeSans10pt7bGlyphs,
  0x30, 0x3A, 24 };

// Approx. 236 bytes
