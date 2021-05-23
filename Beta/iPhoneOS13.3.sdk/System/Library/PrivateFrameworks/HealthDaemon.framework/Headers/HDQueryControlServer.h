/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HDQueryControlServer : HDSubserver <Swift>

{
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryServerEndpointsByUUID;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)remote_createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)removeTaskServerObserver:(id)arg1;
- (_Bool)_lock_hasActiveQueries;
- (void)_startQueryServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)taskServerDidFailToInitializeForUUID:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (id)taskServerWithUUID:(id)arg1;
- (void)queryServer:(id)arg1 shouldStartWithCompletion:(CDUnknownBlockType)arg2;
- (void)queryServerDidFinish:(id)arg1;
- (id)initWithParentServer:(id)arg1 connectionQueue:(id)arg2;
- (_Bool)_hasActiveQueries;

@end
