/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEPacketTunnelProvider.h>

@class NEIKEv2MOBIKE, NEIKEv2Rekey, NEIKEv2Server, NEIKEv2Session, NEUserNotification, NSArray, NSDictionary, NSObject, NWPath, NWPathEvaluator, NWResolver;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider

{
    _Bool _isIfCellular;
    _Bool _hasNAT;
    _Bool _dispose;
    _Bool _sessionDidConnect;
    _Bool _mobikeCapable;
    _Bool _authenticationPrompted;
    unsigned int _flags;
    NSArray *_ikeConfig;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSDictionary *_options;
    struct NEVirtualInterface_s *_virtualInterface;
    NEIKEv2Server *_serverAddresses;
    NWResolver *_resolver;
    NSObject<OS_dispatch_source> *_resolverWaitTimer;
    NEIKEv2Rekey *_rekey;
    NSObject<OS_dispatch_semaphore> *_getSocketSemaphore;
    NEIKEv2MOBIKE *_mobikeHandle;
    CDUnknownBlockType _startTunnelCompletionHandler;
    CDUnknownBlockType _dnsResolverCompletionHandler;
    long long _tunnelKind;
    NWPath *_path;
    NEUserNotification *_g_notification;
    NEIKEv2Session *_session;
    unsigned long long _ifIndex;
    long long _pathStatus;
    NSObject<OS_dispatch_queue> *_queue;
    NWPathEvaluator *_scopedPathEvaluator;
}

@property (retain) NSArray *ikeConfig;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;
@property (retain) NSDictionary *options;
@property struct NEVirtualInterface_s *virtualInterface;
@property _Bool isIfCellular;
@property _Bool hasNAT;
@property (retain) NEIKEv2Server *serverAddresses;
@property (retain) NWResolver *resolver;
@property (retain) NSObject<OS_dispatch_source> *resolverWaitTimer;
@property (retain) NEIKEv2Rekey *rekey;
@property (retain) NSObject<OS_dispatch_semaphore> *getSocketSemaphore;
@property (retain) NEIKEv2MOBIKE *mobikeHandle;
@property (copy) CDUnknownBlockType startTunnelCompletionHandler;
@property (copy) CDUnknownBlockType dnsResolverCompletionHandler;
@property _Bool dispose;
@property long long tunnelKind;
@property _Bool sessionDidConnect;
@property _Bool mobikeCapable;
@property (retain) NWPath *path;
@property _Bool authenticationPrompted;
@property (retain) NEUserNotification *g_notification;
@property (retain) NEIKEv2Session *session;
@property unsigned long long ifIndex;
@property long long pathStatus;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property unsigned int flags;
@property (retain) NWPathEvaluator *scopedPathEvaluator;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset:(_Bool)arg1;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)wake;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopTunnelWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)stringForTunnelKind;
- (void)ignoreSigPipe;
- (void)invokeCancelTunnel:(int)arg1;
- (_Bool)NEIKEv2ProviderAuthenticate:(id)arg1;
- (int)tunnelBringup;
- (void)resolveServerAddressIfNeeded:(CDUnknownBlockType)arg1;
- (void)startIKEv2TunnelWithOptions:(id)arg1;
- (long long)tunnelTeardown;
- (void)stopIKEv2TunnelWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)wakeIKEv2;
- (_Bool)tryAlternateServerAddresses;
- (void)watchIKESocketChange;
- (void)startRekeyTimer:(_Bool)arg1;
- (void)handleAdditionalServerAddressesNotification:(id)arg1;
- (int)handleRedirectNotification:(id)arg1;
- (void)setupIKEv2CallbackBlocks;
- (_Bool)invokeStartTunnelCompletionHandler:(id)arg1;
- (void)handleInterfaceDown;
- (void)handleInterfaceChange:(_Bool)arg1;
- (void)handleDNSResolution;
- (void)handleConfigChange;
- (void)handleDefaultPathChange;
- (void)handleScopedPathChange;
- (id)createPacketTunnelNetworkSettings;

@end
