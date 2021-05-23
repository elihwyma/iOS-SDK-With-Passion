/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface PAHIDEvent : NSObject

{
    NSMutableArray *_steps;
    unsigned int _hidEventType;
    unsigned long long _hidEventMachAbs;
    double _hidEventTimestamp;
}

@property (readonly) unsigned long long hidEventMachAbs;
@property (readonly) double hidEventTimestamp;
@property (readonly) unsigned int hidEventType;
@property (readonly) NSArray *steps;

+ (id)classDictionaryKey;
+ (void)parseKTrace:(struct ktrace_session *)arg1 findingHIDEvents:(CDUnknownBlockType)arg2;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)hidEventWithHIDEventType:(unsigned int)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3;

- (id)debugDescription;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithHIDEventType:(unsigned int)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3;
- (id)initWithSerializedHIDEvent:(const CDStruct_55f67497 *)arg1;

@end
