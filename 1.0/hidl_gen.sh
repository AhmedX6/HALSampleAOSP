PACKAGE=vendor.hardware.automotive.test@1.0
LOC=default
hidl-gen -o $LOC -Lc++-impl -rvendor.hardware.automotive:vendor/interfaces -randroid.hidl:system/libhidl/transport $PACKAGE
#hidl-gen -o $LOC -Landroidbp-impl -rvendor.hardware.automotive:vendor/interfaces -randroid.hidl:system/libhidl/transport $PACKAGE
