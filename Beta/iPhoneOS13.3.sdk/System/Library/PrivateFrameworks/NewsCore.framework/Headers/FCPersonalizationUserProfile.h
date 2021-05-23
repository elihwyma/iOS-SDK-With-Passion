/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCBundleSubscription, NSSet;

@interface FCPersonalizationUserProfile : NSObject <Swift>

{
    NSSet *_subscribedTagIDs;
    NSSet *_mutedTagIDs;
    NSSet *_autofavoritedTagIDs;
    NSSet *_purchasedTagIDs;
    NSSet *_readArticleIDs;
    NSSet *_seenArticleIDs;
    FCBundleSubscription *_bundleSubscription;
}

@property (copy, nonatomic, readonly) NSSet *subscribedTagIDs;
@property (copy, nonatomic, readonly) NSSet *mutedTagIDs;
@property (copy, nonatomic, readonly) NSSet *autofavoritedTagIDs;
@property (copy, nonatomic, readonly) NSSet *purchasedTagIDs;
@property (nonatomic, readonly) NSSet *readArticleIDs;
@property (nonatomic, readonly) NSSet *seenArticleIDs;
@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 autofavoritedTagIDs:(id)arg3 purchasedTagIDs:(id)arg4 readArticleIDs:(id)arg5 seenArticleIDs:(id)arg6 bundleSubscription:(id)arg7;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 autofavoritedTagIDs:(id)arg3 purchasedTagIDs:(id)arg4 bundleSubscription:(id)arg5;

@end
