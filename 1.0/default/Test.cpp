#define LOG_TAG "Ahmed"

#include "Test.h"

namespace vendor::hardware::automotive::test::implementation {

Test::Test() {
    ALOGD("HalTest constructed !");
}

Test::~Test() {
    ALOGD("HalTest dtor !");
}

// Methods from ::vendor::hardware::automotive::test::V1_0::ITest follow.
Return<void> Test::send(uint32_t data, const sp<::vendor::hardware::automotive::test::V1_0::ITestListener>& listener) {
    // TODO implement

    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
Test* HIDL_FETCH_ITest(const char* /* name */) {
    return new Test();
}
//
}  // namespace vendor::hardware::automotive::test::implementation
