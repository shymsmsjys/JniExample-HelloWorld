#include "kr_or_aesop_HelloWorld.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

JNIEXPORT void JNICALL Java_kr_or_aesop_HelloWorld_show1 (JNIEnv *a, jobject b) {
	printf("show1\n");
}

JNIEXPORT void JNICALL Java_kr_or_aesop_HelloWorld_show2 (JNIEnv *a, jobject b, jint c) {
	printf("show2\n");

}

JNIEXPORT void JNICALL Java_kr_or_aesop_HelloWorld_show3 (JNIEnv *a, jobject b, jintArray c) {
	jint *A = NULL;
	A = (*a)->GetIntArrayElements(a,c,NULL);
	if (A==NULL) {
		printf("error1");
	}
	printf("show3 : %d %d %d \n", A[0], A[1], A[2]);
}

JNIEXPORT void JNICALL Java_kr_or_aesop_HelloWorld_show4 (JNIEnv *a, jobject b, jchar c) {
	printf("show4 : %c \n",c);
}

JNIEXPORT void JNICALL Java_kr_or_aesop_HelloWorld_show5 (JNIEnv *a, jobject b, jintArray c) {
        jchar *A = NULL;
        A = (*a)->GetCharArrayElements(a,c,NULL);
        if (A==NULL) {
                printf("error1");
        }
        printf("show5 : %c %c %c \n", A[0], A[1], A[2]);
}

JNIEXPORT void JNICALL Java_kr_or_aesop_HelloWorld_show6__Ljava_lang_String_2(JNIEnv *a, jobject b, jstring c) {
	char strbuf[128];
	const char *sz = (*a)->GetStringUTFChars(a, c, 0);
	strcpy(strbuf, sz);
	printf("show6 : %s", strbuf);
	(*a)->ReleaseStringUTFChars(a, c, sz);
}

JNIEXPORT void JNICALL Java_kr_or_aesop_HelloWorld_show6__ (JNIEnv *a, jobject b) {
	jclass cls = (*a)->GetObjectClass(a,b);
	
	jmethodID funcM = (*a)->GetMethodID(a,cls,"func", "()V");
	if (funcM == 0) {
		printf("Method func ?? \n");
	} else {
		printf("Method fuck ok ..........\n");
		(*a)->CallVoidMethod(a,b, funcM);
	}
}

