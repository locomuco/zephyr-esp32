Development vehicle for ESP32
#############################

Overview
********
ESP32 project to add WIFI...

Environment Setup
*****************
::

   export ZEPHYR_TOOLCHAIN_VARIANT="espressif"
   export ZEPHYR_SDK_INSTALL_DIR=/home/<user>/opt/zephyr-sdk-0.9.3
   export ESP_IDF_PATH="/home/<user>/repos/esp-idf"
   export ESPRESSIF_TOOLCHAIN_PATH="/home/<user>/esp/xtensa-esp32-elf/"
   source ~/repos/zephyr/zephyr-env.sh

Patching ESP libs:
   run idf-patch.sh in "esp-idf/components/esp32/lib" 
   this will rename some print functions for linking


(adapt to your needs <user>)

Build
*****
::

   mkdir -p build/ && cd build/

   # Use cmake to configure a Make-based build system:
   cmake ..

   # Now run make on the generated build system:
   make


Flash to HW
***********
::

   make flash
