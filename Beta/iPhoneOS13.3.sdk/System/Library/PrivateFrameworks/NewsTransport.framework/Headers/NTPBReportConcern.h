/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBReportConcern : PBCodable

{
    int _articleFeedCellHostType;
    int _articleFeedCellSection;
    NSString *_articleParentFeedId;
    int _articleParentFeedType;
    int _backendArticleVersion;
    NSString *_clientId;
    NSString *_concernComments;
    int _concernReason;
    NSString *_contentId;
    int _contentType;
    int _feedFeedType;
    NSString *_feedPresentationSearchString;
    int _feedViewPresentationReason;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    int _reportVersion;
    NSString *_userId;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int articleFeedCellHostType:1;
        unsigned int articleFeedCellSection:1;
        unsigned int articleParentFeedType:1;
        unsigned int backendArticleVersion:1;
        unsigned int concernReason:1;
        unsigned int contentType:1;
        unsigned int feedFeedType:1;
        unsigned int feedViewPresentationReason:1;
        unsigned int publisherArticleVersion:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic) int reportVersion;
@property (nonatomic, readonly) _Bool hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) _Bool hasConcernReason;
@property (nonatomic) int concernReason;
@property (nonatomic, readonly) _Bool hasConcernComments;
@property (retain, nonatomic) NSString *concernComments;
@property (nonatomic) _Bool hasContentType;
@property (nonatomic) int contentType;
@property (nonatomic, readonly) _Bool hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic, readonly) _Bool hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) _Bool hasPublisherArticleVersion;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) _Bool hasBackendArticleVersion;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic, readonly) _Bool hasArticleParentFeedId;
@property (retain, nonatomic) NSString *articleParentFeedId;
@property (nonatomic) _Bool hasArticleParentFeedType;
@property (nonatomic) int articleParentFeedType;
@property (nonatomic) _Bool hasFeedFeedType;
@property (nonatomic) int feedFeedType;
@property (nonatomic) _Bool hasArticleFeedCellHostType;
@property (nonatomic) int articleFeedCellHostType;
@property (nonatomic) _Bool hasArticleFeedCellSection;
@property (nonatomic) int articleFeedCellSection;
@property (nonatomic) _Bool hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic, readonly) _Bool hasFeedPresentationSearchString;
@property (retain, nonatomic) NSString *feedPresentationSearchString;
@property (nonatomic) _Bool hasIsUserSubscribedToFeed;
@property (nonatomic) _Bool isUserSubscribedToFeed;
@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) NSString *userId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedViewPresentationReasonAsString:(int)arg1;
- (int)StringAsFeedViewPresentationReason:(id)arg1;
- (id)contentTypeAsString:(int)arg1;
- (int)StringAsContentType:(id)arg1;
- (id)articleParentFeedTypeAsString:(int)arg1;
- (int)StringAsArticleParentFeedType:(id)arg1;
- (id)feedFeedTypeAsString:(int)arg1;
- (int)StringAsFeedFeedType:(id)arg1;
- (id)articleFeedCellHostTypeAsString:(int)arg1;
- (int)StringAsArticleFeedCellHostType:(id)arg1;
- (id)articleFeedCellSectionAsString:(int)arg1;
- (int)StringAsArticleFeedCellSection:(id)arg1;

@end
