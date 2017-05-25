#include <jni.h>
#include <string>

using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_administrator_jnitest_MainActivity_getText(JNIEnv *env, jobject instance) {

    // TODO
    string test = "i am yangshaopeng";

    return env->NewStringUTF(test.c_str());
}


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_administrator_jnitest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
