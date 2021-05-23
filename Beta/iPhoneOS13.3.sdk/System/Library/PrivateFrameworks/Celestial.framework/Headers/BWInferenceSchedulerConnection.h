/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceSchedulerFramebuffer, BWInferenceSchedulerResourceCoordinator;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BWInferenceSchedulerConnection : NSObject

{
    unsigned long long _identifier;
    BWInferenceSchedulerResourceCoordinator *_coordinator;
    BWInferenceSchedulerFramebuffer *_framebuffer;
    NSObject<OS_dispatch_queue> *_inferenceQueue;
    NSObject<OS_dispatch_queue> *_scalingQueue;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_group> *_coordinationGroup;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *inferenceQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *scalingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *submissionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *coordinationGroup;
@property (nonatomic, readonly) BWInferenceSchedulerResourceCoordinator *coordinator;
@property (retain, nonatomic) BWInferenceSchedulerFramebuffer *framebuffer;

- (id)init;
- (void)dealloc;
- (id)initWithInferenceTargetQueue:(id)arg1 scalingTargetQueue:(id)arg2 submissionTargetQueue:(id)arg3;

@end
