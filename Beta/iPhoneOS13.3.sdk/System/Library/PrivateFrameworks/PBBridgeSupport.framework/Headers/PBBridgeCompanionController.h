/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>

@class NSDictionary, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSTimer, NSURLConnection, RUILoader, RUIStyle;

@protocol PBBridgeConnectionDelegate, RUILoaderDelegate;

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate

{
    struct __MKBAssertion *_unlockPairingAssertion;
    _Bool _nonSilentActivation;
    _Bool _connectionFailed;
    _Bool _awaitingCustomResponse;
    _Bool _isEstablishingPairing;
    _Bool _allowAnyHTTPSCertificate;
    _Bool _sentSessionRequest;
    _Bool _sentActivationRequest;
    _Bool _passcodeSet;
    _Bool _selectedPairedUnlock;
    unsigned short _granularActivationState;
    int _activationState;
    int _activationRetries;
    RUIStyle *_remoteUIStyle;
    id <RUILoaderDelegate> _ruiDelegate;
    id <PBBridgeConnectionDelegate> _delegate;
    NSURLConnection *_activationConnection;
    NSMutableURLRequest *_activationRequest;
    NSMutableData *_activationData;
    RUILoader *_ruiLoader;
    NSString *_contentType;
    NSDictionary *_allHeaders;
    NSTimer *_activationTimeout;
    NSString *_internalLastSendMessageID;
    NSString *_remoteActivationUserAgent;
    CDUnknownBlockType _lockedOnAnimationCompletion;
    CDUnknownBlockType _initialSyncPrepCompletion;
    CDUnknownBlockType _languageLocaleCompletion;
    CDUnknownBlockType _prepareWatchForForcedSUCompletion;
    CDUnknownBlockType _buysOnWatchCredentialsIngestedCompletion;
    NSMutableDictionary *_reportMapping;
}

@property (retain, nonatomic) NSURLConnection *activationConnection;
@property (retain, nonatomic) NSMutableURLRequest *activationRequest;
@property (retain, nonatomic) NSMutableData *activationData;
@property (retain, nonatomic) RUILoader *ruiLoader;
@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSDictionary *allHeaders;
@property (nonatomic) _Bool nonSilentActivation;
@property (nonatomic) _Bool connectionFailed;
@property (nonatomic) _Bool awaitingCustomResponse;
@property (nonatomic) int activationState;
@property (nonatomic) _Bool isEstablishingPairing;
@property (nonatomic) unsigned short granularActivationState;
@property (retain, nonatomic) NSTimer *activationTimeout;
@property (retain, nonatomic) NSString *internalLastSendMessageID;
@property (nonatomic) _Bool allowAnyHTTPSCertificate;
@property (copy, nonatomic) NSString *remoteActivationUserAgent;
@property (copy, nonatomic) CDUnknownBlockType lockedOnAnimationCompletion;
@property (copy, nonatomic) CDUnknownBlockType initialSyncPrepCompletion;
@property (copy, nonatomic) CDUnknownBlockType languageLocaleCompletion;
@property (copy, nonatomic) CDUnknownBlockType prepareWatchForForcedSUCompletion;
@property (copy, nonatomic) CDUnknownBlockType buysOnWatchCredentialsIngestedCompletion;
@property (nonatomic) _Bool sentSessionRequest;
@property (nonatomic) _Bool sentActivationRequest;
@property (retain, nonatomic) NSMutableDictionary *reportMapping;
@property (nonatomic) _Bool passcodeSet;
@property (nonatomic) _Bool selectedPairedUnlock;
@property (nonatomic) int activationRetries;
@property (retain, nonatomic) RUIStyle *remoteUIStyle;
@property (weak, nonatomic) id <RUILoaderDelegate> ruiDelegate;
@property (weak, nonatomic) id <PBBridgeConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)iCloudFirstName:(id *)arg1 lastName:(id *)arg2;
+ (void)meCardFirstName:(id *)arg1 lastName:(id *)arg2;
+ (id)displayNameWithFirstName:(id)arg1 lastName:(id)arg2;

- (id)init;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_cleanup;
- (id)serviceIdentifier;
- (id)viewControllerForAlertPresentation;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)endSetupTransaction;
- (_Bool)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (void)invalidateTimeoutTimer;
- (void)refreshTimeoutTimer;
- (void)activationTimeout:(id)arg1;
- (_Bool)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (void)setupServiceMessageSelectorMappings;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (void)beginSetupTransaction;
- (void)gizmoBecameAvailableWantsConfirmation:(id)arg1;
- (void)sendProxyActivationRequest:(id)arg1;
- (void)gizmoDidBeginActivating:(id)arg1;
- (void)gizmoDidFinishActivating:(id)arg1;
- (void)getCompanionLanguage:(id)arg1;
- (void)getCompanionRegion:(id)arg1;
- (void)gizmoDidEndPasscodeCreation:(id)arg1;
- (void)gizmoDidEndPasscodeChange:(id)arg1;
- (void)gizmoDidBeginUnlockPairing:(id)arg1;
- (void)gizmoDidEndUnlockPairing:(id)arg1;
- (void)getSiriState:(id)arg1;
- (void)gizmoActivationFailed:(id)arg1;
- (void)handlePerformanceResults:(id)arg1;
- (void)handleWarrantySentinelResponse:(id)arg1;
- (void)handleOfflineTermsResponse:(id)arg1;
- (void)gizmoFailedToCreatePasscode:(id)arg1;
- (void)watchDidPrepareForInitialSync:(id)arg1;
- (void)watchDidRespondWithLanguageAndLocaleStatus:(id)arg1;
- (void)watchDidIngestWirelessCredentials:(id)arg1;
- (void)watchDidPrepareForForcedSU:(id)arg1;
- (void)handleRemoteActivationDetails:(id)arg1;
- (double)offsetEventTime;
- (void)setReporter:(id)arg1 forConnection:(id)arg2;
- (_Bool)_dumpActivationResquests;
- (id)_connectionWithRequest:(id)arg1;
- (id)reporterForConnection:(id)arg1;
- (unsigned short)_testActivationResponseType;
- (void)tellGizmoToBeginActivation;
- (id)currentNetworks:(_Bool)arg1;
- (void)enableSiriForGizmo:(id)arg1;
- (void)tellWatchLanguagesAndLocaleWithCompletion:(CDUnknownBlockType)arg1;
- (void)beganWaitingForPresentationOfActivationEvent;
- (void)beganWaitingForUserResponseToActivationEvent;
- (void)sendProxyActivationWithCustomRequest:(id)arg1;
- (void)sendGizmoPasscodeRestrictions;
- (void)tellGizmoToSetDiagnosticsEnabled:(_Bool)arg1;
- (void)tellGizmoToSetLocationEnabled:(_Bool)arg1;
- (void)tellWatchToSetSiriEnabled:(_Bool)arg1;
- (void)tellGizmoToPushControllerType:(unsigned long long)arg1;
- (void)tellGizmoToPopToControllerType:(unsigned long long)arg1;
- (void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)tellGizmoToSeCrownOrientationRight:(_Bool)arg1;
- (void)tellGizmoToUpdateSyncProgressTo:(double)arg1 withState:(long long)arg2;
- (void)startEstablishingPairing;
- (void)tellGizmoToRetryActivation;
- (void)tellGizmoToKeepAliveForActivationEvent;
- (void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg1;
- (void)tellGizmoToDeleteWarrantySentinel;
- (void)tellGizmoToPrepareForInitialSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)queryGizmoForOfflineTerms;
- (void)tellWatchToChangeDeviceNameFor:(id)arg1;
- (void)sendDemoWatchWirelessCredentials;
- (id)currentWiFiNetworkName;
- (void)tellWatchToPrepareForForcedSUWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendBuysOnWatchUsername:(id)arg1 andPassword:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
