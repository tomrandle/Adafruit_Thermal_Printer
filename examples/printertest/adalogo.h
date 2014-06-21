#ifndef _adalogo_h_
#define _adalogo_h_

#define SPARK	1		//Temporary until this is done by the IDE/CLI

#define adalogo_width  75
#define adalogo_height 75

#if defined (SPARK)
static const unsigned char adalogo_data[] = {
#else
static PROGMEM prog_uchar adalogo_data[] = {
#endif
  0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0xf0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xf0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xf8,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x07,0xf8,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0f,0xf8,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x1f,0xfc,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x1f,0xfc,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3f,0xfc,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7f,0xfe,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7f,0xfe,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xff,0xfe,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0xff,0xff,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xff,0xff,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xff,0xff,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0xff,0xff,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0xff,0xff,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0xff,0xff,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0f,0xff,0xff,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0f,0xff,0xff,0x80,0x00,0x00,0x00,
  0x7f,0xff,0xfc,0x0f,0xff,0xff,0x80,0x00,0x00,0x00,
  0xff,0xff,0xff,0x0f,0xff,0xff,0x80,0x00,0x00,0x00,
  0xff,0xff,0xff,0xcf,0xff,0xff,0x80,0x00,0x00,0x00,
  0xff,0xff,0xff,0xef,0xff,0xff,0x80,0x00,0x00,0x00,
  0x7f,0xff,0xff,0xf7,0xff,0xff,0x80,0x00,0x00,0x00,
  0x3f,0xff,0xff,0xff,0xfb,0xff,0x00,0x00,0x00,0x00,
  0x3f,0xff,0xff,0xff,0xf1,0xff,0x3f,0xf0,0x00,0x00,
  0x1f,0xff,0xff,0xff,0xf1,0xfe,0xff,0xfe,0x00,0x00,
  0x0f,0xff,0xff,0xff,0xf1,0xff,0xff,0xff,0xc0,0x00,
  0x0f,0xff,0xff,0xff,0xe1,0xff,0xff,0xff,0xf8,0x00,
  0x07,0xff,0xff,0xff,0xe1,0xff,0xff,0xff,0xff,0x00,
  0x03,0xff,0xff,0xff,0xe1,0xff,0xff,0xff,0xff,0xc0,
  0x01,0xff,0xff,0x3f,0xe1,0xff,0xff,0xff,0xff,0xe0,
  0x01,0xff,0xfe,0x07,0xe3,0xff,0xff,0xff,0xff,0xe0,
  0x00,0xff,0xff,0x03,0xe3,0xff,0xff,0xff,0xff,0xe0,
  0x00,0x7f,0xff,0x00,0xf7,0xff,0xff,0xff,0xff,0xc0,
  0x00,0x3f,0xff,0xc0,0xff,0xc0,0x7f,0xff,0xff,0x80,
  0x00,0x1f,0xff,0xf0,0xff,0x00,0x3f,0xff,0xff,0x00,
  0x00,0x0f,0xff,0xff,0xff,0x00,0x7f,0xff,0xfc,0x00,
  0x00,0x07,0xff,0xff,0xff,0x01,0xff,0xff,0xf8,0x00,
  0x00,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,
  0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xc0,0x00,
  0x00,0x00,0x1f,0xfc,0x7f,0xff,0xff,0xff,0x80,0x00,
  0x00,0x00,0x7f,0xf8,0x78,0xff,0xff,0xfe,0x00,0x00,
  0x00,0x00,0xff,0xf0,0x78,0x7f,0xff,0xfc,0x00,0x00,
  0x00,0x01,0xff,0xe0,0xf8,0x7f,0xff,0xf0,0x00,0x00,
  0x00,0x03,0xff,0xc0,0xf8,0x3f,0xdf,0xc0,0x00,0x00,
  0x00,0x07,0xff,0xc1,0xfc,0x3f,0xe0,0x00,0x00,0x00,
  0x00,0x07,0xff,0x87,0xfc,0x1f,0xf0,0x00,0x00,0x00,
  0x00,0x0f,0xff,0xcf,0xfe,0x1f,0xf8,0x00,0x00,0x00,
  0x00,0x0f,0xff,0xff,0xff,0x1f,0xf8,0x00,0x00,0x00,
  0x00,0x1f,0xff,0xff,0xff,0x1f,0xfc,0x00,0x00,0x00,
  0x00,0x1f,0xff,0xff,0xff,0xff,0xfc,0x00,0x00,0x00,
  0x00,0x1f,0xff,0xff,0xff,0xff,0xfe,0x00,0x00,0x00,
  0x00,0x3f,0xff,0xff,0xff,0xff,0xfe,0x00,0x00,0x00,
  0x00,0x3f,0xff,0xff,0xff,0xff,0xfe,0x00,0x00,0x00,
  0x00,0x3f,0xff,0xff,0x3f,0xff,0xfe,0x00,0x00,0x00,
  0x00,0x7f,0xff,0xff,0x3f,0xff,0xfe,0x00,0x00,0x00,
  0x00,0x7f,0xff,0xff,0x3f,0xff,0xfe,0x00,0x00,0x00,
  0x00,0x7f,0xff,0xfe,0x3f,0xff,0xfe,0x00,0x00,0x00,
  0x00,0xff,0xff,0xfc,0x1f,0xff,0xfe,0x00,0x00,0x00,
  0x00,0xff,0xff,0xf8,0x1f,0xff,0xfe,0x00,0x00,0x00,
  0x00,0xff,0xff,0xe0,0x0f,0xff,0xfe,0x00,0x00,0x00,
  0x01,0xff,0xff,0x80,0x07,0xff,0xfe,0x00,0x00,0x00,
  0x01,0xff,0xfc,0x00,0x03,0xff,0xfe,0x00,0x00,0x00,
  0x01,0xff,0xe0,0x00,0x01,0xff,0xfe,0x00,0x00,0x00,
  0x01,0xff,0x00,0x00,0x00,0xff,0xfe,0x00,0x00,0x00,
  0x00,0xf8,0x00,0x00,0x00,0x7f,0xfe,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x1f,0xfe,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0f,0xfe,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x01,0xfe,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x00,0x00,0x00
};

#endif // _adalogo_h_
