/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REActivityTracker, RERelevanceEngine;

@protocol OS_dispatch_queue;

@interface RERelevanceEngineSubsystem : NSObject

{
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;
    REActivityTracker *_activityTracker;
    _Bool _running;
    struct os_unfair_lock_s _lock;
    RERelevanceEngine *_relevanceEngine;
}

@property (weak, nonatomic, readonly) RERelevanceEngine *relevanceEngine;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)setRunning:(_Bool)arg1;
- (void)beginActivity:(id)arg1 forObject:(id)arg2;
- (void)endActivity:(id)arg1 forObject:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)trackObject:(id)arg1;
- (void)activityTracker:(id)arg1 didBeginActivity:(id)arg2;
- (void)activityTracker:(id)arg1 didEndActivity:(id)arg2;
- (void)withdrawObject:(id)arg1;

@end
