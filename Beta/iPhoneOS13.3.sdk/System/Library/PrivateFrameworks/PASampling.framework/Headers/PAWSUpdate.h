/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PAWSUpdate : NSObject

{
    double _frameStartTime;
    double _deferStartTime;
    double _workStartTime;
    double _workEndTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double frameStartTime;
@property (readonly) double waitStartTime;
@property (readonly) double waitEndTime;
@property (readonly) double deferStartTime;
@property (readonly) double deferEndTime;
@property (readonly) double workStartTime;
@property (readonly) double workEndTime;
@property (readonly) double frameEndTime;
@property (readonly) double waitDuration;
@property (readonly) double workDuration;
@property (readonly) double deferDuration;
@property (readonly) double frameDuration;
@property (readonly) _Bool wasIdle;

+ (id)classDictionaryKey;
+ (void)printASCIIBarLegendToStream:(id)arg1;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (void)printFPSASCIIBarToStream:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;

@end
