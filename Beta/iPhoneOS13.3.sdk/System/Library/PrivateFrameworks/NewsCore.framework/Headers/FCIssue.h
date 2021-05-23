/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCAssetHandle, FCColor, FCInterestToken, NSArray, NSDate, NSString, NTPBIssueRecord;

@protocol FCChannelProviding;

@interface FCIssue : NSObject <Swift>

{
    _Bool _isCurrent;
    _Bool _isDraft;
    _Bool _paid;
    NSString *_identifier;
    long long _type;
    NSString *_title;
    NSDate *_publicationDate;
    NSString *_coverDate;
    FCAssetHandle *_metadataJSONAssetHandle;
    FCAssetHandle *_coverImageAssetHandle;
    double _coverImageAspectRatio;
    FCColor *_coverImagePrimaryColor;
    NSString *_layeredCoverJSON;
    double _layeredCoverAspectRatio;
    FCColor *_layeredCoverPrimaryColor;
    long long _minimumNewsVersion;
    NSString *_notificationDescription;
    NSString *_issueDescription;
    NSArray *_allArticleIDs;
    NSArray *_bundleFeaturedArticleIDs;
    NSString *_coverArticleID;
    NSArray *_allowedStorefrontIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_topicTagIDs;
    id <FCChannelProviding> _sourceChannel;
    FCInterestToken *_interestToken;
    NTPBIssueRecord *_issueRecord;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (nonatomic, readonly) NTPBIssueRecord *issueRecord;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSDate *publicationDate;
@property (copy, nonatomic, readonly) NSString *coverDate;
@property (nonatomic, readonly) FCAssetHandle *metadataJSONAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property (nonatomic, readonly) double coverImageAspectRatio;
@property (copy, nonatomic, readonly) FCColor *coverImagePrimaryColor;
@property (copy, nonatomic, readonly) NSString *layeredCoverJSON;
@property (nonatomic, readonly) double layeredCoverAspectRatio;
@property (copy, nonatomic, readonly) FCColor *layeredCoverPrimaryColor;
@property (nonatomic, readonly) _Bool isCurrent;
@property (nonatomic, readonly) _Bool isDraft;
@property (nonatomic, readonly, getter=isPaid) _Bool paid;
@property (nonatomic, readonly, getter=isBundlePaid) _Bool bundlePaid;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (copy, nonatomic, readonly) NSString *notificationDescription;
@property (copy, nonatomic, readonly) NSString *issueDescription;
@property (copy, nonatomic, readonly) NSArray *allArticleIDs;
@property (copy, nonatomic, readonly) NSArray *bundleFeaturedArticleIDs;
@property (copy, nonatomic, readonly) NSString *coverArticleID;
@property (copy, nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property (copy, nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (copy, nonatomic, readonly) NSArray *topicTagIDs;
@property (copy, nonatomic, readonly) id <FCChannelProviding> sourceChannel;
@property (nonatomic, readonly) _Bool isBlockedExplicitContent;
@property (nonatomic, readonly) _Bool isLocalDraft;

+ (_Bool)_fakeIssuesTimestamp;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithIssueRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 sourceChannel:(id)arg4;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageAspectRatio:(double)arg8 coverImagePrimaryColor:(id)arg9 layeredCoverJSON:(id)arg10 layeredCoverAspectRatio:(double)arg11 layeredCoverPrimaryColor:(id)arg12 isCurrent:(_Bool)arg13 isDraft:(_Bool)arg14 isPaid:(_Bool)arg15 minimumNewsVersion:(long long)arg16 allArticleIDs:(id)arg17 bundleFeaturedArticleIDs:(id)arg18 coverArticleID:(id)arg19 allowedStorefrontIDs:(id)arg20 blockedStorefrontIDs:(id)arg21 topicTagIDs:(id)arg22 sourceChannel:(id)arg23 notificationDescription:(id)arg24 issueDescription:(id)arg25;
- (id)initWithData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageHQAssetHandle:(id)arg8 coverImageLQAssetHandle:(id)arg9 coverImageAspectRatio:(double)arg10 coverImagePrimaryColor:(id)arg11 layeredCoverJSON:(id)arg12 layeredCoverAspectRatio:(double)arg13 layeredCoverPrimaryColor:(id)arg14 isCurrent:(_Bool)arg15 isDraft:(_Bool)arg16 isPaid:(_Bool)arg17 minimumNewsVersion:(long long)arg18 allArticleIDs:(id)arg19 bundleFeaturedArticleIDs:(id)arg20 coverArticleID:(id)arg21 allowedStorefrontIDs:(id)arg22 blockedStorefrontIDs:(id)arg23 PDFResourceIDs:(id)arg24 topicTagIDs:(id)arg25 sourceChannel:(id)arg26 notificationDescription:(id)arg27 issueDescription:(id)arg28;

@end
