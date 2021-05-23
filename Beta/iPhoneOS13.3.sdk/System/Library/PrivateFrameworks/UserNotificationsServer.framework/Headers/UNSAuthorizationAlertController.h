/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface UNSAuthorizationAlertController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_bundleIdentifersForActiveAlerts;
    NSMutableDictionary *_bundleIdentifiersToResultBlocks;
}

- (id)initWithQueue:(id)arg1;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)_queue_addResultBlock:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)_queue_isAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_addAlertActiveForBundleIdentifier:(id)arg1;
- (void)_presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2;
- (void)presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(CDUnknownBlockType)arg3;

@end
