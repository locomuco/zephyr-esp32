set(BOARD esp32)

include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(NONE)

target_sources(app PRIVATE src/main.c)
target_sources(app PRIVATE src/stubs.c)


zephyr_include_directories(
  src
  )

zephyr_link_libraries(
  ## wifi
  core
  net80211
  wpa
  core
  net80211
  pp
  coexist
  phy
  rtc
  wpa2
  wps

  ## eps-idf wifi libs refer gcc libs symbols, so linked in libgcc
  gcc
  -L${ESP_IDF_PATH}/components/esp32
  -L${ESP_IDF_PATH}/components/esp32/lib
  )
