#pragma once
#include <stdint.h>

// ------------------------------------------------------------
//  RGB565 Color Palette for ST7796 / ST7789 / ILI9341 Displays
//  Clean, alphabetical, and ready for production use.
// ------------------------------------------------------------

#define COLOR565(r,g,b) ( ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b >> 3)) )

// ---------------------- BASIC COLORS ------------------------
static const uint16_t COLOR_BLACK        = 0x0000;
static const uint16_t COLOR_WHITE        = 0xFFFF;
static const uint16_t COLOR_RED          = 0xF800;
static const uint16_t COLOR_GREEN        = 0x07E0;
static const uint16_t COLOR_BLUE         = 0x001F;
static const uint16_t COLOR_YELLOW       = 0xFFE0;
static const uint16_t COLOR_CYAN         = 0x07FF;
static const uint16_t COLOR_MAGENTA      = 0xF81F;

// ---------------------- EXTENDED COLORS ---------------------
static const uint16_t COLOR_ALICEBLUE        = 0xF7DF;
static const uint16_t COLOR_ANTIQUEWHITE     = 0xFF5A;
static const uint16_t COLOR_AQUA             = 0x07FF;
static const uint16_t COLOR_AQUAMARINE       = 0x7FFA;
static const uint16_t COLOR_AZURE            = 0xF7FF;

static const uint16_t COLOR_BEIGE            = 0xF7BB;
static const uint16_t COLOR_BISQUE           = 0xFF38;
static const uint16_t COLOR_BROWN            = 0xA145;
static const uint16_t COLOR_BURLYWOOD        = 0xDDD0;

static const uint16_t COLOR_CHOCOLATE        = 0xD343;
static const uint16_t COLOR_CORAL            = 0xFBEA;
static const uint16_t COLOR_CORNFLOWERBLUE   = 0x64BD;
static const uint16_t COLOR_CORNSILK         = 0xFFDB;
static const uint16_t COLOR_CRIMSON          = 0xD8A7;

static const uint16_t COLOR_DARKBLUE         = 0x0011;
static const uint16_t COLOR_DARKCYAN         = 0x0451;
static const uint16_t COLOR_DARKGOLDENROD    = 0xB421;
static const uint16_t COLOR_DARKGRAY         = 0xAD55;
static const uint16_t COLOR_DARKGREEN        = 0x0320;
static const uint16_t COLOR_DARKKHAKI        = 0xBDAD;
static const uint16_t COLOR_DARKMAGENTA      = 0x8811;
static const uint16_t COLOR_DARKOLIVEGREEN   = 0x5345;
static const uint16_t COLOR_DARKORANGE       = 0xFC60;
static const uint16_t COLOR_DARKORCHID       = 0x9999;
static const uint16_t COLOR_DARKRED          = 0x8800;
static const uint16_t COLOR_DARKSALMON       = 0xECAF;
static const uint16_t COLOR_DARKSEAGREEN     = 0x8DF1;
static const uint16_t COLOR_DARKSLATEBLUE    = 0x49F1;
static const uint16_t COLOR_DARKSLATEGRAY    = 0x2A69;
static const uint16_t COLOR_DARKTURQUOISE    = 0x067A;
static const uint16_t COLOR_DARKVIOLET       = 0x901A;

static const uint16_t COLOR_DEEPPINK         = 0xF8B2;
static const uint16_t COLOR_DEEPSKYBLUE      = 0x05FF;
static const uint16_t COLOR_DIMGRAY          = 0x6B4D;
static const uint16_t COLOR_DODGERBLUE       = 0x1C9F;

static const uint16_t COLOR_FIREBRICK        = 0xB104;
static const uint16_t COLOR_FLORALWHITE      = 0xFFDE;
static const uint16_t COLOR_FORESTGREEN      = 0x2444;
static const uint16_t COLOR_FUCHSIA          = 0xF81F;

static const uint16_t COLOR_GAINSBORO        = 0xDEFB;
static const uint16_t COLOR_GHOSTWHITE       = 0xFFDF;
static const uint16_t COLOR_GOLD             = 0xFEA0;
static const uint16_t COLOR_GOLDENROD        = 0xDD24;
static const uint16_t COLOR_GRAY             = 0x8410;
static const uint16_t COLOR_GREENYELLOW      = 0xAFE5;

static const uint16_t COLOR_HONEYDEW         = 0xF7FE;
static const uint16_t COLOR_HOTPINK          = 0xFB56;

static const uint16_t COLOR_INDIANRED        = 0xCAEB;
static const uint16_t COLOR_INDIGO           = 0x4810;
static const uint16_t COLOR_IVORY            = 0xFFFE;

static const uint16_t COLOR_KHAKI            = 0xF731;

static const uint16_t COLOR_LAVENDER         = 0xE73F;
static const uint16_t COLOR_LAVENDERBLUSH    = 0xFF9E;
static const uint16_t COLOR_LAWNGREEN        = 0x7FE0;
static const uint16_t COLOR_LEMONCHIFFON     = 0xFFD9;
static const uint16_t COLOR_LIGHTBLUE        = 0xAEDC;
static const uint16_t COLOR_LIGHTCORAL       = 0xF410;
static const uint16_t COLOR_LIGHTCYAN        = 0xE7FF;
static const uint16_t COLOR_LIGHTGOLDENROD   = 0xF7DA;
static const uint16_t COLOR_LIGHTGRAY        = 0xD69A;
static const uint16_t COLOR_LIGHTGREEN       = 0x9772;
static const uint16_t COLOR_LIGHTPINK        = 0xFDB8;
static const uint16_t COLOR_LIGHTSALMON      = 0xFD0F;
static const uint16_t COLOR_LIGHTSEAGREEN    = 0x2595;
static const uint16_t COLOR_LIGHTSKYBLUE     = 0x867F;
static const uint16_t COLOR_LIGHTSLATEGRAY   = 0x7453;
static const uint16_t COLOR_LIGHTSTEELBLUE   = 0xB63B;
static const uint16_t COLOR_LIGHTYELLOW      = 0xFFFC;

static const uint16_t COLOR_LIME             = 0x07E0;
static const uint16_t COLOR_LIMEGREEN        = 0x3666;
static const uint16_t COLOR_LINEN            = 0xFF9C;

static const uint16_t COLOR_MAROON           = 0x8000;
static const uint16_t COLOR_MEDIUMAQUA       = 0x6675;
static const uint16_t COLOR_MEDIUMBLUE       = 0x0019;
static const uint16_t COLOR_MEDIUMORCHID     = 0xBABA;
static const uint16_t COLOR_MEDIUMPURPLE     = 0x939B;
static const uint16_t COLOR_MEDIUMSEAGREEN   = 0x3D8E;
static const uint16_t COLOR_MEDIUMSLATEBLUE  = 0x7B5D;
static const uint16_t COLOR_MEDIUMSPRINGGREEN= 0x07D3;
static const uint16_t COLOR_MEDIUMTURQUOISE  = 0x4E99;
static const uint16_t COLOR_MEDIUMVIOLETRED  = 0xC0B0;

static const uint16_t COLOR_MIDNIGHTBLUE     = 0x18CE;
static const uint16_t COLOR_MINTCREAM        = 0xF7FF;
static const uint16_t COLOR_MISTYROSE        = 0xFF3C;
static const uint16_t COLOR_MOCCASIN         = 0xFF36;

static const uint16_t COLOR_NAVAJOWHITE      = 0xFEF5;
static const uint16_t COLOR_NAVY             = 0x000F;

static const uint16_t COLOR_OLDLACE          = 0xFFBC;
static const uint16_t COLOR_OLIVE            = 0x8400;
static const uint16_t COLOR_OLIVEDRAB        = 0x6C64;
static const uint16_t COLOR_ORANGE           = 0xFD20;
static const uint16_t COLOR_ORANGERED        = 0xFA20;
static const uint16_t COLOR_ORCHID           = 0xDB9A;

static const uint16_t COLOR_PALEGOLDENROD    = 0xEF55;
static const uint16_t COLOR_PALEGREEN        = 0x97D2;
static const uint16_t COLOR_PALETURQUOISE    = 0xAF7D;
static const uint16_t COLOR_PALEVIOLETRED    = 0xDB92;
static const uint16_t COLOR_PAPAYAWHIP       = 0xFF7A;
static const uint16_t COLOR_PEACHPUFF        = 0xFED7;
static const uint16_t COLOR_PERU             = 0xCC27;
static const uint16_t COLOR_PINK             = 0xFDF9;
static const uint16_t COLOR_PLUM             = 0xDD1B;
static const uint16_t COLOR_POWDERBLUE       = 0xB71C;
static const uint16_t COLOR_PURPLE           = 0x8010;

static const uint16_t COLOR_REBECCAPURPLE    = 0x6399;
static const uint16_t COLOR_ROSYBROWN        = 0xBC71;
static const uint16_t COLOR_ROYALBLUE        = 0x435C;

static const uint16_t COLOR_SADDLEBROWN      = 0x8A22;
static const uint16_t COLOR_SALMON           = 0xFC0E;
static const uint16_t COLOR_SANDYBROWN       = 0xF52C;
static const uint16_t COLOR_SEAGREEN         = 0x2C4A;
static const uint16_t COLOR_SEASHELL         = 0xFFBD;
static const uint16_t COLOR_SIENNA           = 0xA285;
static const uint16_t COLOR_SILVER           = 0xC618;
static const uint16_t COLOR_SKYBLUE          = 0x867D;
static const uint16_t COLOR_SLATEBLUE        = 0x6AD9;
static const uint16_t COLOR_SLATEGRAY        = 0x7412;
static const uint16_t COLOR_SNOW             = 0xFFDF;
static const uint16_t COLOR_SPRINGGREEN      = 0x07EF;
static const uint16_t COLOR_STEELBLUE        = 0x4416;

static const uint16_t COLOR_TAN              = 0xD5B1;
static const uint16_t COLOR_TEAL             = 0x0410;
static const uint16_t COLOR_THISTLE          = 0xDDFB;
static const uint16_t COLOR_TOMATO           = 0xFB08;
static const uint16_t COLOR_TURQUOISE        = 0x471A;

static const uint16_t COLOR_VIOLET           = 0xEC1D;

static const uint16_t COLOR_WHEAT            = 0xF6F6;
static const uint16_t COLOR_WHITESMOKE       = 0xF7BE;

static const uint16_t COLOR_YELLOWGREEN      = 0x9E66;
