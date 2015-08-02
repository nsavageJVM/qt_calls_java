#include <jni.h>
#include <stdio.h>
#include "com_jni_qt_HelloJNI.h"

JNIEXPORT void JNICALL Java_com_jni_qt_HelloJNI_sayHello(JNIEnv *env, jobject thisObj)
{
   printf("Hello World!\n");
   return;
}
