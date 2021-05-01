#!/usr/bin/env bash

qmk json2c layout.json -o keymap.c
mkdir ~/qmk_firmware/keyboards/planck/keymaps/apsu/
cp rules.mk config.h keymap.c ~/qmk_firmware/keyboards/planck/keymaps/apsu/
qmk flash -j 4 -kb planck/rev6 -km apsu
