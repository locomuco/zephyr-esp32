#!/bin/bash
xtensa-esp32-elf-objcopy --redefine-sym phy_printf=printf libphy.a libphy.a
xtensa-esp32-elf-objcopy --redefine-sym net80211_printf=printf libnet80211.a libnet80211.a
xtensa-esp32-elf-objcopy --redefine-sym coexist_printf=printf libcoexist.a libcoexist.a
