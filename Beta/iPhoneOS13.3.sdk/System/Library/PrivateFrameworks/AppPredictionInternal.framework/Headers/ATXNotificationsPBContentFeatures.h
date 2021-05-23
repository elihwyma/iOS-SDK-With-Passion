/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ATXNotificationsPBContentFeatures : PBCodable

{
    float _maxEntityScore;
    float _sumCount;
    float _titleMatch;
    float _uniqueCount;
    struct {
        unsigned int maxEntityScore:1;
        unsigned int sumCount:1;
        unsigned int titleMatch:1;
        unsigned int uniqueCount:1;
    } _has;
}

@property (nonatomic) _Bool hasSumCount;
@property (nonatomic) float sumCount;
@property (nonatomic) _Bool hasTitleMatch;
@property (nonatomic) float titleMatch;
@property (nonatomic) _Bool hasUniqueCount;
@property (nonatomic) float uniqueCount;
@property (nonatomic) _Bool hasMaxEntityScore;
@property (nonatomic) float maxEntityScore;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
