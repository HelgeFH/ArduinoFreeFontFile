const uint8_t FreeMonoBold12pt7bBitmaps[] PROGMEM = {
  0x1E, 0x0F, 0xC6, 0x1B, 0x87, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0,
  0x3C, 0x0F, 0x87, 0x61, 0x8F, 0xC1, 0xE0, 0x1C, 0x0F, 0x0F, 0xC3, 0xB0,
  0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x3F,
  0xFF, 0xFC, 0x1F, 0x1F, 0xEE, 0x1F, 0x83, 0xC0, 0xC0, 0x70, 0x38, 0x1E,
  0x0F, 0x07, 0x83, 0xC1, 0xE3, 0xF0, 0xFF, 0xFF, 0xFC, 0x3F, 0x0F, 0xF1,
  0x87, 0x00, 0x60, 0x0C, 0x03, 0x83, 0xE0, 0x7C, 0x01, 0xC0, 0x0C, 0x01,
  0x80, 0x3C, 0x0F, 0xFF, 0x9F, 0xC0, 0x07, 0x07, 0x83, 0xC3, 0xE1, 0xB1,
  0xD8, 0xCC, 0xC6, 0xE3, 0x7F, 0xFF, 0xE0, 0x61, 0xF8, 0xFC, 0x3F, 0xC7,
  0xF8, 0xC0, 0x18, 0x03, 0x00, 0x7E, 0x0F, 0xF1, 0x86, 0x00, 0x60, 0x0C,
  0x01, 0x80, 0x36, 0x0C, 0xFF, 0x8F, 0xC0, 0x07, 0xC7, 0xF3, 0xC1, 0xC0,
  0x60, 0x38, 0x0E, 0xF3, 0xFE, 0xF1, 0xF8, 0x3E, 0x0F, 0x83, 0x71, 0xCF,
  0xE1, 0xF0, 0xFF, 0xFF, 0xFC, 0x1F, 0x07, 0x01, 0x80, 0x60, 0x38, 0x0C,
  0x03, 0x01, 0xC0, 0x60, 0x18, 0x0E, 0x03, 0x00, 0xC0, 0x1E, 0x1F, 0xEE,
  0x1F, 0x03, 0xC0, 0xF0, 0x36, 0x19, 0xFE, 0x7F, 0xB8, 0x7C, 0x0F, 0x03,
  0xE1, 0xDF, 0xE3, 0xF0, 0x3E, 0x1F, 0xCE, 0x3B, 0x07, 0xC1, 0xF0, 0x7E,
  0x3D, 0xFF, 0x3D, 0xC0, 0x70, 0x18, 0x0E, 0x0F, 0x3F, 0x8F, 0x80, 0xFF,
  0x80, 0x00, 0xFF, 0x80 };

const GFXglyph FreeMonoBold12pt7bGlyphs[] PROGMEM = {
  {     0,  10,  15,  14,    2,  -14 },   // 0x30 '0'
  {    19,  10,  15,  14,    2,  -14 },   // 0x31 '1'
  {    38,  10,  15,  14,    2,  -14 },   // 0x32 '2'
  {    57,  11,  15,  14,    1,  -14 },   // 0x33 '3'
  {    78,   9,  14,  14,    2,  -13 },   // 0x34 '4'
  {    94,  11,  15,  14,    1,  -14 },   // 0x35 '5'
  {   115,  10,  15,  14,    2,  -14 },   // 0x36 '6'
  {   134,  10,  15,  14,    2,  -14 },   // 0x37 '7'
  {   153,  10,  15,  14,    2,  -14 },   // 0x38 '8'
  {   172,  10,  15,  14,    3,  -14 },   // 0x39 '9'
  {   191,   3,  11,  14,    5,  -10 } }; // 0x3A ':'

const GFXfont FreeMonoBold12pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBold12pt7bBitmaps,
  (GFXglyph *)FreeMonoBold12pt7bGlyphs,
  0x30, 0x3A, 24 };

// Approx. 280 bytes
