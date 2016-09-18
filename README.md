# arduino-16x2-lcd
Arduino example sketch for controlling Hitachi HD44780 compatible 16x2 LCD displays.

This is the code I use to control the display Hitachi HD44780 compatible 16x2 LCD display from my Chinese "Geekcreit"-brand Arduino clone. The display has a I2C module soldered on the back.

It is connected like this:

LCD: GND -> Uno: GND
LCD: VCC -> Uno: 5V
LCD: SDA -> Uno: A4
LCD: SCL -> Uno: A5

See my blog post at https://oneguyoneblog.com/2016/08/08/geekcreit-uno-16x2-lcd-display/
