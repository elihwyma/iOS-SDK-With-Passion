/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionFetchOptionsValidator : NSObject

{
    VSSubscriptionPredicateFactory *_predicateFactory;
}

@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;

- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1;
- (id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2;

@end
