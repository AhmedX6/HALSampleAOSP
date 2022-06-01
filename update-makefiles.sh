#!/bin/bash

# Run from Android root, e.g.:
#
#   vendor/interfaces/test/update-makefiles.sh

source $ANDROID_BUILD_TOP/system/tools/hidl/update-makefiles-helper.sh

do_makefiles_update "vendor.hardware.automotive.test:vendor/interfaces/test"
