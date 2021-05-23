/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFXPCClient.h>

@class NSDate, NSObject;

@protocol OS_dispatch_source;

@interface SFChargingUICoordinator : SFXPCClient

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _animationSPIAdopted;
    _Bool _runningAsCarry;
    NSDate *_uiUpdateMaxDate;
    NSDate *_uiUpdateRequestDate;
    CDUnknownBlockType _uiUpdateHandler;
    _Bool _uiUpdateMinTimeElapsed;
    _Bool _uiUpdateShouldDismiss;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    long long _defaultDuration;
}

@property (nonatomic) long long defaultDuration;

- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)activate;
- (_Bool)shouldEscapeXpcTryCatch;
- (void)_requestToStartAnimationAtDate:(id)arg1;
- (void)_dismissUI;
- (void)_timingRestartMinTimer;
- (void)_sendDismissUIWithReason:(long long)arg1;
- (void)sendDismissUIWithReason:(long long)arg1;
- (void)_timingInvalidateMinTimer;
- (void)_initialViewControllerDidAppear;
- (void)initialViewControllerDidAppear;
- (void)_initialViewControllerDidDisappear;
- (void)initialViewControllerDidDisappear;
- (void)requestAnimationDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestToShowUIWithHandler:(CDUnknownBlockType)arg1;
- (void)requestToStartAnimationAtDate:(id)arg1;
- (void)requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)_requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;

@end
