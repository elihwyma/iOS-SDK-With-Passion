/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface UNSDaemonLauncher : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_connectionByBundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_ensureConnectionForBundleIdentifier:(id)arg1;
- (void)_queue_interruptedConnectionForBundleIdentifier:(id)arg1;
- (void)_queue_invalidatedConnectionForBundleIdentifier:(id)arg1;

@end
