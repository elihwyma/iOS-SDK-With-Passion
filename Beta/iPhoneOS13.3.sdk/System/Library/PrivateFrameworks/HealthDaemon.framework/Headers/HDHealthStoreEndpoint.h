/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDDaemon, HDHealthStoreServer, HDXPCClient, NSString;

@protocol OS_dispatch_queue;

@interface HDHealthStoreEndpoint : NSObject <Swift>

{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    HDDaemon *_daemon;
    HDXPCClient *_client;
    HDHealthStoreServer *_server;
}

@property (weak, nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, readonly) HDHealthStoreServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2;
+ (_Bool)_isDeviceSupportedWithBehavior:(id)arg1 error:(id *)arg2;
+ (_Bool)_isClientEntitled:(id)arg1 error:(id *)arg2;

- (void)invalidate;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)connectionConfigured;
- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 daemon:(id)arg2;
- (_Bool)_validateSourceBundleIdentifier:(id)arg1 error:(id *)arg2;

@end
