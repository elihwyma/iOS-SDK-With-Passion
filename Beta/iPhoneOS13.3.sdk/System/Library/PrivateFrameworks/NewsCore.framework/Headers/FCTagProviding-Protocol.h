/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCAssetHandle, FCColor, FCPaywallConfiguration, NSArray, NSData, NSDate, NSString, NTPBPublisherPaidDescriptionStrings;

@protocol FCChannelProviding, FCFeedTheming, FCSectionProviding, FCTagStocksFields, FCTopicProviding;

@protocol FCTagProviding <Swift>

@property (nonatomic, readonly) unsigned long long tagType;
@property (nonatomic, readonly) _Bool hideAccessoryText;
@property (nonatomic, readonly) id <FCChannelProviding> asChannel;
@property (nonatomic, readonly) id <FCSectionProviding> asSection;
@property (nonatomic, readonly) id <FCTopicProviding> asTopic;
@property (nonatomic, readonly) NSDate *loadDate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *nameCompact;
@property (copy, nonatomic, readonly) NSString *versionKey;
@property (copy, nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) long long contentProvider;
@property (nonatomic, readonly) _Bool isPublic;
@property (nonatomic, readonly) _Bool isDeprecated;
@property (nonatomic, readonly) _Bool isExplicitContent;
@property (copy, nonatomic, readonly) NSString *replacementID;
@property (copy, nonatomic, readonly) NSString *primaryAudience;
@property (nonatomic, readonly) _Bool isSubscribable;
@property (nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *feedNavImageAssetHandle;
@property (copy, nonatomic, readonly) NSString *coverArticleListID;
@property (copy, nonatomic, readonly) id <FCFeedTheming> theme;
@property (copy, nonatomic, readonly) FCColor *groupTitleColor;
@property (copy, nonatomic, readonly) FCColor *groupDarkStyleTitleColor;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly) _Bool isNotificationEnabled;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *magazineGenre;
@property (copy, nonatomic, readonly) NSString *publisherPaidAuthorizationURL;
@property (copy, nonatomic, readonly) NSString *publisherPaidVerificationURL;
@property (copy, nonatomic, readonly) NSString *publisherPaidWebAccessURL;
@property (nonatomic, readonly) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (nonatomic, readonly) NSArray *publisherPaidBundlePurchaseIDs;
@property (nonatomic, readonly) NSArray *publisherPaidOfferableConfigurations;
@property (nonatomic, readonly) _Bool publisherPaidLeakyPaywallOptOut;
@property (nonatomic, readonly) _Bool publisherPaidWebAccessOptIn;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageCompactAssetHandle;
@property (nonatomic, readonly) _Bool isBlockedExplicitContent;
@property (nonatomic, readonly) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (nonatomic, readonly) unsigned long long groupingEligibility;
@property (nonatomic, readonly) _Bool isHidden;
@property (nonatomic, readonly) _Bool isRealTimeTrackingEnabled;
@property (nonatomic, readonly) _Bool isArticleReadCountReportingEnabled;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property (nonatomic, readonly) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property (nonatomic, readonly) id <FCTagStocksFields> stocksFields;
@property (copy, nonatomic, readonly) FCPaywallConfiguration *paidBundlePaywallConfiguration;
@property (nonatomic, readonly) NSData *backingTagRecordData;

- (unsigned short)isEqualToTag: /* Error: Ran out of types for this method. */;
- (unsigned short)freeFeedIDForBin: /* Error: Ran out of types for this method. */;
- (unsigned short)feedIDForBin: /* Error: Ran out of types for this method. */;
- (unsigned short)isPurchaseSetup;
- (unsigned short)paidFeedIDForBin: /* Error: Ran out of types for this method. */;
- (unsigned short)isNoLongerAvailable;
- (unsigned short)isAuthenticationSetup;
- (unsigned short)prefetchPurchaseOffer;
- (unsigned short)authorizationURL;
- (unsigned short)ppt_overrideFeedID: /* Error: Ran out of types for this method. */;

@end
