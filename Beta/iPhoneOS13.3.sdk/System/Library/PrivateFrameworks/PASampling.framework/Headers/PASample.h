/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface PASample : NSObject

{
    NSMutableDictionary *_tasks;
    double _machTimestamp;
    double _wallTimestamp;
    PASample *_previousSample;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double machTimestamp;
@property (readonly) double wallTimestamp;
@property (readonly) NSArray *sampleTasks;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (id)init;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)setWallTime:(double)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)addSampleTask:(id)arg1;
- (id)initWithMachTime:(double)arg1 andWallTime:(double)arg2;
- (id)sampleTaskForPid:(int)arg1;
- (id)initWithStackshot:(id)arg1;
- (id)_initWithSerializedData:(const CDStruct_74e41edf *)arg1;
- (void)setMachTime:(double)arg1;

@end
