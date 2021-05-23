/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBRecommendationBrickExposure : PBCodable

{
    NSString *_feedId;
    int _feedType;
    int _recommendationBrickType;
    NSMutableArray *_recommendedFeedIds;
    _Bool _exposedFromReferredUser;
    struct {
        unsigned int feedType:1;
        unsigned int recommendationBrickType:1;
        unsigned int exposedFromReferredUser:1;
    } _has;
}

@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSMutableArray *recommendedFeedIds;
@property (nonatomic) _Bool hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic) _Bool hasExposedFromReferredUser;
@property (nonatomic) _Bool exposedFromReferredUser;

+ (Class)recommendedFeedIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;
- (id)recommendationBrickTypeAsString:(int)arg1;
- (int)StringAsRecommendationBrickType:(id)arg1;
- (void)addRecommendedFeedIds:(id)arg1;
- (void)clearRecommendedFeedIds;
- (unsigned long long)recommendedFeedIdsCount;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)arg1;

@end
