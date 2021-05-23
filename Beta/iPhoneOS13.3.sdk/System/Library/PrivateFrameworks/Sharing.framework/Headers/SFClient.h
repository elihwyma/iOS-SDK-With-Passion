/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFClient : NSObject

{
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDeviceAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preventExitForLocaleReason:(id)arg1;
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)testContinuityKeyboardBegin:(_Bool)arg1;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)repairDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupDevice:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
