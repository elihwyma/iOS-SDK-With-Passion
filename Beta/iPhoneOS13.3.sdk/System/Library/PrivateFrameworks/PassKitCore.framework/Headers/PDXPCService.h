/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface PDXPCService : NSObject <Swift>

{
    NSXPCConnection *_connection;
    NSString *_className;
    _Bool _callbacksSuspended;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    int _remoteProcessIdentifier;
    NSString *_remoteProcessApplicationIdentifier;
}

@property (nonatomic, readonly) int remoteProcessIdentifier;
@property (nonatomic, readonly) NSString *remoteProcessApplicationIdentifier;
@property (nonatomic, readonly) NSString *remoteProcessBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (void)serviceResumed;
- (void)serviceSuspended;
- (void)clearConnectionReference;

@end
