// ============================================================
//  Custom ST7796U Initialization for TFT_eSPI
//  Based on vendor-supplied init sequence for your panel
//  RGB-wired, inversion ON, correct timing + gamma
// ============================================================

#define TFT_INIT_DELAY 0

{
    delay(120);

    writecommand(0x11);   // Sleep Out
    delay(120);

    // MADCTL: RGB + MX (correct for your panel)
    writecommand(0x36);
    writedata(0x48);
    Serial.println(">>> USING MY ST7796_Init.h <<<");
    // Pixel Format: 16-bit
    writecommand(0x3A);
    writedata(0x55);

    // Command Set Control
    writecommand(0xF0);
    writedata(0xC3);

    writecommand(0xF0);
    writedata(0x96);

    // Display Inversion Control
    writecommand(0xB4);
    writedata(0x02);

    // Entry Mode
    writecommand(0xB7);
    writedata(0xC6);

    // Power Control 1
    writecommand(0xC0);
    writedata(0xC0);
    writedata(0x00);

    // Power Control 2
    writecommand(0xC1);
    writedata(0x13);

    // Power Control 3
    writecommand(0xC2);
    writedata(0xA7);

    // VCOM Control
    writecommand(0xC5);
    writedata(0x21);

    // Display Output Ctrl Adjust
    writecommand(0xE8);
    writedata(0x40);
    writedata(0x8A);
    writedata(0x1B);
    writedata(0x1B);
    writedata(0x23);
    writedata(0x0A);
    writedata(0xAC);
    writedata(0x33);

    // Positive Gamma
    writecommand(0xE0);
    writedata(0xD2);
    writedata(0x05);
    writedata(0x08);
    writedata(0x06);
    writedata(0x05);
    writedata(0x02);
    writedata(0x2A);
    writedata(0x44);
    writedata(0x46);
    writedata(0x39);
    writedata(0x15);
    writedata(0x15);
    writedata(0x2D);
    writedata(0x32);

    // Negative Gamma
    writecommand(0xE1);
    writedata(0x96);
    writedata(0x08);
    writedata(0x0C);
    writedata(0x09);
    writedata(0x09);
    writedata(0x25);
    writedata(0x2E);
    writedata(0x43);
    writedata(0x42);
    writedata(0x35);
    writedata(0x11);
    writedata(0x11);
    writedata(0x28);
    writedata(0x2E);

    // Disable extended command set
    writecommand(0xF0);
    writedata(0x3C);
    writecommand(0xF0);
    writedata(0x69);

    delay(120);

    // *** IMPORTANT ***
    // Your panel requires inversion ON for correct colors
    writecommand(0x21);   // Display Inversion ON

    writecommand(0x29);   // Display ON
}