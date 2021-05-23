/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEFilterControlExtensionProviderHostContext, NEFilterExtensionProviderHostContext, NEFilterProviderConfiguration, NSArray, NSExtension, NSString, NSUUID, NSXPCInterface, NSXPCListenerEndpoint;

@protocol NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;

@interface NEAgentFilterExtension : NSObject

{
    _Bool _dataExtensionInitialized;
    _Bool _controlExtensionInitialized;
    _Bool _appsUpdateStarted;
    _Bool _appsUpdateEnding;
    int _crypto_kernel_salt;
    id <NEPluginManagerObjectFactory> _managerObjectFactory;
    NSString *_pluginType;
    NSExtension *_dataExtension;
    NSExtension *_controlExtension;
    NEFilterExtensionProviderHostContext *_dataSessionContext;
    NEFilterControlExtensionProviderHostContext *_controlSessionContext;
    NSUUID *_dataSessionRequestIdentifier;
    NSUUID *_controlSessionRequestIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_dataExtensionIdentifier;
    NSString *_controlExtensionIdentifier;
    NSXPCListenerEndpoint *_clientListenerEndpoint;
    NEFilterProviderConfiguration *_configuration;
    NSArray *_extensionUUIDs;
    NSObject<OS_dispatch_source> *_sendFailedTimer;
    struct cfil_crypto_state *_crypto_state;
}

@property (weak, readonly) id <NEPluginManagerObjectFactory> managerObjectFactory;
@property (nonatomic, readonly) NSString *pluginType;
@property (retain) NSExtension *dataExtension;
@property (retain) NSExtension *controlExtension;
@property (retain) NEFilterExtensionProviderHostContext *dataSessionContext;
@property (retain) NEFilterControlExtensionProviderHostContext *controlSessionContext;
@property (retain) NSUUID *dataSessionRequestIdentifier;
@property (retain) NSUUID *controlSessionRequestIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *dataExtensionIdentifier;
@property (retain) NSString *controlExtensionIdentifier;
@property _Bool dataExtensionInitialized;
@property _Bool controlExtensionInitialized;
@property (retain) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (retain) NEFilterProviderConfiguration *configuration;
@property (nonatomic, readonly) NSArray *extensionUUIDs;
@property _Bool appsUpdateStarted;
@property _Bool appsUpdateEnding;
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer;
@property struct cfil_crypto_state *crypto_state;
@property int crypto_kernel_salt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *uuids;
@property (nonatomic, readonly) NSXPCInterface *driverInterface;
@property (nonatomic, readonly) NSXPCInterface *managerInterface;

+ (_Bool)authenticateFlowWithState:(struct cfil_crypto_state *)arg1 crypto_key:(id)arg2 flow:(id)arg3 salt:(unsigned int)arg4 isKernelSocket:(_Bool)arg5;

- (void)dealloc;
- (void)wakeup;
- (void)updateConfiguration:(id)arg1;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extensionDidStop:(id)arg1;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)report:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleDisposeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleCancel;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)sendExtensionFailed;
- (void)handleExtensionExit:(id)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
- (void)handleInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;
- (void)handleControlExtensionInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleDataExtensionInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopFilterExtensionWithReason:(int)arg1;
- (void)sendFilterStatus:(long long)arg1 withError:(long long)arg2;
- (void)startFilter;
- (void)getFilterClientConnectionWithCompletionHandler:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cleanupDataExtensionWithRequestIdentifier:(id)arg1;
- (void)cleanupControlExtensionWithRequestIdentifier:(id)arg1;
- (void)resetFilterSettings;
- (void)cleanupOnStartFailure;
- (void)startFilterExtension;
- (void)savedConfigurationChanged:(id)arg1;
- (void)handleStopCompleteWithError:(id)arg1;
- (id)generateClientKey:(int)arg1 salt:(unsigned int)arg2;
- (_Bool)sendCryptoKeyWithControlSocket:(int)arg1 crypto_key:(id)arg2;
- (id)sanitizeFilterFlow:(id)arg1;
- (id)sanitizeReport:(id)arg1;
- (long long)sanitizeFilterAction:(long long)arg1;
- (long long)sanitizeFilterReportEvent:(long long)arg1;
- (_Bool)authenticateFlow:(id)arg1;
- (void)createPacketChannelForExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
