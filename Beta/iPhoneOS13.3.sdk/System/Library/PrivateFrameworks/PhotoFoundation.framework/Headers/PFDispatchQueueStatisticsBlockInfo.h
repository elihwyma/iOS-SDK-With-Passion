/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFDispatchQueueStatisticsBlockInfo : NSObject

{
    _Bool _skippedExecuting;
    unsigned long long _receivedTimestamp;
    unsigned long long _enqueueTimestamp;
    unsigned long long _dequeueTimestamp;
    unsigned long long _executionTimestamp;
    unsigned long long _completionTimestamp;
}

@property _Bool skippedExecuting;
@property (readonly) unsigned long long receivedTimestamp;
@property (readonly) unsigned long long enqueueTimestamp;
@property (readonly) unsigned long long dequeueTimestamp;
@property (readonly) unsigned long long executionTimestamp;
@property (readonly) unsigned long long completionTimestamp;

+ (void)initialize;

- (id)init;
- (unsigned long long)currentAbsoluteTime;
- (unsigned long long)nsecBetween:(unsigned long long)arg1 and:(unsigned long long)arg2;
- (void)blockEnqueued;
- (void)blockDequeued;
- (void)blockWillStart;
- (void)blockCompleted;
- (unsigned long long)executionLatency;
- (unsigned long long)executionTime;

@end
