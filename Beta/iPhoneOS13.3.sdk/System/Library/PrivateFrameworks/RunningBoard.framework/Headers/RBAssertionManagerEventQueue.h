/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSString, RBEventQueue, RBProcessMap;

@protocol OS_dispatch_queue, RBAssertionManagerQueueDelegate;

@interface RBAssertionManagerEventQueue : NSObject

{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    RBEventQueue *_eventQueue;
    RBProcessMap *_expirationWarningEvents;
    id <RBAssertionManagerQueueDelegate> _delegate;
}

@property (weak, nonatomic) id <RBAssertionManagerQueueDelegate> delegate;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_queue_updateEventsForAssertion:(id)arg1;
- (void)_queue_enqueueProcessExpirationEventsForProcesses:(id)arg1;
- (void)_queue_removeEventsForContext:(id)arg1;
- (void)_queue_enqueueEventsForAssertion:(id)arg1;
- (void)_queue_enqueueWarningEventForAssertion:(id)arg1 startTime:(double)arg2;
- (void)_queue_enqueueInvalidationEventForAssertion:(id)arg1 startTime:(double)arg2;
- (void)updateEventsForAssertions:(id)arg1;

@end
