/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PAMountStatusTracker : NSObject

{
    NSMutableDictionary *_mountStatusDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (id)init;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)takeCurrentMountStatusForMachTime:(double)arg1;
- (unsigned long long)forEachMountBlockingThread:(unsigned long long)arg1 withSanitizedPaths:(_Bool)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 runBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)forEachUnresponsiveMountWithSanitizedPaths:(_Bool)arg1 BetweenMachStartTime:(double)arg2 andEndTime:(double)arg3 runBlock:(CDUnknownBlockType)arg4;

@end
