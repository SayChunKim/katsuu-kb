# katsuu-kb
keebs designed by katsuu

## SISHTARPAD 
- Waifu-inspired artwork based macropad, empowered by QMK firmware and VIA indirectly.
- Unofficially fork from [QMK Repo](https://github.com/qmk/qmk_firmware/tree/master/keyboards/)
- There're couple versions originated from Ishtarpad / Sishtarpad:
- `/dist` dir includes precompiled firmware and json files of each variant.

### [dir_pin_promicro](https://github.com/SayChunKim/katsuu-kb/tree/main/sishtarpad_dir_pin_promicro)
Earlier version of sishtarpad. White-colored Sishtarpad development falls under this repo.

### [dir_pin_rp2040](https://github.com/SayChunKim/katsuu-kb/tree/main/sishtarpad_dir_pin_rp2040zero) 
2nd Generation of sishtarpad. Variants such Koyanpad, Marinpad developments fall under this repo.

## How to cook custom OLED animations?

1. create frames per animations in JPG/PNG under a folder. Must be size of 128x64 (pixel resolution of OLED)
2. use image2cpp (i personally prefer this for consistency) and create your `128x64` size bytearray
3. create new `YourAnimationFileName.h` under `/keymaps/via` and paste your frame bytecodes
4. edit `keymap.c` uncomment/include your own import filename.h
5. edit `render_animation(uint8_t frame)` method to refer your animation byteArray
6. edit `oled_task_user(void)` method to configure suitable timeframe for your animation (different fps different time buffer)

### Why no use `qmk-oled-animations`
- Python is a pain to certain Window versions so some of the commands doesn't work for me. Don't fix if it's ain't broken.

Lastly i would like to thank you who have been supporting my works and contributed indirectly for further developments of this macropad.
Signing off. katsuu
