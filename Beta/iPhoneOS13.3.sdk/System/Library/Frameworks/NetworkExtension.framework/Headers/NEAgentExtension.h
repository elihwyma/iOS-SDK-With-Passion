/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NEExtensionProviderHostContext, NSArray, NSExtension, NSString, NSUUID, NSXPCInterface;

@protocol NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;

@interface NEAgentExtension : NSObject <Swift>

{
    _Bool _appsUpdateStarted;
    _Bool _appsUpdateEnding;
    _Bool _isAppExtensionHost;
    id <NEPluginManagerObjectFactory> _managerObjectFactory;
    NEExtensionProviderHostContext *_sessionContext;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_pluginType;
    NSString *_extensionIdentifier;
    NSXPCInterface *_managerProtocol;
    NSXPCInterface *_driverProtocol;
    NSObject<OS_dispatch_source> *_sendFailedTimer;
    NSUUID *_sessionRequestIdentifier;
    NSExtension *_extension;
    NSArray *_extensionUUIDs;
    CDUnknownBlockType _pendingDisposeCompletion;
}

@property (retain, nonatomic) NSUUID *sessionRequestIdentifier;
@property (retain, nonatomic) NSExtension *extension;
@property (nonatomic, readonly) NSArray *extensionUUIDs;
@property (copy) CDUnknownBlockType pendingDisposeCompletion;
@property (nonatomic, readonly) _Bool isAppExtensionHost;
@property (weak, readonly) id <NEPluginManagerObjectFactory> managerObjectFactory;
@property (retain, nonatomic) NEExtensionProviderHostContext *sessionContext;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) int requiredEntitlement;
@property (nonatomic, readonly) NSString *pluginType;
@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (readonly) NSXPCInterface *managerProtocol;
@property (readonly) NSXPCInterface *driverProtocol;
@property _Bool appsUpdateStarted;
@property _Bool appsUpdateEnding;
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *uuids;
@property (nonatomic, readonly) NSXPCInterface *driverInterface;
@property (nonatomic, readonly) NSXPCInterface *managerInterface;

- (void)dealloc;
- (void)wakeup;
- (void)updateConfiguration:(id)arg1;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extensionDidStop:(id)arg1;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)handleDisposeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleCancel;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleExtensionStartedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendExtensionFailed;
- (_Bool)shouldAllowUnentitledExtension:(id)arg1;
- (void)handleExtensionExit:(id)arg1;
- (void)cleanupExtensionWithRequestIdentifier:(id)arg1;
- (_Bool)isSignedWithDeveloperID:(id)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
- (void)handleInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;

@end
