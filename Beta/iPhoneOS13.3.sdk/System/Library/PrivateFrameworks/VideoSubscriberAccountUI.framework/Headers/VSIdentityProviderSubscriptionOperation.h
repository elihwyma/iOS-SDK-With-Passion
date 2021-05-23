/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperationQueue, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation

{
    VSIdentityProvider *_identityProvider;
    NSArray *_subscriptionsToAdd;
    NSArray *_subscriptionsToRemoveByBundleID;
    NSOperationQueue *_privateQueue;
}

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSArray *subscriptionsToAdd;
@property (copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (id)_authorizedBundleIdsFromAppDescriptions:(id)arg1;
- (void)_removeSubscriptionsForBundleIdentifiers:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2;
- (void)_registerSubscriptions:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2;

@end
