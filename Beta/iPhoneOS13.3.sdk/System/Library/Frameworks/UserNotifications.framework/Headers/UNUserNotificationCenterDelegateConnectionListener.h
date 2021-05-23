/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface UNUserNotificationCenterDelegateConnectionListener : NSObject

{
    NSMutableDictionary *_listenerByBundleIdentifier;
    NSMutableDictionary *_delegateByBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_queue_setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_ensureListenerForBundleIdentifier:(id)arg1;
- (void)_queue_invalidateListenerForBundleIdentifier:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;

@end
