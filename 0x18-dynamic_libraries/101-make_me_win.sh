!#/bin/bash
wget -P /tmp/ https://raw.github.com/Bolad001/alx-low_level_programming/master/0x18-dynamic_libraries/load.so
export LD_PRELOAD=/tmp/load.so
