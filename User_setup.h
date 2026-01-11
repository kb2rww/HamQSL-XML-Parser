// ============================================================
//  Custom User_Setup.h for ST7796U (RGB-wired IPS 3.5")
//  Bobby / KB2RWW — ESP32 HSPI wiring
// ============================================================

#define USER_SETUP_INFO "Custom ST7796U Setup"

// ------------------------------------------------------------
//  Display Driver
// ------------------------------------------------------------
#define ST7796_DRIVER
#define TFT_RGB_ORDER TFT_RGB   // REQUIRED for your panel

// ------------------------------------------------------------
//  Backlight Control
// ------------------------------------------------------------
#define TFT_BL   21
#define TFT_BACKLIGHT_ON HIGH

// ------------------------------------------------------------
//  SPI Pins (HSPI)
// ------------------------------------------------------------
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   5
#define TFT_DC    4
#define TFT_RST  27

// ------------------------------------------------------------
//  Fonts
// ------------------------------------------------------------
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// ------------------------------------------------------------
//  SPI Speeds
// ------------------------------------------------------------
#define SPI_FREQUENCY       27000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY 2500000

// ------------------------------------------------------------
//  Use HSPI (not VSPI)
// ------------------------------------------------------------
#define USE_HSPI_PORT