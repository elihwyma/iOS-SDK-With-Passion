/*
 Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener;

@protocol ANAccountNotifierDelegate;

@interface ANAccountNotifier : NSObject

{
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_bulletinResponseListener;
    NSString *_callbackMachService;
    id <ANAccountNotifierDelegate> _delegate;
}

@property (weak, nonatomic) id <ANAccountNotifierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_daemonConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addNotification:(id)arg1;
- (void)_disconnectFromDaemon;
- (void)removeNotificationsWithEventIdentifier:(id)arg1;
- (id)initWithCallbackMachService:(id)arg1;
- (void)_startNotificationCallbackListenerWithMachServiceName:(id)arg1;
- (void)_stopNotificationCallbackListener;
- (id)_createDaemonConnection;
- (void)_daemonConnectionWasInvalidated;
- (void)_daemonConnectionWasInterrupted;
- (void)notificationWasActivated:(id)arg1;
- (void)notificationWasDismissed:(id)arg1;
- (void)notificationWasCleared:(id)arg1;
- (void)removeNotificationWithIdentifier:(id)arg1;

@end
