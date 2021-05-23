/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BLTBulletinDistributorSubscriber, NSString;

@interface BLTLocalPingSubscriberService : NSObject

{
    BLTBulletinDistributorSubscriber *_subscriber;
}

@property (retain, nonatomic) BLTBulletinDistributorSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(_Bool)arg2 withAck:(_Bool)arg3 ackAllowedOnLocalConnection:(_Bool)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;
- (void)subscribeWithMachServiceName:(id)arg1;

@end
