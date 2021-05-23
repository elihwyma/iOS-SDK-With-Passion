/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class APSConnection, NSMutableDictionary, NSOperationQueue, NSString, PKPushRegistry;

@protocol OS_dispatch_queue;

@interface CKNotificationListener : NSObject

{
    NSString *_apsEnvironment;
    NSMutableDictionary *_subscriptionInfos;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    PKPushRegistry *_pushRegistry;
    APSConnection *_apsConnection;
    NSString *_machServiceName;
    unsigned long long _strategy;
}

@property (retain, nonatomic) NSMutableDictionary *subscriptionInfos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) PKPushRegistry *pushRegistry;
@property (nonatomic, readonly) NSString *apsEnvironment;
@property (retain, nonatomic) APSConnection *apsConnection;
@property (copy, nonatomic) NSString *machServiceName;
@property (nonatomic) unsigned long long strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)suggestedStrategy;

- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)registerForSubscription:(id)arg1 inDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)unregisterForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2;
- (id)initWithStrategy:(unsigned long long)arg1;
- (id)initWithStrategy:(unsigned long long)arg1 machServiceName:(id)arg2;
- (void)checkConfiguration;
- (_Bool)hasAPSConnectionInitiateEntitlement;
- (id)uniqueKeyForSubscriptionID:(id)arg1 inDatabase:(id)arg2;
- (void)updatePushNotificationListeners;
- (void)updateAPSConnection;
- (void)updatePKPushRegistry;
- (void)registerForMachServiceAPSConnectionNotifications;
- (void)handlePushNotificationWithPayload:(id)arg1;
- (_Bool)hasInitializedAPSConnection;
- (_Bool)isRegisteredForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2;

@end
