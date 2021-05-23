/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface FCPaidBundleConfiguration : NSObject <Swift>

{
    NSDictionary *_configDict;
    NSString *_storefrontID;
    NSString *_localizedStorefrontID;
    NSArray *_defaultSupportedStoreFronts;
    NSDictionary *_paywallConfigurationsByType;
    NSDictionary *_magazineGenresByGenre;
    NSDictionary *_subscriptionButtonConfigurationsByType;
}

@property (nonatomic, readonly, getter=isFreeBadgeEnabled) _Bool freeBadgeEnabled;
@property (nonatomic, readonly, getter=isPaidBadgeEnabled) _Bool paidBadgeEnabled;
@property (retain, nonatomic) NSDictionary *configDict;
@property (copy, nonatomic, readonly) NSString *storefrontID;
@property (copy, nonatomic, readonly) NSString *localizedStorefrontID;
@property (copy, nonatomic, readonly) NSArray *defaultSupportedStoreFronts;
@property (retain, nonatomic) NSDictionary *paywallConfigurationsByType;
@property (retain, nonatomic) NSDictionary *magazineGenresByGenre;
@property (retain, nonatomic) NSDictionary *subscriptionButtonConfigurationsByType;
@property (nonatomic, readonly, getter=isPaidBundleVisible) _Bool paidBundleVisible;
@property (nonatomic, readonly, getter=isTemporaryAccessEnabled) _Bool temporaryAccessEnabled;
@property (nonatomic, readonly, getter=isSharingIssuesEnabled) _Bool sharingIssuesEnabled;
@property (nonatomic, readonly, getter=areMagazinesEnabled) _Bool magazinesEnabled;
@property (nonatomic, readonly, getter=isFamilySharingSetupEnabled) _Bool familySharingSetupEnabled;
@property (nonatomic, readonly) NSString *defaultLandingPageArticleID;
@property (nonatomic, readonly) NSString *renewalLandingPageArticleID;
@property (nonatomic, readonly) NSString *familySharingLandingPageArticleID;
@property (nonatomic, readonly) NSString *endOfPurchaseFamilySharingSetupArticleID;
@property (nonatomic, readonly) NSString *endOfPurchaseNoFamilySharingSetupArticleID;
@property (nonatomic, readonly) NSArray *restorableBundlePurchaseIDs;
@property (nonatomic, readonly) NSArray *offeredBundlePurchaseIDs;
@property (nonatomic, readonly) long long newIssuesCheckLocalTime;
@property (nonatomic, readonly) long long newIssuesNotificationDeliveryLocalTime;
@property (nonatomic, readonly) NSString *featuredArticlesTagList;
@property (nonatomic, readonly) long long featuredArticlesFetchLimit;
@property (nonatomic, readonly) NSString *recommendableIssuesTagList;
@property (nonatomic, readonly) NSString *vanityURLMappingResourceID;
@property (nonatomic, readonly) long long vanityURLMappingRefreshRate;
@property (nonatomic, readonly) NSString *paidFeedID;
@property (nonatomic, readonly) long long forYouMaxDailyPaidArticlesForFreeUsers;
@property (nonatomic, readonly) long long forYouMaxMagazineGroupsForFreeUsers;
@property (nonatomic, readonly) long long forYouMaxMagazineGroupsForTrialUsers;
@property (nonatomic, readonly) long long forYouMaxMagazineGroupsForPaidUsers;
@property (nonatomic, readonly) long long bundleSubscriptionsGlobalMeteredCount;
@property (nonatomic, readonly) unsigned long long articleHardPaywallType;
@property (nonatomic, readonly) unsigned long long magazineFeedPaywallType;
@property (nonatomic, readonly) long long deferredHardPaywallMinimumBodyTextLength;
@property (nonatomic, readonly, getter=isFreeBadgeEnabledForNonSubscribers) _Bool freeBadgeEnabledForNonSubscribers;
@property (nonatomic, readonly, getter=isPaidBadgeEnabledForNonSubscribers) _Bool paidBadgeEnabledForNonSubscribers;
@property (nonatomic, readonly, getter=isFreeBadgeEnabledForSubscribers) _Bool freeBadgeEnabledForSubscribers;
@property (nonatomic, readonly, getter=isPaidBadgeEnabledForSubscribers) _Bool paidBadgeEnabledForSubscribers;
@property (nonatomic, readonly) NSString *freeBadgeTitle;
@property (nonatomic, readonly) NSString *paidBadgeTitle;
@property (nonatomic, readonly) NSString *expirationAlertDescription;
@property (nonatomic, readonly) long long feedAutoRefreshMinimumInterval;
@property (nonatomic, readonly) long long normalStorageManualIssueDownloadTTL;
@property (nonatomic, readonly) long long lowStorageManualIssueDownloadTTL;
@property (nonatomic, readonly) long long criticalStorageManualIssueDownloadTTL;
@property (nonatomic, readonly) long long normalStorageAutomaticIssueDownloadTTL;
@property (nonatomic, readonly) long long lowStorageAutomaticIssueDownloadTTL;
@property (nonatomic, readonly) long long criticalStorageAutomaticIssueDownloadTTL;
@property (nonatomic, readonly) NSArray *groupWhitelistedTagIds;
@property (nonatomic, readonly) long long entitlementsGracePeriodInSeconds;
@property (nonatomic, readonly, getter=isCategoriesDownloadButtonEnabled) _Bool categoriesDownloadButtonEnabled;
@property (nonatomic, readonly) long long recentIssuesMaxAge;
@property (nonatomic, readonly) long long minimumReadIssuesInMyMagazines;
@property (nonatomic, readonly) long long minimumArticlesInANFIssueBeforeRead;
@property (nonatomic, readonly) long long minimumPagesInPDFIssueBeforeRead;
@property (nonatomic, readonly) long long minimumArticlesBeforeArticleSoftPaywall;
@property (nonatomic, readonly) long long entitlementsCacheExpiredGracePeriodInSeconds;
@property (nonatomic, readonly) long long minFollowedMagazinesToHideSuggestionsCompact;
@property (nonatomic, readonly) long long minFollowedMagazinesToHideSuggestionsRegular;
@property (nonatomic, readonly) unsigned long long appLaunchUpsellPaidVisibility;
@property (nonatomic, readonly) NSString *appLaunchUpsellInstanceID;
@property (nonatomic, readonly) NSString *appLaunchUpsellArticleID;
@property (nonatomic, readonly) long long appLaunchUpsellRequiredAppLaunchCount;
@property (nonatomic, readonly) long long appLaunchUpsellNewSessionBackgroundTimeInterval;

+ (id)defaultLandingPageByLocalizedStorefrontID;
+ (id)defaultFamilySharingLandingPageByLocalizedStorefrontID;
+ (id)defaultEndOfPurchaseFamilySharingSetupArticleIDByLocalizedStorefrontID;
+ (id)defaultEndOfPurchaseNoFamilySharingSetupArticleIDByLocalizedStorefrontID;
+ (id)renewalLandingPageByLocalizedStorefrontID;
+ (id)defaultTagListIDByLocalizedStorefrontID;
+ (id)defaultVanityURLMappingResourceIDByLocalizedStorefrontID;
+ (id)defaultPaidFeedIDByLocalizedStorefrontID;
+ (id)defaultConfigurationForStorefrontID:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 localizedStorefrontID:(id)arg3 defaultSupportedStoreFronts:(id)arg4;
- (id)defaultPaywallConfigs;
- (id)defaultSubscriptionButtonConfigs;
- (id)defaultMagazineGenres;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2;

@end
