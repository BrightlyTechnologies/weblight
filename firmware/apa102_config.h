// Copyright 2015 Mike Tsao
//
// WebLight firmware
// https://github.com/sowbug/weblight

#ifndef APA102_CONFIG_H_
#define APA102_CONFIG_H_

///////////////////////////////////////////////////////////////////////
// Define I/O pins
// Clk and Data have to be connected to the same port
///////////////////////////////////////////////////////////////////////

#define apa102_port B     // Data and clk port
#define apa102_data 0    // Data out pin
#define apa102_clk  2    // Clk out pin

///////////////////////////////////////////////////////////////////////
// Define color byte order
///////////////////////////////////////////////////////////////////////

struct cRGB { uint8_t b; uint8_t g; uint8_t r; };   // BGR (APA102 Standard)
//struct cRGB { uint8_t g; uint8_t b; uint8_t r; };   // GBR



#endif /* APA102_CONFIG_H_ */
