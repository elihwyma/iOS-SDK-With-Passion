/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Preferences/PSListController.h>

@class CTXPCServiceSubscriptionContext, NSOrderedSet;

@interface TPSListController : PSListController

{
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    NSOrderedSet *_subscriptions;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (copy, nonatomic) NSOrderedSet *subscriptions;

- (void)setSpecifier:(id)arg1;

@end
