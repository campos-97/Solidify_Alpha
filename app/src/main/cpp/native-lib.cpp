#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_josea_solidify_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint

JNICALL
Java_com_example_josea_solidify_MainActivity_getInt(JNIEnv *env, jobject /* this*/){
    return 555;
}

extern "C"
JNIEXPORT jint

JNICALL
Java_com_example_josea_solidify_MainActivity_crap(JNIEnv *env, jobject /* this*/){
    return 666;
}