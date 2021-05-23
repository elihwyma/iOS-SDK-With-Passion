/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface BLTUserNotificationList : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)_invalidate;
- (void)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)isNotificationImminentWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
