/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSPointerArray, NURenderNode;

@protocol OS_dispatch_queue;

@interface NURenderContext : NSObject

{
    NSPointerArray *_jobs;
    NSMutableArray *_rateLimitedJobs;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _shouldCoalesceUpdates;
    double _minimumRenderInterval;
    long long _purpose;
    NURenderNode *_lastPrepareNode;
    NURenderNode *_lastRenderNode;
    unsigned long long _nextRenderTime;
}

@property (readonly) NSArray *jobs;
@property (readonly) long long jobCount;
@property (retain) NURenderNode *lastPrepareNode;
@property (retain) NURenderNode *lastRenderNode;
@property unsigned long long nextRenderTime;
@property double minimumRenderInterval;
@property (nonatomic) _Bool shouldCoalesceUpdates;
@property (nonatomic, readonly) long long purpose;

- (id)init;
- (id)debugDescription;
- (void)cancelAllRequests;
- (id)initWithPurpose:(long long)arg1;
- (void)addJob:(id)arg1;
- (void)removeJob:(id)arg1;
- (void)_removeJob:(id)arg1;
- (void)_jobFinished:(id)arg1;
- (void)_cancelAllJobs;
- (void)cancelAllJobs;
- (void)enqueueRateLimitedJob:(id)arg1;
- (void)_enqueueRateLimitedJob:(id)arg1;
- (id)dequeueRateLimitedJob;
- (id)_dequeueRateLimitedJob;
- (void)updateNextRenderTimeFromTime:(unsigned long long)arg1;

@end
