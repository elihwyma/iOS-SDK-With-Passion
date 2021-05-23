/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Preferences/PSListItemsController.h>

@class CTXPCServiceSubscriptionContext;

@interface TPSListItemsController : PSListItemsController

{
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;

- (void)setSpecifier:(id)arg1;

@end
