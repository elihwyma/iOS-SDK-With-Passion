/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBDiscoverMoreInterstitialExposure : PBCodable

{
    int _nextArticleAffordanceType;
    NSString *_tappedNextArticleAffordanceFeedId;
    int _userAction;
    _Bool _withNextArticleAffordance;
    struct {
        unsigned int nextArticleAffordanceType:1;
        unsigned int userAction:1;
        unsigned int withNextArticleAffordance:1;
    } _has;
}

@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) _Bool hasWithNextArticleAffordance;
@property (nonatomic) _Bool withNextArticleAffordance;
@property (nonatomic) _Bool hasNextArticleAffordanceType;
@property (nonatomic) int nextArticleAffordanceType;
@property (nonatomic, readonly) _Bool hasTappedNextArticleAffordanceFeedId;
@property (retain, nonatomic) NSString *tappedNextArticleAffordanceFeedId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (int)StringAsNextArticleAffordanceType:(id)arg1;

@end
