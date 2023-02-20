#ifndef INC__LOGCAT_H
#define INC__LOGCAT_H

#include <android/log.h>

#define log_d(...) __android_log_print(ANDROID_LOG_DEBUG, "WebRTC", __VA_ARGS__)
#define log_w(...) __android_log_print(ANDROID_LOG_WARN, "WebRTC", __VA_ARGS__)
#define log_e(...) __android_log_print(ANDROID_LOG_ERROR, "WebRTC", __VA_ARGS__)

#endif
