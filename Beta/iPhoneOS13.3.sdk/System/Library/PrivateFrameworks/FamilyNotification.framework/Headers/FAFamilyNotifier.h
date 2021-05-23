/*
 Image: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCListener;

@protocol FAFamilyNotificationDelegate;

@interface FAFamilyNotifier : NSObject

{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
    NSString *_identifier;
    NSString *_serviceName;
    id <FAFamilyNotificationDelegate> _delegate;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *serviceName;
@property (weak) id <FAFamilyNotificationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeAllNotifications;
- (void)deliverNotification:(id)arg1;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (id)agentConnection;
- (id)_pendingNotificationsWithClientIdentifier:(id)arg1;
- (void)_agentConnectionWasInterrupted;
- (void)_agentConnectionWasInvalidated;
- (void)_agentConnectionFailedToBootstrap;
- (void)didActivateNotification:(id)arg1;
- (void)didDismissNotification:(id)arg1;
- (id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2;
- (id)pendingNotifications;
- (id)_pendingNotificationsForAllClients;
- (void)didClearNotification:(id)arg1;

@end
