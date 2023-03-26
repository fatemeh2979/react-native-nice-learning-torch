#include <jni.h>
#include "react-native-nice-learning-torch.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_nicelearningtorch_NiceLearningTorchModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return nicelearningtorch::multiply(a, b);
}
