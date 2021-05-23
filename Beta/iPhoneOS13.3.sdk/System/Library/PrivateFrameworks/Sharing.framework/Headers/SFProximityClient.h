/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFProximityClient : NSObject

{
    _Bool _activateCalled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    _Bool _shouldAdvertise;
    _Bool _wantsUpdates;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _deviceEnteredImmediateHandler;
    CDUnknownBlockType _deviceExitedImmediateHandler;
    CDUnknownBlockType _deviceEnteredNearbyHandler;
    CDUnknownBlockType _deviceExitedNearbyHandler;
    CDUnknownBlockType _deviceWasSelectedHandler;
    CDUnknownBlockType _deviceWillTriggerHandler;
    CDUnknownBlockType _deviceDidUntriggerHandler;
    CDUnknownBlockType _deviceWasDismissedHandlerEx;
    CDUnknownBlockType _deviceWasDismissedHandler;
    CDUnknownBlockType _deviceUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType deviceUpdateHandler;
@property (nonatomic) _Bool wantsUpdates;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) _Bool shouldAdvertise;
@property (copy, nonatomic) CDUnknownBlockType deviceEnteredImmediateHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceExitedImmediateHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceEnteredNearbyHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceExitedNearbyHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceWasSelectedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceWillTriggerHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceDidUntriggerHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceWasDismissedHandlerEx;
@property (copy, nonatomic) CDUnknownBlockType deviceWasDismissedHandler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)proximityClientDeviceEnteredImmediate:(id)arg1;
- (void)proximityClientDeviceExitedImmediate:(id)arg1;
- (void)proximityClientDeviceEnteredNearby:(id)arg1;
- (void)proximityClientDeviceExitedNearby:(id)arg1;
- (void)proximityClientDeviceWasDismissedHandler:(id)arg1 reason:(long long)arg2;
- (void)proximityClientDeviceWasSelectedHandler:(id)arg1;
- (void)proximityClientDeviceWillTriggerHandler:(id)arg1;
- (void)proximityClientDeviceDidUntriggerHandler:(id)arg1;
- (void)proximityClientDeviceUpdated:(id)arg1 rssi:(long long)arg2 state:(long long)arg3;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_dismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_provideContent:(id)arg1 forDevice:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provideContent:(id)arg1 forDevice:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestScannerTimerReset;

@end
