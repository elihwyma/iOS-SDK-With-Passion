/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, HDHealthStoreClient, HDHealthStoreServer, HDProfile, NSString;

@protocol OS_dispatch_queue;

@interface HDSubserver : NSObject

{
    HDDaemon *_daemon;
    HDHealthStoreServer *_server;
    HDHealthStoreClient *_client;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic, readonly) HDDaemon *daemon;
@property (weak, nonatomic, readonly) HDHealthStoreServer *server;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)diagnosticDescription;
- (id)initWithParentServer:(id)arg1;
- (void)requirePrivateHealthKitEntitlementUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)requireEntitlement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
