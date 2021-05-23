/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSProxy.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCCoverArt, FCFeedPersonalizedItemScoreProfile, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSSet, NSString, NSURL;

@protocol FCChannelProviding, FCHeadlineMetadata, FCHeadlineProviding, FCHeadlineStocksFields, FCNativeAdProviding;

@interface FCProxyHeadline : NSProxy

{
    id <FCHeadlineProviding> _headline;
    id <FCHeadlineMetadata> _overrideMetadata;
    unsigned long long _overrideStoryType;
    FCTopStoriesStyleConfiguration *_overrideStoryStyle;
}

@property (copy, nonatomic, readonly) id <FCHeadlineProviding> originalHeadline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long feedElementType;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *sourceFeedID;
@property (copy, nonatomic, readonly) NSString *itemID;
@property (copy, nonatomic, readonly) NSDate *publishDate;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (copy, nonatomic, readonly) NSString *publisherID;
@property (copy, nonatomic, readonly) NSArray *topicIDs;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) _Bool hasGlobalUserFeedback;
@property (nonatomic, readonly, getter=isANF) _Bool anf;
@property (nonatomic, readonly, getter=isPaid) _Bool paid;
@property (nonatomic, readonly) _Bool hasVideo;
@property (nonatomic, readonly, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (nonatomic, readonly, getter=isBundlePaid) _Bool bundlePaid;
@property (nonatomic, readonly) long long bodyTextLength;
@property (nonatomic, readonly) _Bool isFeatured;
@property (copy, nonatomic, readonly) NSString *feedID;
@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSString *clusterID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) unsigned long long order;
@property (copy, nonatomic, readonly) NSString *sourceChannelID;
@property (nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property (nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, readonly, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property (nonatomic, readonly, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly) long long publisherArticleVersion;
@property (nonatomic, readonly) _Bool canBePurchased;
@property (copy, nonatomic, readonly) id <FCChannelProviding> sourceChannel;
@property (copy, nonatomic, readonly) NSString *versionIdentifier;
@property (copy, nonatomic, readonly) NSString *referencedArticleID;
@property (copy, nonatomic, readonly) NSString *primaryAudience;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *titleCompact;
@property (nonatomic, readonly) long long backendArticleVersion;
@property (copy, nonatomic, readonly) NSString *sourceName;
@property (nonatomic, readonly) struct CGRect thumbnailFocalFrame;
@property (nonatomic, readonly) _Bool hasThumbnail;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailLQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnail;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailMedium;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidget;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (copy, nonatomic, readonly) NSString *shortExcerpt;
@property (copy, nonatomic, readonly) NSString *accessoryText;
@property (copy, nonatomic, readonly) NSURL *contentURL;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;
@property (copy, nonatomic, readonly) NSDate *lastFetchedDate;
@property (copy, nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly, getter=isFeatureCandidate) _Bool featureCandidate;
@property (nonatomic, readonly, getter=isSponsored) _Bool sponsored;
@property (nonatomic, readonly, getter=isDisplayingAsNativeAd) _Bool displayAsNativeAd;
@property (copy, nonatomic, readonly) NSString *sponsoredBy;
@property (copy, nonatomic, readonly) NSArray *iAdCategories;
@property (copy, nonatomic, readonly) NSArray *iAdKeywords;
@property (copy, nonatomic, readonly) NSArray *iAdSectionIDs;
@property (copy, nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (copy, nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly, getter=isDeleted) _Bool deleted;
@property (nonatomic, readonly) _Bool isDraft;
@property (copy, nonatomic, readonly) NSString *localDraftPath;
@property (copy, nonatomic, readonly) NSArray *relatedArticleIDs;
@property (copy, nonatomic, readonly) NSArray *moreFromPublisherArticleIDs;
@property (nonatomic, readonly) FCCoverArt *coverArt;
@property (copy, nonatomic, readonly) NSString *videoCallToActionTitle;
@property (copy, nonatomic, readonly) NSURL *videoCallToActionURL;
@property (copy, nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) _Bool needsRapidUpdates;
@property (nonatomic, readonly) _Bool showMinimalChrome;
@property (nonatomic, readonly, getter=isPressRelease) _Bool pressRelease;
@property (nonatomic, readonly, getter=isBoundToContext) _Bool boundToContext;
@property (nonatomic, readonly, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property (copy, nonatomic, readonly) NSString *surfacedBySectionID;
@property (copy, nonatomic, readonly) NSString *surfacedByChannelID;
@property (copy, nonatomic, readonly) NSString *surfacedByTopicID;
@property (copy, nonatomic, readonly) NSString *surfacedByBinID;
@property (copy, nonatomic, readonly) NSSet *surfacedByTagIDs;
@property (nonatomic, readonly) double tileProminenceScore;
@property (nonatomic, readonly) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (nonatomic, readonly) _Bool isTopStory;
@property (nonatomic, readonly) unsigned long long topStoryType;
@property (nonatomic, readonly) _Bool usesImageOnTopLayout;
@property (nonatomic, readonly) unsigned long long feedOrder;
@property (nonatomic, readonly) unsigned long long storyType;
@property (nonatomic, readonly) FCTopStoriesStyleConfiguration *storyStyle;
@property (copy, nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) _Bool showSubscriptionRequiredText;
@property (nonatomic, readonly) _Bool isBlockedExplicitContent;
@property (nonatomic, readonly) _Bool showPublisherLogo;
@property (nonatomic, readonly) id <FCNativeAdProviding> associatedAd;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly) id <FCHeadlineStocksFields> stocksFields;
@property (nonatomic, readonly) NSData *backingArticleRecordData;
@property (copy, nonatomic, readonly) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property (nonatomic, readonly) _Bool webEmbedsEnabled;
@property (copy, nonatomic, readonly) FCIssue *masterIssue;
@property (nonatomic, readonly, getter=isIssueOnly) _Bool issueOnly;
@property (nonatomic, readonly) _Bool showBundleSoftPaywall;
@property (copy, nonatomic, readonly) NSArray *linkedArticleIDs;
@property (copy, nonatomic, readonly) NSArray *linkedIssueIDs;
@property (copy, nonatomic, readonly) NSString *callToActionText;
@property (nonatomic, readonly) _Bool isLocalDraft;
@property (nonatomic, readonly) _Bool useTransparentNavigationBar;

- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithHeadline:(id)arg1 overrideMetadata:(id)arg2 configuration:(id)arg3;

@end
