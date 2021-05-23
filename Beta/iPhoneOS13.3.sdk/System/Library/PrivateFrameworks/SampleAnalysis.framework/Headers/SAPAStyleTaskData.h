/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, SATaskState;

__attribute__((visibility("hidden")))
@interface SAPAStyleTaskData : NSObject

{
    SATaskState *_taskState;
    NSArray *_threadStates;
}

@property (retain) SATaskState *taskState;
@property (retain) NSArray *threadStates;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_71ce830f *)arg1 bufferLength:(unsigned long long)arg2;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_71ce830f *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

@end
