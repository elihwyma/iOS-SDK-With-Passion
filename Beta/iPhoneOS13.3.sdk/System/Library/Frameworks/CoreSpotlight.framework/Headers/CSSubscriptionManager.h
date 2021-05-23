/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject

{
    PSSSSubscriptionManager *_internal;
}

+ (id)sharedManager;

- (id)init;
- (void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2;
- (void)unregisterSubscriptionWithInfo:(id)arg1;
- (void)unregisterAllSubscriptions;

@end
