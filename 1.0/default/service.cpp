#define LOG_TAG "HalTest"

#include <unistd.h>

#include <hidl/HidlTransportSupport.h>
#include <utils/Errors.h>
#include <utils/StrongPointer.h>

#include "Test.h"

// libhidl:
using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

// Generated HIDL files
using vendor::hardware::automotive::test::V1_0::ITest;

// The namespace in which all our implementation code lives
using namespace vendor::hardware::automotive::test::implementation;
using namespace android;

// Main service entry point
int main() {
    // Create an instance of our service class
    android::sp<ITest> service = new Test();
    configureRpcThreadpool(1, true /*callerWillJoin*/);

    if (service->registerAsService() != OK) {
        ALOGE("HalTest registerAsService failed");
        return 1;
    }
    ALOGD("HalTest registerAsService ok !");

    // Join (forever) the thread pool we created for the service above
    joinRpcThreadpool();

    // We don't ever actually expect to return, so return an error if we do get here
    return 2;
}