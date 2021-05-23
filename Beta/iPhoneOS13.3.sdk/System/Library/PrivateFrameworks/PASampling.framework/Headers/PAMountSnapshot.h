/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PAMountSnapshot : NSObject

{
    double _machTimestampWhenMeasured;
    double _machTimestampOfLastResponse;
    NSArray *_blockedThreadIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double machTimestampWhenMeasured;
@property (readonly) double machTimestampOfLastResponse;
@property (readonly) _Bool isUnresponsive;
@property (readonly) NSArray *blockedThreadIDs;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)isBlockingThread:(unsigned long long)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithSerializedMountSnapshot:(const CDStruct_92c9c886 *)arg1;
- (id)initWithStatus:(struct netfs_status *)arg1 atMachTime:(double)arg2;

@end
