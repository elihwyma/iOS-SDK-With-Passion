/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSData, NSSet, PAMicrostackshotData;

@interface PAStackshot : NSObject

{
    NSData *_traceBufData;
    unsigned long long _startOffset;
    double _machTimestamp;
    double _wallTimestamp;
    PAMicrostackshotData *_microstackshotData;
    NSSet *_deadPids;
}

@property (readonly) double machTimestamp;
@property (readonly) double wallTimestamp;
@property (readonly) PAMicrostackshotData *microstackshotData;
@property (readonly) _Bool isMicrostackshot;
@property (readonly) NSSet *deadPids;

- (id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3;
- (_Bool)iterateTasks:(CDUnknownBlockType)arg1;

@end
