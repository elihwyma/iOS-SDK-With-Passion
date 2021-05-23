/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface DNDStateService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_clientIdentifier;
    NSHashTable *_stateUpdateListeners;
    _Bool _registeredForUpdates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (id)_initWithClientIdentifier:(id)arg1;
- (_Bool)_queue_registerForStateUpdatesIfRequired;
- (void)_handleLostXPCConnection;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (id)queryCurrentStateWithError:(id *)arg1;
- (void)addStateUpdateListener:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeStateUpdateListener:(id)arg1;
- (_Bool)addStateUpdateListener:(id)arg1 error:(id *)arg2;
- (_Bool)removeStateUpdateListener:(id)arg1 error:(id *)arg2;

@end
