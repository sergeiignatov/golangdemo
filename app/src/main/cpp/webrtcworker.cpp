#include <jni.h>
#include "logcat.h"
#include "webrtc_worker.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_golangdemo_MainActivity_sayHello(
        JNIEnv *env,
        jobject /* this */) {

    char *hello_go = SayHello();
    if (hello_go != nullptr) {
        jstring hello = env->NewStringUTF(hello_go);
        return hello;
    }
    return env->NewStringUTF("");
}
