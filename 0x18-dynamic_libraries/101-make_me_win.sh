#!/bin/bash
wget -P /tmp https://github.com/rimchafik/alx/raw/main/0x18%20C%20-%20Dynamic%20libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
