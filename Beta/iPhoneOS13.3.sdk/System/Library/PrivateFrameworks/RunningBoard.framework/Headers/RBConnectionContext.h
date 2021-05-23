/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class RBProcess;

@protocol RBAssertionManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging;

__attribute__((visibility("hidden")))
@interface RBConnectionContext : NSObject

{
    id <RBAssertionManaging> _assertionManager;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBProcessManaging> _processManager;
    id <RBProcessMonitoring> _processMonitor;
    id <RBStateCaptureManaging> _stateCaptureManager;
    RBProcess *_process;
}

@property (nonatomic, readonly) id <RBAssertionManaging> assertionManager;
@property (nonatomic, readonly) id <RBEntitlementManaging> entitlementManager;
@property (nonatomic, readonly) id <RBProcessManaging> processManager;
@property (nonatomic, readonly) id <RBProcessMonitoring> processMonitor;
@property (nonatomic, readonly) id <RBStateCaptureManaging> stateCaptureManager;
@property (nonatomic, readonly) RBProcess *process;

- (id)initWithAssertionManager:(id)arg1 entitlementManager:(id)arg2 processManager:(id)arg3 processMonitor:(id)arg4 stateCaptureManager:(id)arg5 process:(id)arg6;

@end
