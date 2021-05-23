/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <WPDaemon/WPDClient.h>

@class WPDObjectDiscoveryData, WPDObjectDiscoveryManager, WPDSearchPartyAgent;

@interface WPDObjectDiscoveryClient : WPDClient

{
    _Bool _pendingSent;
    WPDObjectDiscoveryManager *_objectDiscoveryManager;
    WPDSearchPartyAgent *_spAgent;
    WPDObjectDiscoveryData *_keyAddressAndPayload;
    unsigned long long _keyRequestID;
    unsigned long long _tokenRequestID;
}

@property _Bool pendingSent;
@property (weak) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (retain) WPDSearchPartyAgent *spAgent;
@property (readonly) WPDObjectDiscoveryData *keyAddressAndPayload;
@property unsigned long long keyRequestID;
@property unsigned long long tokenRequestID;

- (void)dealloc;
- (void)destroy;
- (void)startAdvertising:(id)arg1;
- (void)sendTestRequest:(id)arg1;
- (void)stopAdvertising:(id)arg1;
- (void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(_Bool)arg4;
- (id)generateStateDump;
- (id)initWithXPCConnection:(id)arg1 server:(id)arg2;
- (void)notifyClientStateChange:(long long)arg1 Restricted:(_Bool)arg2;
- (void)sendRegisteredWithDaemonAndContinuingSession:(_Bool)arg1;
- (void)endTestMode;
- (void)updateSPBeaconing;
- (void)updateSPNearbyTokens;
- (void)completeSPNearbyTockensWithSuccess:(_Bool)arg1;
- (void)startSPBeaconing;
- (void)stopSPBeaconing;
- (void)completeSPBeaconingWithSuccess:(_Bool)arg1;
- (void)notifyClientObjectDiscoveryStateChange:(long long)arg1;

@end
