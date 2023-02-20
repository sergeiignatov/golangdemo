#ifndef STREAMER_WEBRTC_WORKER_H
#define STREAMER_WEBRTC_WORKER_H

#ifdef __i386__
#include <x86/webrtc_worker.h>
#elif __x86_64__
#include <x86_64/webrtc_worker.h>
#elif __arm__
#include <armeabi-v7a/webrtc_worker.h>
#elif __aarch64__
#include <arm64-v8a/webrtc_worker.h>
#else
#endif

#endif //STREAMER_WEBRTC_WORKER_H
