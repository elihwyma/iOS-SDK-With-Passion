/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSMutableArray, NSString, NTPBDate, NTPBRecordBase;

@interface NTPBIssueRecord : PBCodable

{
    double _coverAspectRatio;
    unsigned long long _halfLifeMilliseconds;
    double _layeredCoverAspectRatio;
    long long _minimumNewsVersion;
    NSMutableArray *_allArticleIDs;
    NSMutableArray *_allowedStorefrontIDs;
    NTPBRecordBase *_base;
    NSMutableArray *_blockedStorefrontIDs;
    NSMutableArray *_bundleFeaturedArticleIDs;
    NSString *_channelTagID;
    NSString *_coverArticleID;
    NSString *_coverImageURL;
    NSString *_coverPrimaryColor;
    NSString *_edition;
    NSString *_issueDescription;
    NSString *_layeredCover;
    NSString *_layeredCoverPrimaryColor;
    NSString *_metadataURL;
    NSString *_notificationDescription;
    NSString *_pdfResourceArchiveURL;
    NTPBDate *_publishDate;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
    NSString *_title;
    NSMutableArray *_topicTagIDs;
    int _type;
    _Bool _isDraft;
    _Bool _isPaid;
    struct {
        unsigned int coverAspectRatio:1;
        unsigned int halfLifeMilliseconds:1;
        unsigned int layeredCoverAspectRatio:1;
        unsigned int minimumNewsVersion:1;
        unsigned int type:1;
        unsigned int isDraft:1;
        unsigned int isPaid:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *allArticleIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (nonatomic, readonly) _Bool hasChannelTagID;
@property (retain, nonatomic) NSString *channelTagID;
@property (nonatomic, readonly) _Bool hasCoverArticleID;
@property (retain, nonatomic) NSString *coverArticleID;
@property (nonatomic) _Bool hasCoverAspectRatio;
@property (nonatomic) double coverAspectRatio;
@property (nonatomic, readonly) _Bool hasCoverImageURL;
@property (retain, nonatomic) NSString *coverImageURL;
@property (nonatomic, readonly) _Bool hasCoverPrimaryColor;
@property (retain, nonatomic) NSString *coverPrimaryColor;
@property (nonatomic, readonly) _Bool hasEdition;
@property (retain, nonatomic) NSString *edition;
@property (nonatomic) _Bool hasHalfLifeMilliseconds;
@property (nonatomic) unsigned long long halfLifeMilliseconds;
@property (nonatomic) _Bool hasIsDraft;
@property (nonatomic) _Bool isDraft;
@property (nonatomic) _Bool hasIsPaid;
@property (nonatomic) _Bool isPaid;
@property (nonatomic, readonly) _Bool hasIssueDescription;
@property (retain, nonatomic) NSString *issueDescription;
@property (nonatomic, readonly) _Bool hasLayeredCover;
@property (retain, nonatomic) NSString *layeredCover;
@property (nonatomic) _Bool hasLayeredCoverAspectRatio;
@property (nonatomic) double layeredCoverAspectRatio;
@property (nonatomic, readonly) _Bool hasLayeredCoverPrimaryColor;
@property (retain, nonatomic) NSString *layeredCoverPrimaryColor;
@property (nonatomic, readonly) _Bool hasMetadataURL;
@property (retain, nonatomic) NSString *metadataURL;
@property (nonatomic, readonly) _Bool hasNotificationDescription;
@property (retain, nonatomic) NSString *notificationDescription;
@property (nonatomic, readonly) _Bool hasPublishDate;
@property (retain, nonatomic) NTPBDate *publishDate;
@property (nonatomic, readonly) _Bool hasScores;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *topicTagIDs;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, readonly) _Bool hasPdfResourceArchiveURL;
@property (retain, nonatomic) NSString *pdfResourceArchiveURL;
@property (retain, nonatomic) NSMutableArray *bundleFeaturedArticleIDs;

+ (Class)blockedStorefrontIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)allArticleIDsType;
+ (Class)topicTagIDsType;
+ (Class)bundleFeaturedArticleIDsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)clearBlockedStorefrontIDs;
- (unsigned long long)blockedStorefrontIDsCount;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (void)clearAllowedStorefrontIDs;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (void)addAllArticleIDs:(id)arg1;
- (void)addTopicTagIDs:(id)arg1;
- (void)addBundleFeaturedArticleIDs:(id)arg1;
- (void)clearAllArticleIDs;
- (unsigned long long)allArticleIDsCount;
- (id)allArticleIDsAtIndex:(unsigned long long)arg1;
- (void)clearTopicTagIDs;
- (unsigned long long)topicTagIDsCount;
- (id)topicTagIDsAtIndex:(unsigned long long)arg1;
- (void)clearBundleFeaturedArticleIDs;
- (unsigned long long)bundleFeaturedArticleIDsCount;
- (id)bundleFeaturedArticleIDsAtIndex:(unsigned long long)arg1;

@end
