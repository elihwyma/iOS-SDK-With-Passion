/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCFairScheduler, BRCFairSource, BRCMinHeap, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCDeadlineScheduler : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    BRCMinHeap *_minHeap;
    NSString *_name;
    BRCFairSource *_source;
    NSObject<OS_dispatch_source> *_delay;
    long long _leeway;
    long long _lastSchedule;
    _Bool _isResumed;
    BRCFairScheduler *_fairScheduler;
    _Bool _isCancelled;
    CDUnknownBlockType _computeNextAdmissibleDateForScheduling;
}

@property (nonatomic, readonly) BRCFairScheduler *fairScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long coalescingLeeway;
@property (copy, nonatomic) CDUnknownBlockType computeNextAdmissibleDateForScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)dealloc;
- (void)close;
- (void)cancel;
- (void)resume;
- (void)signal;
- (void)suspend;
- (void)_schedule;
- (void)_close;
- (id)initWithName:(id)arg1 fairScheduler:(id)arg2;
- (void)addSource:(id)arg1 deadline:(long long)arg2;
- (_Bool)_setupTimerRequiredForDeadline:(long long)arg1 now:(long long)arg2;
- (void)runDeadlineSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
