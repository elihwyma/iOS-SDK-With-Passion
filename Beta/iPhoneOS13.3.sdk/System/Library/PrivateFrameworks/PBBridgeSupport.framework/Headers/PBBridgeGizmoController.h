/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>

@class NSString, NSTimer;

@protocol PBBridgeConnectionDelegate;

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate

{
    _Bool _canBeginActivation;
    _Bool _readyToCreatePasscode;
    unsigned short _activationState;
    id <PBBridgeConnectionDelegate> _delegate;
    NSString *_languageIdentifer;
    NSString *_regionIdentifer;
    NSTimer *_activationTimeout;
    NSString *_internalLastSendMessageID;
    CDUnknownBlockType _updateLanguageCompletion;
    CDUnknownBlockType _updateRegionCompletion;
    CDUnknownBlockType _sessionCompletion;
    CDUnknownBlockType _activationCompletion;
    CDUnknownBlockType _siriStateCompletion;
    CDUnknownBlockType _enableSiriCompletion;
}

@property (nonatomic) unsigned short activationState;
@property (retain, nonatomic) NSTimer *activationTimeout;
@property (retain, nonatomic) NSString *internalLastSendMessageID;
@property (copy, nonatomic) CDUnknownBlockType updateLanguageCompletion;
@property (copy, nonatomic) CDUnknownBlockType updateRegionCompletion;
@property (copy, nonatomic) CDUnknownBlockType sessionCompletion;
@property (copy, nonatomic) CDUnknownBlockType activationCompletion;
@property (copy, nonatomic) CDUnknownBlockType siriStateCompletion;
@property (copy, nonatomic) CDUnknownBlockType enableSiriCompletion;
@property (weak, nonatomic) id <PBBridgeConnectionDelegate> delegate;
@property (nonatomic, readonly) NSString *languageIdentifer;
@property (nonatomic, readonly) NSString *regionIdentifer;
@property (nonatomic, readonly) _Bool canBeginActivation;
@property (nonatomic, readonly) _Bool readyToCreatePasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)prepareOfflineTermsResponse:(id)arg1;
+ (id)warrantyFilePathForLanguageCode:(id)arg1 countryCode:(id)arg2;

- (id)init;
- (void)setDeviceName:(id)arg1;
- (id)serviceIdentifier;
- (void)setDiagnosticsEnabled:(id)arg1;
- (void)setSiriEnabled:(id)arg1;
- (void)setLocationEnabled:(id)arg1;
- (void)companionBecameAvailableWantsConfirmation:(id)arg1;
- (void)pushControllerType:(id)arg1;
- (void)popToControllerType:(id)arg1;
- (void)handleActivationData:(id)arg1;
- (void)setCompanionLanguage:(id)arg1;
- (void)setCompanionRegion:(id)arg1;
- (void)gotSiriState:(id)arg1;
- (void)setCanBeginActivating:(id)arg1;
- (void)waitForDynamicActivationEventPresentation:(id)arg1;
- (void)waitForUserResponseToDynamicEventPresentation:(id)arg1;
- (void)retryActivation:(id)arg1;
- (void)handleWarrantySentinelRequest:(id)arg1;
- (void)handleOfflineTermsRequest:(id)arg1;
- (void)showLockedOnAnimation:(id)arg1;
- (void)setCrownOrientationRight:(id)arg1;
- (void)setPasscodeRestrictions:(id)arg1;
- (void)updateSynchProgress:(id)arg1;
- (void)doInitialSyncPrep:(id)arg1;
- (void)remoteRequestToKeepAlive:(id)arg1;
- (void)companionDidSendLanguageAndLocale:(id)arg1;
- (void)companionDidSendWirelessCredentials:(id)arg1;
- (void)prepareForForcedWatchSU:(id)arg1;
- (void)fetchTermsAndConditions:(id)arg1;
- (void)companionTermsResponse:(id)arg1;
- (void)handleRenameDeviceRequest:(id)arg1;
- (void)handleBuysOnWatchIngestion:(id)arg1;
- (void)endSetupTransaction;
- (_Bool)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (void)invalidateTimeoutTimer;
- (void)_recordThatWatchFinishedActivating;
- (void)refreshTimeoutTimer;
- (_Bool)_getActivationData:(_Bool)arg1 forRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)tellCompanionGizmoFinishedActivating;
- (void)activationTimeout:(id)arg1;
- (_Bool)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (void)enabledSiri:(id)arg1;
- (void)setupServiceMessageSelectorMappings;
- (_Bool)updateLanguageIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)updateRegionIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)tellCompanionGizmoBeganActivating;
- (_Bool)tellCompanionGizmoFinishedActivatingAsDeKOTA;
- (_Bool)tellCompanionGizmoFailedActivating:(id)arg1;
- (void)getSiriStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableSiriForGizmoWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)getActivationDataAndHeadersForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)getSessionDataForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)getActivationDataForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)reportRemoteActivationFailureError:(id)arg1;
- (_Bool)tellCompanionThatLanguageAndLanguageCompletedWithStatus:(unsigned short)arg1;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (void)tellCompanionThatGizmoFinishedSettingPasscode:(_Bool)arg1 isLong:(_Bool)arg2;
- (void)tellCompanionThatGizmoFailedToCreatePasscode:(int)arg1;
- (void)tellCompanionThatGizmoFinishedChangingPasscode:(_Bool)arg1 isLong:(_Bool)arg2;
- (void)tellCompanionThatGizmoStartedUnlockPairing;
- (void)tellCompanionThatGizmoFinishedUnlockPairing:(_Bool)arg1;
- (void)beganAwaitingAbilityToActivate;
- (_Bool)sendCompanionPerformanceResults;

@end
