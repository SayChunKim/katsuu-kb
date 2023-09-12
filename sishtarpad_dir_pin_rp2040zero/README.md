# NOTE
kindly avoid from registering these `usb_pid` as the macropads will be submitted for future auto-recognition such as VIA/VIAL firmwares. These information can be found under `info.json`.
VIA JSON file will need to match with these following pid to be detected.

## koyanpad 
```json 
"usb": {
        "vid": "0x2E8A",
        "pid": "0x6178",
        "device_version": "0.0.1"
    },
```

## reserved-macropad (to-be-disclosed) 
```json 
"usb": {
        "vid": "0x2E8A",
        "pid": "0x6179",
        "device_version": "0.0.1"
    },
```

## marinpad
```json 
"usb": {
        "vid": "0x2E8A",
        "pid": "0x6180",
        "device_version": "0.0.1"
    },
```
