/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class APSConnection, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface WBSCloudHistoryPushAgent : NSObject

{
    NSXPCListener *_xpcListener;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushNotificationStateQueue;
}

@property (nonatomic, setter=_setHasUnacknowledgedPushNotifications:) _Bool _hasUnacknowledgedPushNotifications;
@property (nonatomic, setter=_setHasAcknowlegedPushNotifications:) _Bool _hasAcknowledgedPushNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)_pushTopic;
- (void)clearAcknowledgedPushNotifications;
- (void)acknowledgePendingPushNotifications;
- (void)getPushNotifications:(CDUnknownBlockType)arg1;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;

@end
