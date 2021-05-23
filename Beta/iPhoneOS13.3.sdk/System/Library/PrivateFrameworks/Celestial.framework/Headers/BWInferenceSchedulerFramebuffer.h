/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList;

@interface BWInferenceSchedulerFramebuffer : NSObject

{
    struct os_unfair_lock_s framebufferLock;
    _Atomic int failedJobStatus;
    BWInferenceSchedulerJobList *_jobs;
    BWInferenceSchedulerGraph *_graph;
}

@property (nonatomic, readonly) BWInferenceSchedulerJobList *jobs;
@property (nonatomic, readonly) BWInferenceSchedulerGraph *graph;

- (void)dealloc;
- (void)resetJobStatesWithPreventionBlock:(CDUnknownBlockType)arg1;
- (id)initWithGraph:(id)arg1 jobList:(id)arg2;

@end
