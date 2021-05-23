/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSOptional, VSStoreURLBag;

__attribute__((visibility("hidden")))
@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation

{
    NSArray *_unlimitedIdentityProviders;
    VSOptional *_result;
    VSStoreURLBag *_bag;
}

@property (retain, nonatomic) VSStoreURLBag *bag;
@property (copy, nonatomic) NSArray *unlimitedIdentityProviders;
@property (retain, nonatomic) VSOptional *result;

- (id)init;
- (void)executionDidBegin;

@end
