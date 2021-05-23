/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, PSSSSubscriptionManagerInternal;

@interface WBSParsecSubscriptionManager : NSObject

{
    PSSSSubscriptionManagerInternal *_thirdPartySubscriptionManager;
    NSMutableDictionary *_subscriptionsByProvider;
    _Bool _needsUpdate;
}

@property (nonatomic, readonly) NSArray *subscriptionDictionaries;
@property (nonatomic, readonly) _Bool needsUpdate;

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void)_updateAppleMusicSubscription;
- (void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;
- (void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;
- (void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2;
- (void)removeSubscriptionsAddedAfterDate:(id)arg1;

@end
