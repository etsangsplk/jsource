/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jx_utils_jnative */

#ifndef _Included_jx_utils_jnative
#define _Included_jx_utils_jnative
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: stdmsgloop */
/* Inaccessible static: inputready */
/* Inaccessible static: input */
/* Inaccessible static: count */
/* Inaccessible static: bresult */
/* Inaccessible static: rindex */
/* Inaccessible static: intbuf */
/* Inaccessible static: intbufndx */
/*
 * Class:     jx_utils_jnative
 * Method:    JInit
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_jx_utils_jnative_JInit
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     jx_utils_jnative
 * Method:    JDo
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_jx_utils_jnative_JDo
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     jx_utils_jnative
 * Method:    JDoFirst
 * Signature: (I[B)I
 */
JNIEXPORT jint JNICALL Java_jx_utils_jnative_JDoFirst
  (JNIEnv *, jclass, jint, jbyteArray);

/*
 * Class:     jx_utils_jnative
 * Method:    getints
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_jx_utils_jnative_getints
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     jx_utils_jnative
 * Method:    getpixels
 * Signature: (II[I)V
 */
JNIEXPORT void JNICALL Java_jx_utils_jnative_getpixels
  (JNIEnv *, jclass, jint, jint, jintArray);

/*
 * Class:     jx_utils_jnative
 * Method:    getbytes
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_jx_utils_jnative_getbytes
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     jx_utils_jnative
 * Method:    getlocalecount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jx_utils_jnative_getlocalecount
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
