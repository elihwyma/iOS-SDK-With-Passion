/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXSubscriptionStatusProvider : NSObject

{
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long bundleSubscriptionStatus;
@property (nonatomic, readonly) long long channelSubscriptionStatus;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithBundleSubscriptionStatus:(long long)arg1 channelSubscriptionStatus:(long long)arg2;

@end
