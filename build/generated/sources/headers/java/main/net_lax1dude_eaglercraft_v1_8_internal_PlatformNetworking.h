/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_lax1dude_eaglercraft_v1_8_internal_PlatformNetworking */

#ifndef _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformNetworking
#define _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformNetworking
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformNetworking
 * Method:    isString
 * Signature: (Lorg/teavm/jso/JSObject;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformNetworking_isString
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformNetworking
 * Method:    connectWebSocket
 * Signature: (Ljava/lang/String;)Ljava/lang/Boolean;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformNetworking_connectWebSocket
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformNetworking
 * Method:    nativeBinarySend
 * Signature: (Lorg/teavm/jso/websocket/WebSocket;Lorg/teavm/jso/typedarrays/ArrayBuffer;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformNetworking_nativeBinarySend
  (JNIEnv *, jclass, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
