/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject

{
    unsigned long long _clock;
    unsigned long long _nextSchedulableTick;
    unsigned long long _stopTime;
    CNQueue *_queue;
    _Bool _isStarted;
    _Bool _isPerforming;
}

@property (nonatomic, readonly) unsigned long long nextSchedulableTick;
@property (nonatomic, readonly) unsigned long long stopTime;
@property (nonatomic, readonly) CNQueue *queue;
@property (nonatomic, readonly) _Bool isStarted;
@property (nonatomic, readonly) _Bool isPerforming;
@property (readonly) unsigned long long clock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double timestamp;

+ (unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2;
+ (id)providerWithScheduler:(id)arg1;

- (id)init;
- (void)stop;
- (void)start;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_nextSchedulableTick;
- (id)_scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned long long)arg2;
- (_Bool)_performJobs;
- (void)advanceTo:(unsigned long long)arg1;
- (void)advanceBy:(unsigned long long)arg1;
- (_Bool)hasJobsScheduled;

@end
