// ============================================================
//  Custom Rotation.h for ST7796U (RGB-wired, vendor-accurate)
// ============================================================

rotation = m % 4;  // vendor only supports 0–3

writecommand(TFT_MADCTL);

switch (rotation) {

  case 0:   // Portrait
    writedata(0x48);   // MX + RGB
    _width  = _init_width;
    _height = _init_height;
    break;

  case 1:   // Landscape (USB on right)
    writedata(0x28);   // MV + RGB
    _width  = _init_height;
    _height = _init_width;
    break;

  case 2:   // Portrait inverted
    writedata(0x88);   // MY + RGB
    _width  = _init_width;
    _height = _init_height;
    break;

  case 3:   // Landscape inverted (USB on left)
    writedata(0xE8);   // MX + MY + MV + RGB
    _width  = _init_height;
    _height = _init_width;
    break;
}