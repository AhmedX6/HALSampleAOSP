// FIXME: your file license if you have one

#pragma once

#include <vendor/hardware/automotive/test/1.0/ITest.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <log/log.h>

namespace vendor::hardware::automotive::test::implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Test : public V1_0::ITest {

    Test();
    virtual ~Test();

    // Methods from ::vendor::hardware::automotive::test::V1_0::ITest follow.
    Return<void> send(uint32_t data, const sp<::vendor::hardware::automotive::test::V1_0::ITestListener>& listener) override;
};

}  // namespace vendor::hardware::automotive::test::implementation
