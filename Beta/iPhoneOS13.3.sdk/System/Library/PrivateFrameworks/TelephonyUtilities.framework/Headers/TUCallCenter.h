/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class CNContactStore, NSArray, NSString, TUAudioDeviceController, TUCall, TUCallFilterController, TUCallProviderManager, TUCallServicesInterface, TUConversationManager, TURouteController, TUVideoDeviceController;

@protocol OS_dispatch_queue, TUCallContainerPrivate;

@interface TUCallCenter : NSObject <Swift>

{
    TUCallServicesInterface *_callServicesInterface;
    TUAudioDeviceController *_audioDeviceController;
    TUVideoDeviceController *_videoDeviceController;
    TURouteController *_routeController;
    TURouteController *_pairedHostDeviceRouteController;
    TUCallFilterController *_callFilterController;
    CNContactStore *_contactStore;
    TUCallProviderManager *_providerManager;
    TUConversationManager *_conversationManager;
    CDUnknownBlockType _disconnectCallPreflight;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

@property (retain, nonatomic) TUCallServicesInterface *callServicesInterface;
@property (retain, nonatomic) TUAudioDeviceController *audioDeviceController;
@property (retain, nonatomic) TUVideoDeviceController *videoDeviceController;
@property (retain, nonatomic) TURouteController *routeController;
@property (retain, nonatomic) TURouteController *pairedHostDeviceRouteController;
@property (retain, nonatomic) TUCallFilterController *callFilterController;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) TUCallProviderManager *providerManager;
@property (retain, nonatomic) TUConversationManager *conversationManager;
@property (nonatomic) struct CGSize localLandscapeAspectRatio;
@property (nonatomic) struct CGSize localPortraitAspectRatio;
@property (copy, nonatomic) CDUnknownBlockType disconnectCallPreflight;
@property (nonatomic, readonly) id <TUCallContainerPrivate> callContainer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) _Bool canMergeCalls;
@property (nonatomic, readonly, getter=isAddCallAllowed) _Bool addCallAllowed;
@property (nonatomic, readonly, getter=isAmbiguous) _Bool ambiguous;
@property (nonatomic, readonly, getter=isEndAndAnswerAllowed) _Bool endAndAnswerAllowed;
@property (nonatomic, readonly, getter=isHoldAndAnswerAllowed) _Bool holdAndAnswerAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *currentCalls;
@property (copy, nonatomic, readonly) NSArray *currentVideoCalls;
@property (copy, nonatomic, readonly) NSArray *currentAudioAndVideoCalls;
@property (copy, nonatomic, readonly) NSArray *incomingCalls;
@property (copy, nonatomic, readonly) NSArray *displayedCalls;
@property (copy, nonatomic, readonly) NSArray *displayedAudioAndVideoCalls;
@property (copy, nonatomic, readonly) NSArray *conferenceParticipantCalls;
@property (copy, nonatomic, readonly) NSArray *callsHostedElsewhere;
@property (copy, nonatomic, readonly) NSArray *callsWithAnEndpointElsewhere;
@property (copy, nonatomic, readonly) NSArray *callsHostedOrAnEndpointElsewhere;
@property (copy, nonatomic, readonly) NSArray *callsOnDefaultPairedDevice;
@property (nonatomic, readonly) TUCall *incomingCall;
@property (nonatomic, readonly) TUCall *incomingVideoCall;
@property (nonatomic, readonly) TUCall *activeVideoCall;
@property (nonatomic, readonly) TUCall *currentVideoCall;
@property (nonatomic, readonly) unsigned long long currentCallCount;
@property (nonatomic, readonly) unsigned long long currentVideoCallCount;
@property (nonatomic, readonly) unsigned long long currentAudioAndVideoCallCount;
@property (nonatomic, readonly) unsigned long long callCountOnDefaultPairedDevice;
@property (nonatomic, readonly) _Bool hasCurrentCalls;
@property (nonatomic, readonly) _Bool hasCurrentAudioCalls;
@property (nonatomic, readonly) _Bool hasCurrentVideoCalls;
@property (nonatomic, readonly) _Bool anyCallIsHostedOnCurrentDevice;
@property (nonatomic, readonly) _Bool anyCallIsEndpointOnCurrentDevice;
@property (copy, nonatomic, readonly) NSArray *currentCallGroups;
@property (copy, nonatomic, readonly) NSArray *callGroupsOnDefaultPairedDevice;

+ (id)sharedInstance;
+ (id)sharedContactStore;
+ (id)sharedInstanceWithQueue:(id)arg1 server:(id)arg2 shouldRegister:(_Bool)arg3;
+ (id)callCenterWithQueue:(id)arg1 server:(id)arg2 shouldRegister:(_Bool)arg3;
+ (id)callCenterWithQueue:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)callsPassingTest:(CDUnknownBlockType)arg1;
- (id)conferenceCall;
- (id)callPassingTest:(CDUnknownBlockType)arg1;
- (id)callPassingTest:(CDUnknownBlockType)arg1 sortedUsingComparator:(CDUnknownBlockType)arg2;
- (id)callWithStatus:(int)arg1;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (unsigned long long)countOfCallsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)anyCallPassesTest:(CDUnknownBlockType)arg1;
- (_Bool)allCallsPassTest:(CDUnknownBlockType)arg1;
- (id)callsWithStatus:(int)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)callsWithGroupUUID:(id)arg1;
- (id)videoCallWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callWithCallUUID:(id)arg1;
- (id)displayedCallFromCalls:(id)arg1;
- (_Bool)allCallsAreOfService:(int)arg1;
- (id)_allCalls;
- (id)displayedCall;
- (id)frontmostCall;
- (id)frontmostAudioOrVideoCall;
- (_Bool)existingCallsHaveMultipleProviders;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)callServicesClientCapabilities;
- (void)fetchCurrentCalls;
- (void)joinConversationWithRequest:(id)arg1;
- (void)swapCalls;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)disconnectAllCalls;
- (void)pullRelayingCallsFromClient;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (void)pushHostedCallsToDestination:(id)arg1;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)willEnterBackgroundForAllCalls;
- (void)enteredBackgroundForAllCalls;
- (void)shouldSuppressInCallStatusBar:(_Bool)arg1;
- (void)dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)answerWithRequest:(id)arg1;
- (void)holdCall:(id)arg1;
- (void)unholdCall:(id)arg1;
- (_Bool)isRelayCallingSupportedForProvider:(id)arg1 isVideo:(_Bool)arg2;
- (_Bool)_shouldPreferRelayOverDirectSecondaryCallingForRelayingCallingAvailability:(int)arg1 isRelayCallingSupported:(_Bool)arg2 isEmergencyCallbackPossible:(_Bool)arg3;
- (_Bool)_existingCallsAllowDialRequest:(id)arg1 allowVoiceWithData:(_Bool)arg2;
- (_Bool)_isEmergencyDialRequest:(id)arg1;
- (_Bool)isDirectCallingCurrentlyAvailableForProvider:(id)arg1 isVideo:(_Bool)arg2;
- (_Bool)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg1 isProviderAvailable:(_Bool)arg2 isRelayAllowed:(_Bool)arg3 isEmergency:(_Bool)arg4 supportsBasebandCalling:(_Bool)arg5 shouldUseRelay:(_Bool *)arg6;
- (_Bool)_canDialWithRequest:(id)arg1 shouldUseRelay:(_Bool *)arg2;
- (id)_dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(_Bool)arg3;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;
- (void)updateCall:(id)arg1 withAnswerRequest:(id)arg2;
- (void)_preflightDisconnectForCalls:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)launchAppForJoinRequest:(id)arg1;
- (_Bool)isMergeable;
- (unsigned long long)_callGroupCountForCall:(id)arg1 withCall:(id)arg2;
- (_Bool)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg1 isVideo:(_Bool)arg2;
- (_Bool)canDialWithRequest:(id)arg1;
- (id)dialWithRequest:(id)arg1;
- (void)applicationWillLaunchForStartCallInteraction:(id)arg1;
- (void)sendFieldModeDigits:(id)arg1 forProvider:(id)arg2;
- (void)answerCall:(id)arg1;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2;
- (void)answerCallWithHoldMusic:(id)arg1;
- (void)holdActiveAndAnswerCall:(id)arg1;
- (void)endActiveOrHeldAndAnswerCall:(id)arg1;
- (void)reportLocalPreviewStoppedForCall:(id)arg1;
- (void)resumeCall:(id)arg1;
- (void)groupCall:(id)arg1 withOtherCall:(id)arg2;
- (void)ungroupCall:(id)arg1;
- (void)disconnectCall:(id)arg1;
- (void)handleActionForWiredHeadsetMiddleButtonPress;
- (void)handleActionForWiredHeadsetMiddleButtonLongPress;
- (void)setTTYType:(int)arg1 forCall:(id)arg2;
- (void)pushRelayingCallsToHost;
- (void)pickRouteForRapportDeviceWithMediaSystemIdentifier:(id)arg1 effectiveIdentifier:(id)arg2;
- (id)joinConversationWithConversationRequest:(id)arg1;
- (void)enteredForegroundForCall:(id)arg1;
- (id)activeConversationForCall:(id)arg1;
- (_Bool)isSwappable;
- (_Bool)isHoldAllowed;
- (_Bool)isTakingCallsPrivateAllowed;
- (_Bool)isHardPauseAvailable;
- (_Bool)isSendToVoicemailAllowed;
- (_Bool)canGroupCall:(id)arg1 withCall:(id)arg2;

@end
