/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, RBAssertionManaging;

__attribute__((visibility("hidden")))
@interface RBResourceViolationHandler : NSObject

{
    id <RBAssertionManaging> _assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
}

+ (id)sharedInstance;

- (void)handleCPUViolationMessage:(id)arg1 fromConnection:(id)arg2;
- (void)handleMessage:(id)arg1 fromConnection:(id)arg2;
- (void)startWithAssertionManager:(id)arg1;

@end
