/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXThreadTimerTask, NSString, NSThread;

@interface AXThreadTimer : NSObject

{
    NSThread *_thread;
    CDUnknownBlockType _cancelBlock;
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    AXThreadTimerTask *_task;
}

@property (retain, nonatomic) AXThreadTimerTask *task;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isPending) _Bool pending;

- (void)cancel;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)_runAfterDelay:(id)arg1;
- (id)initWithThread:(id)arg1;

@end
