/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener;

@protocol BLTPingSubscribing;

@interface BLTRemotePingSubscriberService : NSObject

{
    id <BLTPingSubscribing> _delegate;
    NSXPCConnection *_connectionToServer;
    NSXPCConnection *_connectionFromServer;
    NSXPCListener *_listener;
    NSString *_machServiceName;
}

@property (retain, nonatomic) NSXPCConnection *connectionToServer;
@property (retain, nonatomic) NSXPCConnection *connectionFromServer;
@property (retain, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) NSString *machServiceName;
@property (weak, nonatomic) id <BLTPingSubscribing> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMachServiceName:(id)arg1;
- (void)_connect;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(_Bool)arg2 withAck:(_Bool)arg3 ackAllowedOnLocalConnection:(_Bool)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)_createXPCService;

@end
