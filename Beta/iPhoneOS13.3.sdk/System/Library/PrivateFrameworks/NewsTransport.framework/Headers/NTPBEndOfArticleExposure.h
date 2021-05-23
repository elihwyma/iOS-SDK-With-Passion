/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBEndOfArticleExposure : PBCodable

{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    int _articleType;
    int _backendArticleVersion;
    int _characterCount;
    NSString *_feedId;
    NSData *_feedViewExposureId;
    NSString *_language;
    NSMutableArray *_namedEntities;
    int _publisherArticleVersion;
    NSMutableArray *_recommendedArticleIds;
    NSString *_referencedArticleId;
    NSMutableArray *_referencedRecommendedArticleIds;
    NSString *_sectionHeadlineId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int characterCount:1;
        unsigned int publisherArticleVersion:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasIsUserSubscribedToFeed;
@property (nonatomic) _Bool isUserSubscribedToFeed;
@property (retain, nonatomic) NSMutableArray *recommendedArticleIds;
@property (retain, nonatomic) NSMutableArray *referencedRecommendedArticleIds;
@property (nonatomic) _Bool hasArticleType;
@property (nonatomic) int articleType;
@property (nonatomic) _Bool hasCharacterCount;
@property (nonatomic) int characterCount;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *namedEntities;
@property (nonatomic) _Bool hasPublisherArticleVersion;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) _Bool hasBackendArticleVersion;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic, readonly) _Bool hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;
@property (nonatomic, readonly) _Bool hasSurfacedBySectionId;
@property (retain, nonatomic) NSString *surfacedBySectionId;
@property (nonatomic, readonly) _Bool hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *surfacedByTopicId;
@property (nonatomic, readonly) _Bool hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (nonatomic) _Bool hasPersonalizationTreatmentId;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) _Bool hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic) _Bool hasBackendArticleVersionInt64;
@property (nonatomic) long long backendArticleVersionInt64;

+ (Class)namedEntitiesType;
+ (Class)recommendedArticleIdType;
+ (Class)referencedRecommendedArticleIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearNamedEntities;
- (void)addNamedEntities:(id)arg1;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (id)articleTypeAsString:(int)arg1;
- (int)StringAsArticleType:(id)arg1;
- (void)addRecommendedArticleId:(id)arg1;
- (void)addReferencedRecommendedArticleIds:(id)arg1;
- (void)clearRecommendedArticleIds;
- (unsigned long long)recommendedArticleIdsCount;
- (id)recommendedArticleIdAtIndex:(unsigned long long)arg1;
- (void)clearReferencedRecommendedArticleIds;
- (unsigned long long)referencedRecommendedArticleIdsCount;
- (id)referencedRecommendedArticleIdsAtIndex:(unsigned long long)arg1;

@end
