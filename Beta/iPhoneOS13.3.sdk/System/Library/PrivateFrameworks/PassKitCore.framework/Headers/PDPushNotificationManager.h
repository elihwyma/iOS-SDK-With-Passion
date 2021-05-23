/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class APSConnection, NSArray, NSHashTable, NSLock, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface PDPushNotificationManager : NSObject

{
    APSConnection *_apsConnection;
    NSMutableSet *_registeredTopics;
    NSString *_pushToken;
    NSHashTable *_consumers;
    NSLock *_consumersLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (copy, nonatomic) NSString *pushToken;
@property (nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSArray *currentConsumers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connect;
- (void)registerConsumer:(id)arg1;
- (void)recalculatePushTopics;
- (void)unregisterConsumer:(id)arg1;
- (void)unregisterAllConsumers;
- (void)simulatePushForTopic:(id)arg1;

@end
