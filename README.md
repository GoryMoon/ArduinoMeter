ArduinoMeter
=========

This arduino program will read the analog input of `A0` on an arduino UNO
and will either display that as the table below or the input value will be
outputed as binary on the pins 3-10.
The ouput depends on what mode the program is in, to change mode you need to press a button


| Input   | Out Pins |
| ------- | -------: |
| 0-31    | 3        |
| 32-63   | 3-4      |
| 64-95   | 3-5      |
| 96-127  | 3-6      |
| 128-159 | 3-7      |
| 160-191 | 3-8      |
| 192-223 | 3-9      |
| 224-255 | 3-10     |

Setup
----

Some type of analog input needs to be connected to `A0` input.
A button needs to connected to the `Digital 2` pin.
Then 8 leds needs to be connected to the `Digital 3-10` pins.

**or**

Change the values in `main.h` to the pins of your liking.

Compiling
----

To compile you need to have [Searduino][1] installed, recommended in a linux environment.
Then to upload to an arduino use the following:
```sh
make upload
```

or to run on the simulator use:
```sh
make sim-start

```

License
----

GNU LGLP v.3

[1]: https://searduino.wordpress.com/