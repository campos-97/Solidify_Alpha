#include <jni.h>
#include <string>
#include "pruebita.h"

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
Java_com_example_josea_solidify_MainActivity_getInt(JNIEnv *env, jobject /* this*/, int a, int b){
    return a+b;
}

extern "C"
JNIEXPORT jdouble

JNICALL
Java_com_example_josea_solidify_MainActivity_derivative(JNIEnv *env, jobject /* this*/, double x){
    return pruebita::numericalDerivative(x);
}