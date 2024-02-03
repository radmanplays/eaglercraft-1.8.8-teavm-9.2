/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_lax1dude_eaglercraft_v1_8_internal_PlatformInput */

#ifndef _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
#define _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    onBeforeCloseRegister
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_onBeforeCloseRegister
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    hasBeenActive
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_hasBeenActive
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getOffsetX
 * Signature: (Lorg/teavm/jso/dom/events/MouseEvent;)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getOffsetX
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getOffsetY
 * Signature: (Lorg/teavm/jso/dom/events/MouseEvent;)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getOffsetY
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getWhich
 * Signature: (Lorg/teavm/jso/dom/events/KeyboardEvent;)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getWhich
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    isPointerLocked
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_isPointerLocked
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    fullscreenMediaQuery
 * Signature: ()Lorg/teavm/jso/JSObject;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_fullscreenMediaQuery
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mediaQueryMatches
 * Signature: (Lorg/teavm/jso/JSObject;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mediaQueryMatches
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    lockKeys
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_lockKeys
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    unlockKeys
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_unlockKeys
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    checkKeyboardLockSupported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_checkKeyboardLockSupported
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    exitFullscreen
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_exitFullscreen
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    requestFullscreen
 * Signature: (Lorg/teavm/jso/dom/html/HTMLElement;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_requestFullscreen
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
