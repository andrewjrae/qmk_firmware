# Enable leader keys
LEADER_ENABLE = yes
OLED_DRIVER_ENABLE = yes   # Enables the use of OLED displays

# Save firmware space
MOUSEKEY_ENABLE = no
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
ENCODER_ENABLE = no       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow

# If flashing the right side
RIGHT = 0
ifeq ($(RIGHT), 1)
	OLED_DRIVER_ENABLE = no   # Enables the use of OLED displays
	CFLAGS += "-D MY_SPLIT_RIGHT"
endif
