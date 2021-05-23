/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface IXServerConnection : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_coordinatorInstances;
    NSMutableDictionary *_promiseInstances;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) NSMutableDictionary *coordinatorInstances;
@property (nonatomic, readonly) NSMutableDictionary *promiseInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedConnection;
+ (id)retrySynchronousIPC:(CDUnknownBlockType)arg1;

- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(_Bool)arg2;
- (void)unregisterAppInstallCoordinatorForUpdates:(id)arg1;
- (void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(_Bool)arg2;
- (void)unregisterDataPromiseForUpdates:(id)arg1;
- (void)_onQueue_reSetupObserversAfter:(id)arg1;
- (_Bool)_onQueue_createXPCConnectionIfNecessary;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end
