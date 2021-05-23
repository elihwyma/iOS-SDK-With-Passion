/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class SAThreadState;

__attribute__((visibility("hidden")))
@interface SAPAStyleThreadData : NSObject

{
    _Bool _isGlobalForcedIdle;
    SAThreadState *_threadState;
    unsigned long long _threadId;
    unsigned long long _dispatchQueueId;
}

@property (retain) SAThreadState *threadState;
@property unsigned long long threadId;
@property unsigned long long dispatchQueueId;
@property _Bool isGlobalForcedIdle;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_f92c3047 *)arg1 bufferLength:(unsigned long long)arg2;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_f92c3047 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

@end
