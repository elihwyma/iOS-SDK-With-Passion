/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class PASampleThreadData;

@interface PAThreadStateChangeEvent : NSObject

{
    PASampleThreadData *_threadData;
    double _machTimestamp;
    unsigned long long _stateChangeType;
}

@property (nonatomic) double machTimestamp;
@property (nonatomic) unsigned long long stateChangeType;
@property (nonatomic, readonly) PASampleThreadData *threadData;

- (id)debugDescription;
- (id)initUnknownThreadStateChangeEventWithTid:(unsigned long long)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;
- (id)initWithThreadData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;

@end
