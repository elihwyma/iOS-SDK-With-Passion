/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCPaywallTopOffsetConfiguration, FCPaywallVisualSpecConfiguration, FCSubscriptionButtonConfiguration, NSString, NSURL;

@interface FCPaywallConfiguration : NSObject <Swift>

{
    unsigned long long _paywallType;
    NSString *_title;
    NSString *_descriptionTrial;
    NSString *_descriptionNonTrial;
    NSString *_learnMoreTitle;
    NSURL *_learnMoreURL;
    FCSubscriptionButtonConfiguration *_subscriptionButtonConfig;
    FCPaywallVisualSpecConfiguration *_visualSpecConfig;
    FCPaywallTopOffsetConfiguration *_paywallTopOffsetConfig;
}

@property (nonatomic) unsigned long long paywallType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *learnMoreTitle;
@property (copy, nonatomic) NSURL *learnMoreURL;
@property (retain, nonatomic) FCPaywallVisualSpecConfiguration *visualSpecConfig;
@property (retain, nonatomic) FCSubscriptionButtonConfiguration *subscriptionButtonConfig;
@property (copy, nonatomic) NSString *descriptionTrial;
@property (copy, nonatomic) NSString *descriptionNonTrial;
@property (nonatomic, readonly) FCPaywallTopOffsetConfiguration *paywallTopOffsetConfig;

+ (id)defaultPaywallTitle;
+ (id)defaultPaywallDescription;
+ (id)defaultPaywallTopOffsetConfiguration;
+ (id)defaultSmallPaywallTitle;
+ (id)defaultArticleHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultPDFHardPaywallWithLandingPageArticleID:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPaywallType:(unsigned long long)arg1 title:(id)arg2 descriptionTrial:(id)arg3 descriptionNonTrial:(id)arg4 learnMoreTitle:(id)arg5 learnMoreURL:(id)arg6 subscriptionButtonConfig:(id)arg7 visualSpecConfig:(id)arg8 paywallTopOffsetConfig:(id)arg9;

@end
