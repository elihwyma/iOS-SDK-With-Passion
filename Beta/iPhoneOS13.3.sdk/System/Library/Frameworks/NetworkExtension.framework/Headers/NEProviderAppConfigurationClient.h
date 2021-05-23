/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEUtilConfigurationClient.h>

@class NEDNSProxyManager, NEFilterManager, NEVPNManager, NSMutableArray, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@protocol NEConfigurationCommandHandling;

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient

{
    _Bool _isServerMode;
    NSXPCListener *_listener;
    NEVPNManager *_currentManager;
    NEFilterManager *_filterManager;
    NEDNSProxyManager *_dnsProxyManager;
    NSMutableArray *_createdManagers;
    NSMutableArray *_currentManagers;
    NSString *_targetAppBundleID;
    NSXPCConnection *_connection;
    id <NEConfigurationCommandHandling> _remoteObject;
}

@property (readonly) NSXPCListener *listener;
@property (retain) NEVPNManager *currentManager;
@property (retain) NEFilterManager *filterManager;
@property (retain) NEDNSProxyManager *dnsProxyManager;
@property (retain) NSMutableArray *createdManagers;
@property (retain) NSMutableArray *currentManagers;
@property (retain) NSString *targetAppBundleID;
@property _Bool isServerMode;
@property (retain) NSXPCConnection *connection;
@property (retain) id <NEConfigurationCommandHandling> remoteObject;
@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)enabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)isAlwaysOn;
- (id)onDemandRules;
- (void)setOnDemandRules:(id)arg1;
- (void)setOnDemandEnabled:(_Bool)arg1;
- (id)filterConfiguration;
- (_Bool)onDemandEnabled;
- (void)handleConfigChanged:(id)arg1;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)protocolForParameters:(id)arg1;
- (int)setKeychainItemData:(id)arg1 withName:(id)arg2 persistentReference:(id *)arg3;
- (int)deleteKeychainItemWithPersistentReference:(id)arg1;
- (void)loadAllWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)createConfigurationWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProtocolWithParameters:(id)arg1 errorStr:(id *)arg2;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithClientName:(id)arg1;
- (id)initForServerMode;
- (id)dnsProxyConfiguration;
- (_Bool)setPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id *)arg2;

@end
