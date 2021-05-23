/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSMutableArray, NSString;

@interface NTPBFeedItem : PBCodable

{
    long long _bodyTextLength;
    unsigned long long _contentType;
    unsigned long long _feedHalfLifeMilliseconds;
    double _globalUserFeedback;
    long long _minimumNewsVersion;
    unsigned long long _order;
    unsigned long long _publishDateMilliseconds;
    long long _publisherArticleVersion;
    NSString *_articleID;
    NSString *_clusterID;
    NSString *_feedID;
    NSString *_parentIssueID;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
    NSString *_sourceChannelID;
    NSMutableArray *_topicIDs;
    _Bool _hasThumbnail;
    _Bool _hasVideo;
    _Bool _isBundlePaid;
    _Bool _isExplicitContent;
    _Bool _isFeatured;
    _Bool _isFromBlockedStorefront;
    _Bool _isHiddenFromAutoFavorites;
    _Bool _isPaid;
    struct {
        unsigned int bodyTextLength:1;
        unsigned int contentType:1;
        unsigned int feedHalfLifeMilliseconds:1;
        unsigned int globalUserFeedback:1;
        unsigned int minimumNewsVersion:1;
        unsigned int order:1;
        unsigned int publishDateMilliseconds:1;
        unsigned int publisherArticleVersion:1;
        unsigned int hasThumbnail:1;
        unsigned int hasVideo:1;
        unsigned int isBundlePaid:1;
        unsigned int isExplicitContent:1;
        unsigned int isFeatured:1;
        unsigned int isFromBlockedStorefront:1;
        unsigned int isHiddenFromAutoFavorites:1;
        unsigned int isPaid:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFeedID;
@property (retain, nonatomic) NSString *feedID;
@property (nonatomic, readonly) _Bool hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic) _Bool hasOrder;
@property (nonatomic) unsigned long long order;
@property (nonatomic) _Bool hasPublishDateMilliseconds;
@property (nonatomic) unsigned long long publishDateMilliseconds;
@property (nonatomic) _Bool hasFeedHalfLifeMilliseconds;
@property (nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic) _Bool hasGlobalUserFeedback;
@property (nonatomic) double globalUserFeedback;
@property (nonatomic, readonly) _Bool hasClusterID;
@property (retain, nonatomic) NSString *clusterID;
@property (nonatomic, readonly) _Bool hasSourceChannelID;
@property (retain, nonatomic) NSString *sourceChannelID;
@property (nonatomic) _Bool hasHasThumbnail;
@property (nonatomic) _Bool hasThumbnail;
@property (nonatomic) _Bool hasIsFromBlockedStorefront;
@property (nonatomic) _Bool isFromBlockedStorefront;
@property (nonatomic) _Bool hasIsExplicitContent;
@property (nonatomic) _Bool isExplicitContent;
@property (nonatomic) _Bool hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic) _Bool hasContentType;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) NSMutableArray *topicIDs;
@property (nonatomic) _Bool hasIsPaid;
@property (nonatomic) _Bool isPaid;
@property (nonatomic) _Bool hasHasVideo;
@property (nonatomic) _Bool hasVideo;
@property (nonatomic) _Bool hasPublisherArticleVersion;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic, readonly) _Bool hasScores;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores;
@property (nonatomic) _Bool hasIsHiddenFromAutoFavorites;
@property (nonatomic) _Bool isHiddenFromAutoFavorites;
@property (nonatomic, readonly) _Bool hasParentIssueID;
@property (retain, nonatomic) NSString *parentIssueID;
@property (nonatomic) _Bool hasIsBundlePaid;
@property (nonatomic) _Bool isBundlePaid;
@property (nonatomic) _Bool hasBodyTextLength;
@property (nonatomic) long long bodyTextLength;
@property (nonatomic) _Bool hasIsFeatured;
@property (nonatomic) _Bool isFeatured;

+ (Class)topicIDsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTopicIDs:(id)arg1;
- (void)clearTopicIDs;
- (unsigned long long)topicIDsCount;
- (id)topicIDsAtIndex:(unsigned long long)arg1;

@end
