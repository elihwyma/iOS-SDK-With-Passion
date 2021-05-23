/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString;

@protocol OS_dispatch_queue;

@interface CPDistributedNotificationCenter : NSObject

{
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource *_receiveNotificationSource;
    _Bool _isServer;
    struct __CFDictionary *_sendPorts;
    unsigned long long _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (struct __CFDictionary *)_serverPortToNotificationCenterMap;
+ (void)setCenter:(id)arg1 forServerPort:(unsigned int)arg2;
+ (id)centerForServerPort:(unsigned int)arg1;
+ (id)centerNamed:(id)arg1;

- (void)dealloc;
- (id)name;
- (id)_initWithServerName:(id)arg1;
- (void)_checkOutAndRemoveSource;
- (void)_checkIn;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop *)arg1;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop *)arg1;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (void)runServer;
- (_Bool)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)_receivedCheckIn:(unsigned int)arg1 auditToken:(CDStruct_6ad76789 *)arg2;
- (void)_notificationServerWasRestarted;
- (void)startDeliveringNotificationsToMainThread;
- (void)stopDeliveringNotifications;
- (void)runServerOnCurrentThread;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;

@end
