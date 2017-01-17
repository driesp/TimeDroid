#include <jni.h>
#include <string>

extern "C"
jstring
Java_io_github_driesp_timedroid_TimeDroid_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
