/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSSet, NSString;

@interface FCBundleSubscription : NSObject <Swift>

{
    _Bool _isPurchaser;
    _Bool _isAmplifyUser;
    NSString *_bundlePurchaseID;
    NSSet *_bundleChannelIDs;
    unsigned long long _unprotectedSubscriptionState;
}

@property (copy, nonatomic) NSString *bundlePurchaseID;
@property (nonatomic) unsigned long long unprotectedSubscriptionState;
@property (nonatomic) _Bool isPurchaser;
@property (nonatomic) _Bool isAmplifyUser;
@property (copy, nonatomic) NSSet *bundleChannelIDs;
@property (nonatomic, readonly) _Bool isSubscribed;
@property (nonatomic, readonly) unsigned long long subscriptionState;

+ (_Bool)supportsSecureCoding;
+ (id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)containsTagID:(id)arg1;
- (_Bool)containsHeadline:(id)arg1;
- (id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 inTrialPeriod:(_Bool)arg3 isPurchaser:(_Bool)arg4 isAmplifyUser:(_Bool)arg5;

@end
