/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface BLTBulletinDistributorSubscriberList : NSObject

{
    NSMutableArray *_subscribers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *subscribers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)removeSubscriber:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)subscriber:(id)arg1 subscribedWithMachServiceName:(id)arg2;
- (_Bool)hasSubscribersForSectionID:(id)arg1;
- (void)_removeSubscribersWithMachServiceName:(id)arg1 exceptFor:(id)arg2;
- (id)subscribedSectionIDs;

@end
