/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Preferences/PSBundleController.h>

@class CTXPCServiceSubscriptionContext, NSArray, NSOrderedSet, PSListController, TPSTelephonyController;

@interface TPSBundleController : PSBundleController

{
    _Bool _supportsDisabledSubscriptions;
    TPSTelephonyController *_telephonyController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    NSArray *_specifiers;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (copy, nonatomic) NSArray *specifiers;
@property (weak, nonatomic, readonly) PSListController *parentListController;
@property (nonatomic, readonly) TPSTelephonyController *telephonyController;
@property (copy, nonatomic, readonly) NSOrderedSet *subscriptions;
@property (copy, nonatomic, readonly) NSOrderedSet *supportedSubscriptions;
@property (nonatomic, readonly) _Bool supportsDisabledSubscriptions;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isSubscriptionListHidden) _Bool subscriptionListHidden;

- (id)initWithParentListController:(id)arg1;
- (id)specifiersWithSpecifier:(id)arg1;
- (id)subscriptionContextForSpecifier:(id)arg1;
- (void)telephonyController:(id)arg1 didChangeActiveSubscriptions:(id)arg2;
- (void)telephonyController:(id)arg1 didChangeSubscriptions:(id)arg2;

@end
