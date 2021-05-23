/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface PAWSUpdateDataStore : NSObject

{
    NSMutableArray *_wsUpdateArray;
    NSObject<OS_dispatch_queue> *_wsUpdateCallbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)classDictionaryKey;
+ (void)_printFrameReportExplanationToStream:(id)arg1;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (id)init;
- (void)dealloc;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (id)_getWSUpdateArraySnapshot;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 andEndIndex:(unsigned long long)arg2 andStartDisplayIndex:(unsigned long long)arg3 withSampleDataStore:(id)arg4 toStream:(id)arg5;

@end
