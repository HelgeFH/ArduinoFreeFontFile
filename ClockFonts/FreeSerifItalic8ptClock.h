const uint8_t FreeSerifItalic8pt7bBitmaps[] PROGMEM = {
  0x1E, 0x32, 0x63, 0x63, 0xE3, 0xC3, 0xC7, 0xC6, 0xC6, 0x4C, 0x78, 0x04,
  0xE0, 0x82, 0x18, 0x41, 0x04, 0x30, 0x82, 0x3C, 0x1E, 0x27, 0x43, 0x03,
  0x02, 0x04, 0x08, 0x10, 0x20, 0x62, 0x7C, 0x1E, 0x23, 0x03, 0x0C, 0x3C,
  0x0E, 0x06, 0x06, 0x06, 0x0C, 0xF0, 0x01, 0x02, 0x0E, 0x12, 0x24, 0x24,
  0x44, 0xFE, 0x08, 0x08, 0x08, 0x0F, 0x10, 0x10, 0x1C, 0x0E, 0x06, 0x06,
  0x06, 0x04, 0x08, 0xF0, 0x03, 0x87, 0x06, 0x06, 0x06, 0xE3, 0x9B, 0x0D,
  0x86, 0xC3, 0x63, 0x11, 0x87, 0x80, 0x7E, 0x82, 0x04, 0x04, 0x08, 0x08,
  0x10, 0x20, 0x20, 0x40, 0x40, 0x1F, 0x18, 0xCC, 0x66, 0x31, 0xB0, 0x60,
  0xD9, 0x86, 0xC3, 0x61, 0x99, 0x87, 0x80, 0x3C, 0x62, 0xC3, 0xC3, 0xC3,
  0xC7, 0x7E, 0x0C, 0x18, 0x70, 0xC0, 0x30, 0x00, 0x00, 0xC0 };

const GFXglyph FreeSerifItalic8pt7bGlyphs[] PROGMEM = {
  {     0,   8,  11,   8,    1,  -10 },   // 0x30 '0'
  {    11,   6,  12,   8,    1,  -11 },   // 0x31 '1'
  {    20,   8,  11,   8,    0,  -10 },   // 0x32 '2'
  {    31,   8,  11,   8,    0,  -10 },   // 0x33 '3'
  {    42,   8,  11,   8,    0,  -10 },   // 0x34 '4'
  {    53,   8,  11,   8,    1,  -10 },   // 0x35 '5'
  {    64,   9,  12,   8,    0,  -11 },   // 0x36 '6'
  {    78,   8,  11,   8,    1,  -10 },   // 0x37 '7'
  {    89,   9,  12,   8,    0,  -11 },   // 0x38 '8'
  {   103,   8,  11,   8,    1,  -10 },   // 0x39 '9'
  {   114,   4,   7,   4,    1,   -6 } }; // 0x3A ':'

const GFXfont FreeSerifItalic8pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic8pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic8pt7bGlyphs,
  0x30, 0x3A, 19 };

// Approx. 202 bytes
