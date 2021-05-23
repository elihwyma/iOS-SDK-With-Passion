/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class CRCarPlayAppPolicyEvaluator, UNSCriticalAlertAuthorizationAlertController, UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController;

@protocol OS_dispatch_queue;

@interface UNSNotificationAuthorizationService : NSObject

{
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
    CRCarPlayAppPolicyEvaluator *_policyEvaluator;
}

- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (_Bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (_Bool)_queue_isSpokenAvailableForApplication:(id)arg1;
- (id)initWithDataProviderFactory:(id)arg1;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
