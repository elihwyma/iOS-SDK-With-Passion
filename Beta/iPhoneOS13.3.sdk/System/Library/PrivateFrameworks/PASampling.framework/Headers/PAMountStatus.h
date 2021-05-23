/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PAMountStatus : NSObject

{
    NSString *_path;
    NSString *_type;
    NSMutableArray *_snapshots;
}

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)initWithName:(id)arg1 andType:(id)arg2;
- (id)copyName;
- (id)copySanitizedName;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)addStatus:(struct netfs_status *)arg1 atMachTime:(double)arg2;
- (_Bool)isBlockingThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (_Bool)isUnresponsiveBetweenMachStartTime:(double)arg1 andEndTime:(double)arg2;
- (id)copyUnresponsiveDescriptionForThread:(unsigned long long)arg1 withSanitizedPaths:(_Bool)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 includeThreadIDs:(_Bool)arg5;

@end
