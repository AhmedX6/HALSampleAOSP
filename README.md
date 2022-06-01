# HALSampleAOSP

mkdir aosp
cd aosp

repo init -u https://android.googlesource.com/platform/manifest -b android-12.1.0_r5 --depth=1

repo sync -j4


mkdir -p vendor/interfaces

cd vendor/interfaces

git clone https://github.com/AhmedX6/HALSampleAOSP.git test


## If you need to regenerate the interfaces

cd ../..

./aosp/vendor/interfaces/test/update-makefiles.sh


cd vendor/interfaces/1.0

./hidl_gen.sh


## end of If you need to regenerate the interfaces


mma
