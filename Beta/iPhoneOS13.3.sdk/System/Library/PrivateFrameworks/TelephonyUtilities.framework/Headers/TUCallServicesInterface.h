/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSMapTable, NSString, NSXPCConnection, TUCallCenter, TUCallNotificationManager, TUCallServicesClientCapabilities, TURouteController;

@protocol OS_dispatch_queue, TUCallContainerPrivate, TUCallServicesXPCServer;

@interface TUCallServicesInterface : NSObject <Swift>

{
    _Bool _hasRequestedInitialState;
    _Bool _hasServerLaunched;
    int _connectionRequestNotificationToken;
    id <TUCallServicesXPCServer> _server;
    TUCallServicesClientCapabilities *_callServicesClientCapabilities;
    TUCallCenter *_callCenter;
    TURouteController *_localRouteController;
    TURouteController *_pairedHostDeviceRouteController;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSArray *_currentCalls;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    TUCallNotificationManager *_callNotificationManager;
    NSArray *_localProxyCalls;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) void *queueContext;
@property (nonatomic, readonly) int connectionRequestNotificationToken;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) _Bool hasRequestedInitialState;
@property (copy, nonatomic) NSArray *currentCalls;
@property (nonatomic, readonly) NSMapTable *uniqueProxyIdentifierToProxyCall;
@property (nonatomic, readonly) TUCallNotificationManager *callNotificationManager;
@property (copy, nonatomic) NSArray *localProxyCalls;
@property (nonatomic, readonly, getter=isServerLocal) _Bool serverLocal;
@property (nonatomic) _Bool hasServerLaunched;
@property (weak, nonatomic) TUCallCenter *callCenter;
@property (nonatomic, readonly) id <TUCallServicesXPCServer> asynchronousServer;
@property (weak, nonatomic) id <TUCallServicesXPCServer> server;
@property (nonatomic, readonly) TUCallServicesClientCapabilities *callServicesClientCapabilities;
@property (retain, nonatomic) TURouteController *localRouteController;
@property (retain, nonatomic) TURouteController *pairedHostDeviceRouteController;
@property (nonatomic, readonly) id <TUCallContainerPrivate> callContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)setClientCapabilities:(id)arg1;
- (void)pickRouteWithUniqueIdentifier:(id)arg1 shouldWaitUntilAvailable:(_Bool)arg2 forRouteController:(id)arg3;
- (id)routesByUniqueIdentifierForRouteController:(id)arg1;
- (void)handleServerReconnect;
- (void)handleServerDisconnect;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)asynchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;
- (_Bool)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;
- (unsigned long long)filterStatusForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_tearDownXPCConnection;
- (void)_setUpXPCConnection;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;
- (id)_proxyCallWithCall:(id)arg1;
- (void)_registerCall:(id)arg1;
- (void)_updateCurrentCalls:(id)arg1;
- (id)_proxyCallWithUniqueProxyIdentifier:(id)arg1;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1 andWait:(_Bool)arg2;
- (void)_updateCurrentCallsWithoutNotifications:(id)arg1;
- (oneway void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2;
- (void)requestCurrentStateWithCompletionHandler:(CDUnknownBlockType)arg1 handleInitialState:(CDUnknownBlockType)arg2;
- (void)requestCurrentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchCurrentCalls;
- (oneway void)resetCallProvisionalStates;
- (void)waitForInitialStateIfNecessary;
- (void)registerCall:(id)arg1;
- (id)joinConversationWithRequest:(id)arg1;
- (oneway void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)answerCallWithRequest:(id)arg1;
- (oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)swapCalls;
- (oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
- (oneway void)disconnectCurrentCallAndActivateHeld;
- (oneway void)disconnectAllCalls;
- (oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)pullRelayingCallsFromClient;
- (oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (oneway void)pushHostedCallsToDestination:(id)arg1;
- (oneway void)pullHostedCallsFromPairedHostDevice;
- (oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)updateCallWithProxy:(id)arg1;
- (oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)willEnterBackgroundForAllCalls;
- (oneway void)enteredBackgroundForAllCalls;
- (oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;
- (oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1;
- (oneway void)setUplinkMuted:(_Bool)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)setDownlinkMuted:(_Bool)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)shouldSuppressInCallStatusBar:(_Bool)arg1;
- (void)_updateCurrentCalls:(id)arg1 withNotificationsUsingUpdatedCalls:(id)arg2;
- (oneway void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
- (oneway void)handleMeterLevelChangedTo:(float)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
- (oneway void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2;
- (oneway void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3;
- (oneway void)handleLocalRoutesByUniqueIdentifierUpdated:(id)arg1;
- (oneway void)handlePairedHostDeviceRoutesByUniqueIdentifierUpdated:(id)arg1;
- (id)initWithQueue:(id)arg1 callCenter:(id)arg2;
- (void)tearDownXPCConnection;
- (id)dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
