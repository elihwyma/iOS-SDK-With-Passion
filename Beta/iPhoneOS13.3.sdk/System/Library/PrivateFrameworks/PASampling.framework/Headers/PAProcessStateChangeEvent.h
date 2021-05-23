/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class PASampleTaskData;

@interface PAProcessStateChangeEvent : NSObject

{
    PASampleTaskData *_taskData;
    double _machTimestamp;
    unsigned long long _stateChangeType;
}

@property (nonatomic) unsigned long long stateChangeType;
@property (nonatomic, readonly) PASampleTaskData *taskData;
@property (nonatomic, readonly) double machTimestamp;

- (id)debugDescription;
- (id)initUnknownProcessStateChangeEventWithPid:(int)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;
- (id)initWithTaskData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;

@end
