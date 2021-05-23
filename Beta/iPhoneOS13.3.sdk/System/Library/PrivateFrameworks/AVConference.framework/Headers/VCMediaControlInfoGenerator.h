/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoGenerator : NSObject

{
    unsigned int _type;
    struct __CFDictionary *_callbacksDict;
    NSMutableArray *_controlInfoPool;
    struct _opaque_pthread_mutex_t _controlInfoPoolLock;
    unsigned char _version;
    unsigned int _optionBitmap;
}

@property (readonly) unsigned int type;
@property (readonly) unsigned char version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void *)newControlInfo;
- (void *)newControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (id)newControlInfoFromPool;
- (void)disposeControlInfo:(id)arg1;
- (id)initWithType:(unsigned int)arg1 version:(unsigned char)arg2;
- (int)registerFillBlobCallback:(CDUnknownFunctionPointerType)arg1 processBlobCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (int)deregisterCallbacksWithContext:(void *)arg1;
- (void *)newMediaControlInfo;
- (void *)newMediaControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (int)addMediaControlInfoOption:(unsigned int)arg1;
- (unsigned long long)feedbackSize;

@end
