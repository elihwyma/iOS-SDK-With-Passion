/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class CKRecord, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;

@protocol FCChannelProviding;

@interface FCSparseFeaturedArticle : NSObject <Swift>

{
    CKRecord *_articleRecord;
    NSString *_storefrontID;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
}

@property (nonatomic, readonly) CKRecord *articleRecord;
@property (copy, nonatomic, readonly) NSString *storefrontID;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores;
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

+ (id)requiredArticleRecordKeysWithStorefrontID:(id)arg1;

- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithArticleRecord:(id)arg1 storefrontID:(id)arg2;

@end
