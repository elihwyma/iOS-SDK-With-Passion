/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject

{
    _PASCoalescingTimer *_timer;
}

- (void)cancelPendingOperations;
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 operation:(CDUnknownBlockType)arg2;
- (void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2;
- (void)runImmediately;
- (void)runAfterStrictDelaySeconds:(double)arg1;

@end
