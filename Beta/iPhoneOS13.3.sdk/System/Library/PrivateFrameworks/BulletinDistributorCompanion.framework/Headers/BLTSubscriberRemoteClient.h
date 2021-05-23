/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface BLTSubscriberRemoteClient : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)subscriptionInfos;
- (id)sectionIDs;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingSubscriberDidLoad;
- (id)sectionIDsForBulletins;

@end
