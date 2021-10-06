// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("mymodule1");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("mymodule1")
//      }
//    }

#include <iostream>
#include <jni.h>

extern "C"
JNIEXPORT jobject JNICALL
Java_br_com_opensource_mymodule1_MainActivity_printString(JNIEnv *env, jobject thiz,
                                                          jobject context, jobject str) {
    // TODO: implement printString()
    env->FindClass("br/com/opensource/mymodule1/MainActivity");
    return str;
}
extern "C"
JNIEXPORT jobject JNICALL
Java_br_com_opensource_mymodule1_MainActivity_stdcout(JNIEnv *env, jobject thiz, jobject context,
                                                      jobject str) {
    // TODO: implement stdcout()
    std::cout << str << std::endl;
    return str;
}