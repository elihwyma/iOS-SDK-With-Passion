/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VKTimer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKThrottledGate : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    double _availableTickets;
    double _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}

- (void)dealloc;
- (id)description;
- (void)_timerFired:(id)arg1;
- (_Bool)_dispatchWaitingJobsIfNecessary;
- (void)_ensureTimer;
- (_Bool)_replenishAvailableJobsIfNecessary;
- (id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3;
- (void)dispatch:(CDUnknownBlockType)arg1;

@end
