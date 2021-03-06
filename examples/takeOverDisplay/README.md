## TcMenu Example: Take over the display

This example shows the use of a MCP23017 IO expander that has a HD44780 LCD 20x4 display connected on port B and the rotary encoder on port A, although could easily be changed to other kinds of IO expanders by redefining the two Io expander variables in the code generator properties. I've assumed this will be built on either a MEGA board, but should work equally well on any other Arduino board with only minor changes.

When the application starts up, it immediately takes over the display, and takes over the display every time the menu detects that it is idle. This is done by setting up a reset handler with the renderer class. You can also manually take over the display by pressing on the take display menu option.

There are also two dialogs, dialogs are small display independent rendering utilities, that allow to inform the user of a condition, or ask a question locally on the device. For example they are used heavily in the remote authentication. See the two action menu items that bring up an informational text and also a question. Open the serial port at 115200 and you'll see the button you pressed there for the question one.

This example also shows how to use an i2c AT24 EEPROM instead of the AVR one, comment in/out the one you want in the sketch.

To get started you can either build the circuit exactly as below and run without loading the menu designer, alternatively, just load the `takeOverDisplay.emf` file into the designer, select Code / Generate option and change to match your display.

## Files in the example and their purpose:

* `takeOverDisplay.cpp` contains the actual menu item definitions and code needed to start the menu. Do not edit this file, it is regenerated every time you run the designer.
* `takeOverDisplay.h` contains the declarations of the menu items, this allows you to access the menu items in your code.
* `takeOverDisplay.ino` the sketch, this is not fully regenerated every time you run the designer, instead only new callback functions are added if needed.
* `tcMenuLiquidCrystal.cpp` and `.h` are plugins that are managed by the library, these files are put into your code by the designer.
* `takeOverDisplay.emf` is the file where the designer saves the menu structure. It is not used at runtime, only by the designer.