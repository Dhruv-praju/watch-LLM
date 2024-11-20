// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("mysecondapplication");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("mysecondapplication")
//      }
//    }


#include <jni.h>
#include <string>
#include <fmt/core.h>

// Simple function that returns string
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_mysecondapplication_presentation_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Dhruv";
    return env->NewStringUTF(hello.c_str());
}

// New function to calculate the sum of integers
extern "C" JNIEXPORT jint JNICALL
Java_com_example_mysecondapplication_presentation_MainActivity_calculateSumJNI(
        JNIEnv* env,
        jobject /*this*/,
        jint a,
        jint b
        ){
 return a+b;
}

// Function using library
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_mysecondapplication_presentation_MainActivity_libStringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string message = fmt::format("Hello from {} using {}!", "C++", "fmt");
    return env->NewStringUTF(message.c_str());
}
