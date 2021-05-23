/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBFeatureIdFeatureValuePair : PBCodable

{
    NSString *_featureId;
    float _value;
    struct {
        unsigned int value:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFeatureId;
@property (retain, nonatomic) NSString *featureId;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) float value;

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
