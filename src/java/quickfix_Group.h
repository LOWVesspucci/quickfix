/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class quickfix_Group */

#ifndef _Included_quickfix_Group
#define _Included_quickfix_Group
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     quickfix_Group
 * Method:    create
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_create__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     quickfix_Group
 * Method:    create
 * Signature: (II[I)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_create__II_3I
  (JNIEnv *, jobject, jint, jint, jintArray);

/*
 * Class:     quickfix_Group
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_destroy
  (JNIEnv *, jobject);

/*
 * Class:     quickfix_Group
 * Method:    field
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_quickfix_Group_field
  (JNIEnv *, jobject);

/*
 * Class:     quickfix_Group
 * Method:    delim
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_quickfix_Group_delim
  (JNIEnv *, jobject);

/*
 * Class:     quickfix_Group
 * Method:    setString
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setString
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     quickfix_Group
 * Method:    setBoolean
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setBoolean
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     quickfix_Group
 * Method:    setChar
 * Signature: (IC)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setChar
  (JNIEnv *, jobject, jint, jchar);

/*
 * Class:     quickfix_Group
 * Method:    setInt
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setInt
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     quickfix_Group
 * Method:    setDouble
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setDouble__ID
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     quickfix_Group
 * Method:    setDouble
 * Signature: (IDI)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setDouble__IDI
  (JNIEnv *, jobject, jint, jdouble, jint);

/*
 * Class:     quickfix_Group
 * Method:    setUtcTimeStamp
 * Signature: (ILjava/util/Date;)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeStamp__ILjava_util_Date_2
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     quickfix_Group
 * Method:    setUtcTimeStamp
 * Signature: (ILjava/util/Date;Z)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeStamp__ILjava_util_Date_2Z
  (JNIEnv *, jobject, jint, jobject, jboolean);

/*
 * Class:     quickfix_Group
 * Method:    setUtcTimeOnly
 * Signature: (ILjava/util/Date;)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeOnly__ILjava_util_Date_2
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     quickfix_Group
 * Method:    setUtcTimeOnly
 * Signature: (ILjava/util/Date;Z)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeOnly__ILjava_util_Date_2Z
  (JNIEnv *, jobject, jint, jobject, jboolean);

/*
 * Class:     quickfix_Group
 * Method:    setUtcDateOnly
 * Signature: (ILjava/util/Date;)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_setUtcDateOnly
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     quickfix_Group
 * Method:    getString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_quickfix_Group_getString
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    getBoolean
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Group_getBoolean
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    getChar
 * Signature: (I)C
 */
JNIEXPORT jchar JNICALL Java_quickfix_Group_getChar
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    getInt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_quickfix_Group_getInt
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    getDouble
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_quickfix_Group_getDouble
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    getUtcTimeStamp
 * Signature: (I)Ljava/util/Date;
 */
JNIEXPORT jobject JNICALL Java_quickfix_Group_getUtcTimeStamp
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    getUtcTimeOnly
 * Signature: (I)Ljava/util/Date;
 */
JNIEXPORT jobject JNICALL Java_quickfix_Group_getUtcTimeOnly
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    getUtcDateOnly
 * Signature: (I)Ljava/util/Date;
 */
JNIEXPORT jobject JNICALL Java_quickfix_Group_getUtcDateOnly
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    isSetField
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Group_isSetField
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    removeField
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_removeField
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    addGroup
 * Signature: (Lquickfix/Group;)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_addGroup
  (JNIEnv *, jobject, jobject);

/*
 * Class:     quickfix_Group
 * Method:    replaceGroup
 * Signature: (ILquickfix/Group;)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_replaceGroup
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     quickfix_Group
 * Method:    getGroup
 * Signature: (ILquickfix/Group;)Lquickfix/Group;
 */
JNIEXPORT jobject JNICALL Java_quickfix_Group_getGroup
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     quickfix_Group
 * Method:    removeGroup
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_removeGroup__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    removeGroup
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_removeGroup__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     quickfix_Group
 * Method:    hasGroup
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Group_hasGroup__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Group
 * Method:    hasGroup
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Group_hasGroup__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     quickfix_Group
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_quickfix_Group_clear
  (JNIEnv *, jobject);

/*
 * Class:     quickfix_Group
 * Method:    isEmpty
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Group_isEmpty
  (JNIEnv *, jobject);

/*
 * Class:     quickfix_Group
 * Method:    groupIteratorCreate
 * Signature: (Lquickfix/Group$Iterator;)Lquickfix/Group$Iterator;
 */
JNIEXPORT jobject JNICALL Java_quickfix_Group_groupIteratorCreate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     quickfix_Group
 * Method:    groupIteratorHasNext
 * Signature: (Lquickfix/Group$Iterator;)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Group_groupIteratorHasNext
  (JNIEnv *, jobject, jobject);

/*
 * Class:     quickfix_Group
 * Method:    groupIteratorNext
 * Signature: (Lquickfix/Group$Iterator;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_quickfix_Group_groupIteratorNext
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
