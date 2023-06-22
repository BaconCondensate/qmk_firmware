# Keychron K10 RGB

![Keychron K10](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [BaconCondensate](https://github.com/BaconCondensate)
* Hardware Supported: Keychron K10 RGB (tested on ANSI)
* Hardware Availability: [Keychron](https://www.keychron.com/products/keychron-k10-wireless-mechanical-keyboard)
Make example for this keyboard (after setting up your build environment):

    make keychron/k10/rgb/ansi:via

## How to Flash
Flashing example for this keyboard:

1. If your keyboard currently has stock firmware installed, put your keyboard first into bootloader by shorting the boot pins found under the spacebar before plugging in your keyboard to the PC. Otherwise, press `Fn + Esc` to put your keyboard into bootloader.
1. Download and run [Sonix Flasher](https://github.com/SonixQMK/sonix-flasher/releases/latest).
1. In Sonix Flasher, select `SN32F24X` under 'Device'. And select `0x00` as the qmk offset.
1. Lastly, click 'Flash QMK...' and locate the compiled firmware.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
