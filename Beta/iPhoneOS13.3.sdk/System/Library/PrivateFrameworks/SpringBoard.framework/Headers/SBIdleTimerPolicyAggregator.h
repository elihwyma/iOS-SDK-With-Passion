/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SBBacklightController, SBDeviceUnlockAggdLogger, SBIdleTimerGlobalStateMonitor, SBProximitySensorManager;

@protocol SBIdleTimer, SBIdleTimerIdleEventHandler;

@interface SBIdleTimerPolicyAggregator : NSObject

{
    SBBacklightController *_backlightController;
    SBProximitySensorManager *_proximitySensorManager;
    id <SBIdleTimer> _idleTimer;
    id <SBIdleTimerIdleEventHandler> _idleEventHandler;
    NSMutableArray *_idleTimerHandlerChain;
    SBIdleTimerGlobalStateMonitor *_globalStateMonitor;
    unsigned int _disableAutoDimming:1;
    SBDeviceUnlockAggdLogger *_logger;
}

@property (retain, nonatomic, setter=_setIdleTimer:) id <SBIdleTimer> idleTimer;
@property (nonatomic, readonly, getter=_backlightController) SBBacklightController *backlightController;
@property (nonatomic, readonly, getter=_logger) SBDeviceUnlockAggdLogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBacklightController:(id)arg1 proximitySensorManager:(id)arg2 idleEventHandler:(id)arg3;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)_addIdleTimerHandler:(id)arg1;
- (void)_removeIdleTimerHandler:(id)arg1;
- (void)idleTimerGlobalCoordinator:(id)arg1 didActivateIdleTimer:(id)arg2;
- (id)_initWithBacklightController:(id)arg1 proximitySensorManager:(id)arg2 idleEventHandler:(id)arg3 globalStateMonitor:(id)arg4 unlockLogger:(id)arg5;

@end
