/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_zhonghong_bluetooth_BlueToothClient */

#ifndef _Included_com_zhonghong_bluetooth_BlueToothClient
#define _Included_com_zhonghong_bluetooth_BlueToothClient
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_zhonghong_bluetooth_BlueToothClient
 * Method:    HelloBlueTooth
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_zhonghong_bluetooth_BlueToothClient_HelloBlueTooth
  (JNIEnv *, jclass);

/*
 * Class:     com_zhonghong_bluetooth_BlueToothClient
 * Method:    GetBlueToothVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zhonghong_bluetooth_BlueToothClient_GetBlueToothVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_zhonghong_bluetooth_BlueToothClient
 * Method:    CCallJavaForString
 * Signature: (ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zhonghong_bluetooth_BlueToothClient_CCallJavaForString
  (JNIEnv *, jclass, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
