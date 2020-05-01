const uint8_t FreeMonoBoldOblique8pt7bBitmaps[] PROGMEM = {
  0x1E, 0x3F, 0x23, 0x63, 0x43, 0xC2, 0xC2, 0xC6, 0xC6, 0xFC, 0x78, 0x0E,
  0x78, 0x90, 0x60, 0xC1, 0x02, 0x0C, 0x7E, 0xFC, 0x07, 0x07, 0xC6, 0x62,
  0x30, 0x38, 0x38, 0x38, 0x78, 0x70, 0x7F, 0xBF, 0x80, 0x1E, 0x3F, 0x03,
  0x03, 0x1E, 0x1C, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0x06, 0x1C, 0x59, 0x24,
  0x5F, 0xFF, 0x9E, 0x3C, 0x7E, 0x7E, 0x60, 0x7C, 0x7E, 0xC6, 0x06, 0x0E,
  0xFC, 0xF8, 0x07, 0x8F, 0xCE, 0x0E, 0x07, 0xE7, 0xFB, 0x8D, 0x86, 0xC7,
  0x7F, 0x1F, 0x00, 0xFE, 0xFE, 0x06, 0x04, 0x0C, 0x08, 0x18, 0x30, 0x30,
  0x60, 0x1E, 0x3F, 0x63, 0x63, 0x66, 0x3C, 0x7C, 0xC6, 0xC6, 0xFC, 0x78,
  0x1E, 0x3F, 0x73, 0x63, 0x67, 0x7F, 0x3E, 0x06, 0x1C, 0xF8, 0xF0, 0x6C,
  0x01, 0xB0 };

const GFXglyph FreeMonoBoldOblique8pt7bGlyphs[] PROGMEM = {
  {     0,   8,  11,  10,    2,  -10 },   // 0x30 '0'
  {    11,   7,  10,  10,    1,   -9 },   // 0x31 '1'
  {    20,   9,  11,  10,    1,  -10 },   // 0x32 '2'
  {    33,   8,  11,  10,    3,  -10 },   // 0x33 '3'
  {    44,   7,   9,  10,    2,   -8 },   // 0x34 '4'
  {    52,   8,  10,  10,    3,   -9 },   // 0x35 '5'
  {    62,   9,  11,  10,    2,  -10 },   // 0x36 '6'
  {    75,   8,  10,  10,    3,   -9 },   // 0x37 '7'
  {    85,   8,  11,  10,    2,  -10 },   // 0x38 '8'
  {    96,   8,  11,  10,    2,  -10 },   // 0x39 '9'
  {   107,   3,   7,  10,    4,   -6 } }; // 0x3A ':'

const GFXfont FreeMonoBoldOblique8pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique8pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique8pt7bGlyphs,
  0x30, 0x3A, 16 };

// Approx. 194 bytes
