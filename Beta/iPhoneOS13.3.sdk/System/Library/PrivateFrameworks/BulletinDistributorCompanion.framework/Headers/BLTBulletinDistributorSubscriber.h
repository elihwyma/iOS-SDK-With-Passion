/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, NSXPCConnection;

@protocol BLTBulletinDistributorSubscriberDelegate, BLTBulletinDistributorSubscriberDeviceDelegate, BLTPingSubscribing, OS_dispatch_queue;

@interface BLTBulletinDistributorSubscriber : NSObject

{
    NSMutableDictionary *_subscriptions;
    NSObject<OS_dispatch_queue> *_queue;
    id <BLTBulletinDistributorSubscriberDelegate> _delegate;
    id <BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
    NSString *_machServiceName;
    id <BLTPingSubscribing> _client;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) id <BLTPingSubscribing> client;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSString *machServiceName;
@property (weak) id <BLTBulletinDistributorSubscriberDelegate> delegate;
@property (weak) id <BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;
@property (nonatomic, readonly) NSSet *sectionIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithClient:(id)arg1;
- (void)_connectIfNecessary;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(_Bool)arg2 withAck:(_Bool)arg3 ackAllowedOnLocalConnection:(_Bool)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;
- (void)subscribeWithMachServiceName:(id)arg1;

@end
