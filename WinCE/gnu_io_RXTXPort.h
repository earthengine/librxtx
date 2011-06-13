/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gnu_io_RXTXPort */

#ifndef _Included_gnu_io_RXTXPort
#define _Included_gnu_io_RXTXPort
#ifdef __cplusplus
extern "C" {
#endif
#undef gnu_io_RXTXPort_debug
#define gnu_io_RXTXPort_debug 0L
#undef gnu_io_RXTXPort_DATABITS_5
#define gnu_io_RXTXPort_DATABITS_5 5L
#undef gnu_io_RXTXPort_DATABITS_6
#define gnu_io_RXTXPort_DATABITS_6 6L
#undef gnu_io_RXTXPort_DATABITS_7
#define gnu_io_RXTXPort_DATABITS_7 7L
#undef gnu_io_RXTXPort_DATABITS_8
#define gnu_io_RXTXPort_DATABITS_8 8L
#undef gnu_io_RXTXPort_PARITY_NONE
#define gnu_io_RXTXPort_PARITY_NONE 0L
#undef gnu_io_RXTXPort_PARITY_ODD
#define gnu_io_RXTXPort_PARITY_ODD 1L
#undef gnu_io_RXTXPort_PARITY_EVEN
#define gnu_io_RXTXPort_PARITY_EVEN 2L
#undef gnu_io_RXTXPort_PARITY_MARK
#define gnu_io_RXTXPort_PARITY_MARK 3L
#undef gnu_io_RXTXPort_PARITY_SPACE
#define gnu_io_RXTXPort_PARITY_SPACE 4L
#undef gnu_io_RXTXPort_STOPBITS_1
#define gnu_io_RXTXPort_STOPBITS_1 1L
#undef gnu_io_RXTXPort_STOPBITS_2
#define gnu_io_RXTXPort_STOPBITS_2 2L
#undef gnu_io_RXTXPort_STOPBITS_1_5
#define gnu_io_RXTXPort_STOPBITS_1_5 3L
#undef gnu_io_RXTXPort_FLOWCONTROL_NONE
#define gnu_io_RXTXPort_FLOWCONTROL_NONE 0L
#undef gnu_io_RXTXPort_FLOWCONTROL_RTSCTS_IN
#define gnu_io_RXTXPort_FLOWCONTROL_RTSCTS_IN 1L
#undef gnu_io_RXTXPort_FLOWCONTROL_RTSCTS_OUT
#define gnu_io_RXTXPort_FLOWCONTROL_RTSCTS_OUT 2L
#undef gnu_io_RXTXPort_FLOWCONTROL_XONXOFF_IN
#define gnu_io_RXTXPort_FLOWCONTROL_XONXOFF_IN 4L
#undef gnu_io_RXTXPort_FLOWCONTROL_XONXOFF_OUT
#define gnu_io_RXTXPort_FLOWCONTROL_XONXOFF_OUT 8L
#undef gnu_io_RXTXPort_debug
#define gnu_io_RXTXPort_debug 0L
#undef gnu_io_RXTXPort_debug_read
#define gnu_io_RXTXPort_debug_read 0L
#undef gnu_io_RXTXPort_debug_read_results
#define gnu_io_RXTXPort_debug_read_results 0L
#undef gnu_io_RXTXPort_debug_write
#define gnu_io_RXTXPort_debug_write 0L
#undef gnu_io_RXTXPort_debug_events
#define gnu_io_RXTXPort_debug_events 0L
#undef gnu_io_RXTXPort_debug_verbose
#define gnu_io_RXTXPort_debug_verbose 0L
/* Inaccessible static: z */
/* Inaccessible static: dsrFlag */
/*
 * Class:     gnu_io_RXTXPort
 * Method:    Initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_Initialize
  (JNIEnv *, jclass);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetParity
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeGetParity
  (JNIEnv *, jobject, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetFlowControlMode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeGetFlowControlMode
  (JNIEnv *, jobject, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetSerialPortParams
 * Signature: (IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetSerialPortParams
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    setflowcontrol
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_setflowcontrol
  (JNIEnv *, jobject, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    NativegetReceiveTimeout
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_NativegetReceiveTimeout
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    NativeisReceiveTimeoutEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_NativeisReceiveTimeoutEnabled
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    NativeEnableReceiveTimeoutThreshold
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_NativeEnableReceiveTimeoutThreshold
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    isDTR
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_isDTR
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    setDTR
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_setDTR
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    setRTS
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_setRTS
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    setDSR
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_setDSR
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    isCTS
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_isCTS
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    isDSR
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_isDSR
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    isCD
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_isCD
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    isRI
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_isRI
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    isRTS
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_isRTS
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    sendBreak
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_sendBreak
  (JNIEnv *, jobject, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    writeByte
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_writeByte
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    writeArray
 * Signature: ([BIIZ)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_writeArray
  (JNIEnv *, jobject, jbyteArray, jint, jint, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeDrain
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeDrain
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeavailable
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeavailable
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    readByte
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_readByte
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    readArray
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_readArray
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    readTerminatedArray
 * Signature: ([BII[B)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_readTerminatedArray
  (JNIEnv *, jobject, jbyteArray, jint, jint, jbyteArray);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    eventLoop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_eventLoop
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    interruptEventLoop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_interruptEventLoop
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetEventFlag
 * Signature: (IIZ)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_nativeSetEventFlag
  (JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeClose
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_nativeClose
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticSetSerialPortParams
 * Signature: (Ljava/lang/String;IIII)V
 */
JNIEXPORT void JNICALL Java_gnu_io_RXTXPort_nativeStaticSetSerialPortParams
  (JNIEnv *, jclass, jstring, jint, jint, jint, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticSetDSR
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticSetDSR
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticSetDTR
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticSetDTR
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticSetRTS
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticSetRTS
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticIsDSR
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticIsDSR
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticIsDTR
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticIsDTR
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticIsRTS
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticIsRTS
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticIsCTS
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticIsCTS
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticIsCD
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticIsCD
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticIsRI
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeStaticIsRI
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticGetBaudRate
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeStaticGetBaudRate
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticGetDataBits
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeStaticGetDataBits
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticGetParity
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeStaticGetParity
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeStaticGetStopBits
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeStaticGetStopBits
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetParityErrorChar
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_gnu_io_RXTXPort_nativeGetParityErrorChar
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetParityErrorChar
 * Signature: (B)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetParityErrorChar
  (JNIEnv *, jobject, jbyte);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetEndOfInputChar
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_gnu_io_RXTXPort_nativeGetEndOfInputChar
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetEndOfInputChar
 * Signature: (B)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetEndOfInputChar
  (JNIEnv *, jobject, jbyte);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetUartType
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetUartType
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetUartType
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gnu_io_RXTXPort_nativeGetUartType
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetBaudBase
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetBaudBase
  (JNIEnv *, jobject, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetBaudBase
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeGetBaudBase
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetDivisor
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetDivisor
  (JNIEnv *, jobject, jint);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetDivisor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gnu_io_RXTXPort_nativeGetDivisor
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetLowLatency
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetLowLatency
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetLowLatency
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeGetLowLatency
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeSetCallOutHangup
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeSetCallOutHangup
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeGetCallOutHangup
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeGetCallOutHangup
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXPort
 * Method:    nativeClearCommInput
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXPort_nativeClearCommInput
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
