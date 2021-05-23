/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOWiFiQualityFeedback : PBCodable

{
    unsigned int _maxValue;
    int _type;
    unsigned int _value;
    struct {
        unsigned int has_maxValue:1;
        unsigned int has_type:1;
        unsigned int has_value:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) unsigned int value;
@property (nonatomic) _Bool hasMaxValue;
@property (nonatomic) unsigned int maxValue;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
