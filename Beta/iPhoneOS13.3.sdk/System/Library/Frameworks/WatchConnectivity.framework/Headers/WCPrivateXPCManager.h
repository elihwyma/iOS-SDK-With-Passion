/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue, WCPrivateXPCManagerDelegate;

@interface WCPrivateXPCManager : NSObject

{
    int _listenerResumedToken;
    int _privateServiceShouldConnectToken;
    NSXPCConnection *_connection;
    NSObject<WCPrivateXPCManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property int listenerResumedToken;
@property int privateServiceShouldConnectToken;
@property (weak, nonatomic) NSObject<WCPrivateXPCManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;
+ (id)privateDaemonInterface;
+ (id)privateClientInterface;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)setupConnection;
- (void)handlePingForExtensionBundleID:(id)arg1;
- (void)isExtensionPrivileged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fakeIncomingPayloadOnSubService:(id)arg1 ofType:(id)arg2 clientData:(id)arg3 resource:(id)arg4 resourceSandboxToken:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
