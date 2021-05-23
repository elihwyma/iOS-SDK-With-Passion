/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol BLTPingService;

@interface BLTPingSubscriber : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_pingHandlers;
    id <BLTPingService> _service;
}

@property (retain, nonatomic) NSMutableDictionary *pingHandlers;
@property (retain, nonatomic) id <BLTPingService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)subscriptionInfos;
- (id)sectionIDs;
- (id)initWithService:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unsubscribeFromSectionID:(id)arg1;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)pingSubscriberDidLoad;
- (id)sectionIDsForBulletins;
- (void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(_Bool)arg4 forNotifications:(_Bool)arg5;
- (void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(_Bool)arg4;
- (void)subscribeToSectionID:(id)arg1 withPingHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingAckHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingAckForwardHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckForwardHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckForwardForAnyConnectionHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withNotificationHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withNotificationAckHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withNotificationAckForwardHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToSectionID:(id)arg1 withNotificationAckForwardForAnyConnectionHandler:(CDUnknownBlockType)arg2;
- (void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3;

@end
