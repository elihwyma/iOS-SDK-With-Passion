/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PAFanSpeed : NSObject

{
    double _machTimestamp;
    int _fanSpeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double machTimesamp;
@property (readonly) int fanSpeed;
@property (readonly) _Bool fanSpeedIsValid;

+ (id)classDictionaryKey;
+ (int)numFans;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (id)init;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithMachTime:(double)arg1;
- (id)initWithSerializedFanSpeed:(const CDStruct_fc10d2b4 *)arg1;

@end
